/********************************************************************************
** Form generated from reading UI file 'ClientChatWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTCHATWIDGET_H
#define UI_CLIENTCHATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientChatWidget
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *lstMessages;
    QWidget *wdgSendMessage;
    QHBoxLayout *horizontalLayout;
    QLabel *lblMessage;
    QLineEdit *lnMessage;
    QPushButton *btnSend;
    QLabel *lblOpenFolder;

    void setupUi(QWidget *ClientChatWidget)
    {
        if (ClientChatWidget->objectName().isEmpty())
            ClientChatWidget->setObjectName("ClientChatWidget");
        ClientChatWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(ClientChatWidget);
        verticalLayout->setObjectName("verticalLayout");
        lstMessages = new QListWidget(ClientChatWidget);
        lstMessages->setObjectName("lstMessages");

        verticalLayout->addWidget(lstMessages);

        wdgSendMessage = new QWidget(ClientChatWidget);
        wdgSendMessage->setObjectName("wdgSendMessage");
        horizontalLayout = new QHBoxLayout(wdgSendMessage);
        horizontalLayout->setObjectName("horizontalLayout");
        lblMessage = new QLabel(wdgSendMessage);
        lblMessage->setObjectName("lblMessage");

        horizontalLayout->addWidget(lblMessage);

        lnMessage = new QLineEdit(wdgSendMessage);
        lnMessage->setObjectName("lnMessage");

        horizontalLayout->addWidget(lnMessage);

        btnSend = new QPushButton(wdgSendMessage);
        btnSend->setObjectName("btnSend");

        horizontalLayout->addWidget(btnSend);

        lblOpenFolder = new QLabel(wdgSendMessage);
        lblOpenFolder->setObjectName("lblOpenFolder");

        horizontalLayout->addWidget(lblOpenFolder);


        verticalLayout->addWidget(wdgSendMessage);


        retranslateUi(ClientChatWidget);

        QMetaObject::connectSlotsByName(ClientChatWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientChatWidget)
    {
        ClientChatWidget->setWindowTitle(QCoreApplication::translate("ClientChatWidget", "Form", nullptr));
        lblMessage->setText(QCoreApplication::translate("ClientChatWidget", "Message:", nullptr));
        btnSend->setText(QCoreApplication::translate("ClientChatWidget", "Send", nullptr));
        lblOpenFolder->setText(QCoreApplication::translate("ClientChatWidget", "<html><head/><body><p><a href=\"#\"><span style=\" text-decoration: underline; color:#007af4;\">Open</span></a></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientChatWidget: public Ui_ClientChatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTCHATWIDGET_H
