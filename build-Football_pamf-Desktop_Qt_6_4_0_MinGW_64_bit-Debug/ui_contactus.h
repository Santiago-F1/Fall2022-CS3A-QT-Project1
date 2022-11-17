/********************************************************************************
** Form generated from reading UI file 'contactus.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTUS_H
#define UI_CONTACTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_contactUs
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;

    void setupUi(QDialog *contactUs)
    {
        if (contactUs->objectName().isEmpty())
            contactUs->setObjectName("contactUs");
        contactUs->resize(566, 300);
        contactUs->setStyleSheet(QString::fromUtf8("with: 200px;"));
        label = new QLabel(contactUs);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 40, 317, 14));
        label_2 = new QLabel(contactUs);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 20, 317, 31));
        label_4 = new QLabel(contactUs);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 50, 319, 16));

        retranslateUi(contactUs);

        QMetaObject::connectSlotsByName(contactUs);
    } // setupUi

    void retranslateUi(QDialog *contactUs)
    {
        contactUs->setWindowTitle(QCoreApplication::translate("contactUs", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("contactUs", "To contact us please call: 123-456-7890  ", nullptr));
        label_2->setText(QCoreApplication::translate("contactUs", "Or email us at: theEmail@email.com", nullptr));
        label_4->setText(QCoreApplication::translate("contactUs", " You can also contact us by any social media such as Insatgram", nullptr));
    } // retranslateUi

};

namespace Ui {
    class contactUs: public Ui_contactUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTUS_H
