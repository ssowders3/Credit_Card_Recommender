/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page_0;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QSlider *travelSlider;
    QSlider *diningSlider;
    QSlider *cashBackSlider;
    QSlider *pointsSlider;
    QLabel *label_6;
    QSlider *grocerySlider;
    QLabel *label_7;
    QLabel *label_8;
    QSlider *gasSlider;
    QPushButton *goToPage1;
    QLabel *travelVal;
    QLabel *diningVal;
    QLabel *cashBackVal;
    QFrame *prefErrorDialog;
    QLabel *prefErrorText;
    QPushButton *prefErrorDialogOk;
    QWidget *page_1;
    QPushButton *fileUploadButton;
    QLabel *label_9;
    QPushButton *goToPage2;
    QFrame *csvErrorDialog;
    QLabel *csvErrorText;
    QPushButton *csvErrorDialogOk;
    QWidget *page_2;
    QLabel *label_10;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QLabel *progressBarStatus;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(401, 523);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 401, 481));
        page_0 = new QWidget();
        page_0->setObjectName(QStringLiteral("page_0"));
        label = new QLabel(page_0);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 371, 20));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(page_0);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 341, 51));
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);
        label_3 = new QLabel(page_0);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 140, 60, 16));
        label_4 = new QLabel(page_0);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 190, 60, 16));
        label_5 = new QLabel(page_0);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 240, 111, 16));
        travelSlider = new QSlider(page_0);
        travelSlider->setObjectName(QStringLiteral("travelSlider"));
        travelSlider->setGeometry(QRect(20, 160, 341, 22));
        travelSlider->setOrientation(Qt::Horizontal);
        diningSlider = new QSlider(page_0);
        diningSlider->setObjectName(QStringLiteral("diningSlider"));
        diningSlider->setGeometry(QRect(20, 210, 341, 22));
        diningSlider->setOrientation(Qt::Horizontal);
        cashBackSlider = new QSlider(page_0);
        cashBackSlider->setObjectName(QStringLiteral("cashBackSlider"));
        cashBackSlider->setGeometry(QRect(20, 260, 341, 22));
        cashBackSlider->setOrientation(Qt::Horizontal);
        pointsSlider = new QSlider(page_0);
        pointsSlider->setObjectName(QStringLiteral("pointsSlider"));
        pointsSlider->setGeometry(QRect(20, 310, 341, 22));
        pointsSlider->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(page_0);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 290, 111, 16));
        grocerySlider = new QSlider(page_0);
        grocerySlider->setObjectName(QStringLiteral("grocerySlider"));
        grocerySlider->setGeometry(QRect(20, 360, 341, 22));
        grocerySlider->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(page_0);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 340, 111, 16));
        label_8 = new QLabel(page_0);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 390, 111, 16));
        gasSlider = new QSlider(page_0);
        gasSlider->setObjectName(QStringLiteral("gasSlider"));
        gasSlider->setGeometry(QRect(20, 410, 341, 22));
        gasSlider->setOrientation(Qt::Horizontal);
        goToPage1 = new QPushButton(page_0);
        goToPage1->setObjectName(QStringLiteral("goToPage1"));
        goToPage1->setGeometry(QRect(140, 440, 113, 32));
        travelVal = new QLabel(page_0);
        travelVal->setObjectName(QStringLiteral("travelVal"));
        travelVal->setGeometry(QRect(320, 140, 41, 20));
        travelVal->setAlignment(Qt::AlignCenter);
        diningVal = new QLabel(page_0);
        diningVal->setObjectName(QStringLiteral("diningVal"));
        diningVal->setGeometry(QRect(320, 190, 41, 20));
        diningVal->setAlignment(Qt::AlignCenter);
        cashBackVal = new QLabel(page_0);
        cashBackVal->setObjectName(QStringLiteral("cashBackVal"));
        cashBackVal->setGeometry(QRect(320, 240, 41, 20));
        cashBackVal->setAlignment(Qt::AlignCenter);
        prefErrorDialog = new QFrame(page_0);
        prefErrorDialog->setObjectName(QStringLiteral("prefErrorDialog"));
        prefErrorDialog->setGeometry(QRect(80, 110, 231, 151));
        prefErrorDialog->setAutoFillBackground(true);
        prefErrorDialog->setFrameShape(QFrame::StyledPanel);
        prefErrorDialog->setFrameShadow(QFrame::Raised);
        prefErrorText = new QLabel(prefErrorDialog);
        prefErrorText->setObjectName(QStringLiteral("prefErrorText"));
        prefErrorText->setGeometry(QRect(20, 40, 201, 41));
        prefErrorText->setAlignment(Qt::AlignCenter);
        prefErrorText->setWordWrap(true);
        prefErrorDialogOk = new QPushButton(prefErrorDialog);
        prefErrorDialogOk->setObjectName(QStringLiteral("prefErrorDialogOk"));
        prefErrorDialogOk->setGeometry(QRect(60, 90, 113, 32));
        stackedWidget->addWidget(page_0);
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        fileUploadButton = new QPushButton(page_1);
        fileUploadButton->setObjectName(QStringLiteral("fileUploadButton"));
        fileUploadButton->setGeometry(QRect(130, 200, 113, 32));
        label_9 = new QLabel(page_1);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(39, 130, 291, 61));
        label_9->setAlignment(Qt::AlignCenter);
        label_9->setWordWrap(true);
        goToPage2 = new QPushButton(page_1);
        goToPage2->setObjectName(QStringLiteral("goToPage2"));
        goToPage2->setGeometry(QRect(130, 240, 113, 32));
        csvErrorDialog = new QFrame(page_1);
        csvErrorDialog->setObjectName(QStringLiteral("csvErrorDialog"));
        csvErrorDialog->setGeometry(QRect(80, 130, 231, 151));
        csvErrorDialog->setAutoFillBackground(true);
        csvErrorDialog->setFrameShape(QFrame::StyledPanel);
        csvErrorDialog->setFrameShadow(QFrame::Raised);
        csvErrorText = new QLabel(csvErrorDialog);
        csvErrorText->setObjectName(QStringLiteral("csvErrorText"));
        csvErrorText->setGeometry(QRect(20, 40, 201, 41));
        csvErrorText->setAlignment(Qt::AlignCenter);
        csvErrorText->setWordWrap(true);
        csvErrorDialogOk = new QPushButton(csvErrorDialog);
        csvErrorDialogOk->setObjectName(QStringLiteral("csvErrorDialogOk"));
        csvErrorDialogOk->setGeometry(QRect(60, 90, 113, 32));
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 40, 311, 20));
        label_10->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 430, 113, 32));
        stackedWidget->addWidget(page_2);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(70, 492, 251, 23));
        progressBar->setValue(24);
        progressBarStatus = new QLabel(centralWidget);
        progressBarStatus->setObjectName(QStringLiteral("progressBarStatus"));
        progressBarStatus->setGeometry(QRect(170, 480, 51, 16));
        progressBarStatus->setScaledContents(true);
        progressBarStatus->setAlignment(Qt::AlignCenter);
        progressBarStatus->setWordWrap(false);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Welcome to our Credit Card Recommender!", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Please choose a weightage for each credit card category to help us learn about your preferences. If you have no preferences just click next!", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Travel", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Dining", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Cashback ", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Points", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Grocery", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Gas", nullptr));
        goToPage1->setText(QApplication::translate("MainWindow", "Next", nullptr));
        travelVal->setText(QApplication::translate("MainWindow", "0", nullptr));
        diningVal->setText(QApplication::translate("MainWindow", "0", nullptr));
        cashBackVal->setText(QApplication::translate("MainWindow", "0", nullptr));
        prefErrorText->setText(QApplication::translate("MainWindow", "Sorry you cannot continue until your weights add up to 0 or 10!", nullptr));
        prefErrorDialogOk->setText(QApplication::translate("MainWindow", "Ok", nullptr));
        fileUploadButton->setText(QApplication::translate("MainWindow", "Upload .csv", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Please upload a CSV file containing your credit card or debit card transactions from the past month", nullptr));
        goToPage2->setText(QApplication::translate("MainWindow", "Next", nullptr));
        csvErrorText->setText(QApplication::translate("MainWindow", "Sorry you cannot continue until you choose a file!", nullptr));
        csvErrorDialogOk->setText(QApplication::translate("MainWindow", "Ok", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Congrats here are the top 3 credit cards for you!", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Start over!", nullptr));
        progressBarStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
