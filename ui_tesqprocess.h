/********************************************************************************
** Form generated from reading UI file 'tesqprocess.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESQPROCESS_H
#define UI_TESQPROCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_tesQProcess
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineeCommand;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnProcess;
    QTextEdit *txtReport;

    void setupUi(QDialog *tesQProcess)
    {
        if (tesQProcess->objectName().isEmpty())
            tesQProcess->setObjectName(QStringLiteral("tesQProcess"));
        tesQProcess->resize(495, 338);
        gridLayout = new QGridLayout(tesQProcess);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(tesQProcess);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineeCommand = new QLineEdit(tesQProcess);
        lineeCommand->setObjectName(QStringLiteral("lineeCommand"));

        horizontalLayout->addWidget(lineeCommand);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnProcess = new QPushButton(tesQProcess);
        btnProcess->setObjectName(QStringLiteral("btnProcess"));

        horizontalLayout_3->addWidget(btnProcess);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        txtReport = new QTextEdit(tesQProcess);
        txtReport->setObjectName(QStringLiteral("txtReport"));

        gridLayout->addWidget(txtReport, 2, 0, 1, 1);


        retranslateUi(tesQProcess);

        QMetaObject::connectSlotsByName(tesQProcess);
    } // setupUi

    void retranslateUi(QDialog *tesQProcess)
    {
        tesQProcess->setWindowTitle(QApplication::translate("tesQProcess", "tesQProcess", 0));
        label->setText(QApplication::translate("tesQProcess", "Command :", 0));
        lineeCommand->setText(QApplication::translate("tesQProcess", "ls", 0));
        btnProcess->setText(QApplication::translate("tesQProcess", "Process", 0));
    } // retranslateUi

};

namespace Ui {
    class tesQProcess: public Ui_tesQProcess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESQPROCESS_H
