/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_21;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_22;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_19;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_7;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_15;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_20;
    QPushButton *pushButton_16;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextBrowser *textBrowser;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1103, 502);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imgs/imgs/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Calibri Light")});
        font.setPointSize(19);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        widget_3 = new QWidget(groupBox);
        widget_3->setObjectName("widget_3");
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName("pushButton");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Calibri Light")});
        font1.setPointSize(12);
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        pushButton_21 = new QPushButton(widget_3);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setFont(font1);

        horizontalLayout->addWidget(pushButton_21);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        pushButton_22 = new QPushButton(widget_3);
        pushButton_22->setObjectName("pushButton_22");
        pushButton_22->setFont(font1);

        horizontalLayout->addWidget(pushButton_22);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget_3);

        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);
        pushButton_5->setFont(font1);

        gridLayout_2->addWidget(pushButton_5, 3, 3, 1, 1);

        pushButton_19 = new QPushButton(widget);
        pushButton_19->setObjectName("pushButton_19");
        sizePolicy2.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy2);
        pushButton_19->setFont(font1);

        gridLayout_2->addWidget(pushButton_19, 3, 1, 1, 1);

        pushButton_17 = new QPushButton(widget);
        pushButton_17->setObjectName("pushButton_17");
        sizePolicy2.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy2);
        pushButton_17->setFont(font1);

        gridLayout_2->addWidget(pushButton_17, 1, 1, 1, 1);

        pushButton_18 = new QPushButton(widget);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setEnabled(true);
        sizePolicy2.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy2);
        pushButton_18->setFont(font1);

        gridLayout_2->addWidget(pushButton_18, 0, 1, 1, 1);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy2.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy2);
        pushButton_7->setFont(font1);

        gridLayout_2->addWidget(pushButton_7, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        pushButton_15 = new QPushButton(widget);
        pushButton_15->setObjectName("pushButton_15");
        sizePolicy2.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy2);
        pushButton_15->setFont(font1);

        gridLayout_2->addWidget(pushButton_15, 1, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 3, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 4, 1, 1);

        pushButton_20 = new QPushButton(widget);
        pushButton_20->setObjectName("pushButton_20");
        sizePolicy2.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy2);
        pushButton_20->setFont(font1);

        gridLayout_2->addWidget(pushButton_20, 0, 3, 1, 1);

        pushButton_16 = new QPushButton(widget);
        pushButton_16->setObjectName("pushButton_16");
        sizePolicy2.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy2);
        pushButton_16->setFont(font1);

        gridLayout_2->addWidget(pushButton_16, 2, 3, 1, 1);


        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName("widget_2");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy3);
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(widget_2);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        textBrowser = new QTextBrowser(widget_2);
        textBrowser->setObjectName("textBrowser");

        verticalLayout_2->addWidget(textBrowser);


        verticalLayout->addWidget(widget_2);


        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

        graphicsView_2 = new QGraphicsView(centralwidget);
        graphicsView_2->setObjectName("graphicsView_2");
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(graphicsView_2->sizePolicy().hasHeightForWidth());
        graphicsView_2->setSizePolicy(sizePolicy4);
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-image:url(:/imgs/imgs/Right graphic.png)"));

        gridLayout->addWidget(graphicsView_2, 0, 2, 1, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        sizePolicy4.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy4);
        graphicsView->setStyleSheet(QString::fromUtf8("background-image:url(:/imgs/imgs/Left graphic.png)"));

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Football League Pamphlet", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "National Football League Pamphlet", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Contact us", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "ADMIN", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Display total cap of updated", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "Sort by updated team name", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "Sort by OG seating capacity", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "Sort by OG team name", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Sort by OG location", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "Display NFL total capacity", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "Sort by OG stadium name", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "AFC sort by team name", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "DISPLAY RESULTS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
