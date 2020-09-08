#include "tesqprocess.h"
#include "ui_tesqprocess.h"

tesQProcess::tesQProcess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tesQProcess)
{
    ui->setupUi(this);
    ui->lineeCommand->setText("ping 8.8.8.8 -c 10");
}

tesQProcess::~tesQProcess()
{
    delete ui;
}

void tesQProcess::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void tesQProcess::on_btnProcess_clicked()
{
    QString str_command;

    /* clear text report */
    ui->txtReport->clear();

    /* create string command and argument */
    str_command = ui->lineeCommand->text();

    /* create QProcess object */
    proc= new QProcess();

//    //proc->start("/bin/bash", QStringList() << "-c" << QString(str_command));
proc->start(QString(str_command));

    /* show output */
    connect(proc, &QProcess::readyReadStandardOutput, this, &tesQProcess::rightMessage);
    connect(proc, &QProcess::readyReadStandardError, this, &tesQProcess::wrongMessage);

	connect(proc, &QProcess::started, this, &tesQProcess::afterProcStarted);
	connect(proc, static_cast<void (QProcess::*)(int, QProcess::ExitStatus)>(&QProcess::finished), this, &tesQProcess::afterProcFinished);
}

void tesQProcess::afterProcStarted()
{
    ui->btnProcess->setDisabled(true);
}
#include <QDebug>
#if QT_VERSION >= QT_VERSION_CHECK(5,9,0)
#include <Qt>
#include <QTextStream>
using Qt::endl;
#endif
void tesQProcess::afterProcFinished(int exitCode, QProcess::ExitStatus exitStatus)
{

qDebug()<<"exitCode="<<exitCode;
qDebug()<<"exitStatus="<<exitStatus<<endl;
    ui->btnProcess->setEnabled(true);
    proc->close();
    delete proc;
    proc = nullptr;
}

// show right message
void tesQProcess::rightMessage()
{
    QByteArray strdata = proc->readAllStandardOutput();
    ui->txtReport->setTextColor(Qt::black);
    ui->txtReport->append(strdata);
}

// show wrong message
void tesQProcess::wrongMessage()
{
    QByteArray strdata = proc->readAllStandardError();
    ui->txtReport->setTextColor(Qt::red);
    ui->txtReport->append(strdata);
}
