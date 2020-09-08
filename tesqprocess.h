#ifndef TESQPROCESS_H
#define TESQPROCESS_H

#include <QDialog>
#include <QProcess>

namespace Ui {
    class tesQProcess;
}

class tesQProcess : public QDialog {
    Q_OBJECT
public:
    tesQProcess(QWidget *parent = 0);
    ~tesQProcess();

private slots:
void afterProcStarted();
void afterProcFinished(int exitCode, QProcess::ExitStatus);
    void rightMessage();
    void wrongMessage();
    void on_btnProcess_clicked();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::tesQProcess *ui;

    QProcess *proc;
};

#endif // TESQPROCESS_H
