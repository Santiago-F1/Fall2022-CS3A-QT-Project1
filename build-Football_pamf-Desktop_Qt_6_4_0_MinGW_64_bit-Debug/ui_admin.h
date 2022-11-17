/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit_txt;
    QLabel *label;
    QLineEdit *lineEdit_Admin;
    QLabel *label_2;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(400, 300);
        groupBox = new QGroupBox(admin);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(30, 20, 331, 171));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(9, 144, 80, 18));
        lineEdit_txt = new QLineEdit(groupBox);
        lineEdit_txt->setObjectName("lineEdit_txt");
        lineEdit_txt->setGeometry(QRect(102, 50, 171, 20));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 25, 71, 16));
        lineEdit_Admin = new QLineEdit(groupBox);
        lineEdit_Admin->setObjectName("lineEdit_Admin");
        lineEdit_Admin->setGeometry(QRect(101, 26, 171, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 50, 61, 16));

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("admin", "The admin and maintenance page", nullptr));
        pushButton->setText(QCoreApplication::translate("admin", "add team", nullptr));
        label->setText(QCoreApplication::translate("admin", "password", nullptr));
        label_2->setText(QCoreApplication::translate("admin", "file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
