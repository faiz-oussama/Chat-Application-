/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *grpChats;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tbClientsChat;
    QGroupBox *grpClients;
    QVBoxLayout *verticalLayout;
    QListWidget *lstClients;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(629, 340);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        grpChats = new QGroupBox(centralwidget);
        grpChats->setObjectName("grpChats");
        verticalLayout_2 = new QVBoxLayout(grpChats);
        verticalLayout_2->setObjectName("verticalLayout_2");
        tbClientsChat = new QTabWidget(grpChats);
        tbClientsChat->setObjectName("tbClientsChat");
        tbClientsChat->setTabsClosable(true);

        verticalLayout_2->addWidget(tbClientsChat);


        horizontalLayout->addWidget(grpChats);

        grpClients = new QGroupBox(centralwidget);
        grpClients->setObjectName("grpClients");
        verticalLayout = new QVBoxLayout(grpClients);
        verticalLayout->setObjectName("verticalLayout");
        lstClients = new QListWidget(grpClients);
        lstClients->setObjectName("lstClients");

        verticalLayout->addWidget(lstClients);

        pushButton = new QPushButton(grpClients);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addWidget(grpClients);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 629, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Server", nullptr));
        grpChats->setTitle(QCoreApplication::translate("MainWindow", "Chats", nullptr));
        grpClients->setTitle(QCoreApplication::translate("MainWindow", "Clients", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Disconnect All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
