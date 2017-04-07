/********************************************************************************
** Form generated from reading UI file 'testagain.ui'
**
** Created: Fri Apr 7 19:43:34 2017
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTAGAIN_H
#define UI_TESTAGAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testagainClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *testagainClass)
    {
        if (testagainClass->objectName().isEmpty())
            testagainClass->setObjectName(QString::fromUtf8("testagainClass"));
        testagainClass->resize(600, 400);
        menuBar = new QMenuBar(testagainClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        testagainClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(testagainClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        testagainClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(testagainClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        testagainClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(testagainClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        testagainClass->setStatusBar(statusBar);

        retranslateUi(testagainClass);

        QMetaObject::connectSlotsByName(testagainClass);
    } // setupUi

    void retranslateUi(QMainWindow *testagainClass)
    {
        testagainClass->setWindowTitle(QApplication::translate("testagainClass", "testagain", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class testagainClass: public Ui_testagainClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTAGAIN_H
