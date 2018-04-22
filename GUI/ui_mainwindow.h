/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
    QLabel *gasLabel;
    QLabel *restaurantsLabel;
    QLabel *departmentStoresLabel;
    QSlider *gasSlider;
    QSlider *restaurantsSlider;
    QSlider *departmentStoresSlider;
    QSlider *groceriesSlider;
    QLabel *groceriesLabel;
    QSlider *superMarketsSlider;
    QLabel *supermarketsLabel;
    QLabel *wholesaleLabel;
    QSlider *wholesaleSlider;
    QLabel *gasVal;
    QLabel *restaurantsVal;
    QLabel *departmentStoresVal;
    QLabel *supermarketsVal;
    QLabel *hotelLabel;
    QLabel *hotelVal;
    QSlider *hotelSlider;
    QLabel *airfareLabel;
    QLabel *airfareVal;
    QSlider *airfareSlider;
    QLabel *groceriesVal;
    QLabel *wholesaleVal;
    QLabel *travelLabel;
    QLabel *travelVal;
    QSlider *travelSlider;
    QLabel *amazonVal;
    QSlider *amazonSlider;
    QLabel *amazonLabel;
    QLabel *paypalVal;
    QSlider *paypalSlider;
    QLabel *paypalLabel;
    QLabel *onlineVal;
    QSlider *onlineSlider;
    QLabel *onlineLabel;
    QLabel *label_3;
    QLabel *totalWeights;
    QWidget *page_1;
    QPushButton *fileUploadButton;
    QLabel *label_9;
    QPushButton *goToPage2;
    QWidget *page_2;
    QLabel *label_10;
    QPushButton *pushButton;
    QProgressBar *progressBar;
    QLabel *progressBarStatus;
    QPushButton *goToPage1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(401, 560);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 401, 501));
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
        gasLabel = new QLabel(page_0);
        gasLabel->setObjectName(QStringLiteral("gasLabel"));
        gasLabel->setGeometry(QRect(30, 140, 60, 16));
        restaurantsLabel = new QLabel(page_0);
        restaurantsLabel->setObjectName(QStringLiteral("restaurantsLabel"));
        restaurantsLabel->setGeometry(QRect(220, 140, 81, 16));
        departmentStoresLabel = new QLabel(page_0);
        departmentStoresLabel->setObjectName(QStringLiteral("departmentStoresLabel"));
        departmentStoresLabel->setGeometry(QRect(30, 190, 121, 16));
        gasSlider = new QSlider(page_0);
        gasSlider->setObjectName(QStringLiteral("gasSlider"));
        gasSlider->setGeometry(QRect(30, 160, 141, 22));
        gasSlider->setOrientation(Qt::Horizontal);
        restaurantsSlider = new QSlider(page_0);
        restaurantsSlider->setObjectName(QStringLiteral("restaurantsSlider"));
        restaurantsSlider->setGeometry(QRect(220, 160, 141, 22));
        restaurantsSlider->setOrientation(Qt::Horizontal);
        departmentStoresSlider = new QSlider(page_0);
        departmentStoresSlider->setObjectName(QStringLiteral("departmentStoresSlider"));
        departmentStoresSlider->setGeometry(QRect(30, 210, 141, 22));
        departmentStoresSlider->setOrientation(Qt::Horizontal);
        groceriesSlider = new QSlider(page_0);
        groceriesSlider->setObjectName(QStringLiteral("groceriesSlider"));
        groceriesSlider->setGeometry(QRect(220, 210, 141, 22));
        groceriesSlider->setOrientation(Qt::Horizontal);
        groceriesLabel = new QLabel(page_0);
        groceriesLabel->setObjectName(QStringLiteral("groceriesLabel"));
        groceriesLabel->setGeometry(QRect(220, 190, 61, 16));
        superMarketsSlider = new QSlider(page_0);
        superMarketsSlider->setObjectName(QStringLiteral("superMarketsSlider"));
        superMarketsSlider->setGeometry(QRect(30, 260, 141, 22));
        superMarketsSlider->setOrientation(Qt::Horizontal);
        supermarketsLabel = new QLabel(page_0);
        supermarketsLabel->setObjectName(QStringLiteral("supermarketsLabel"));
        supermarketsLabel->setGeometry(QRect(30, 240, 111, 16));
        wholesaleLabel = new QLabel(page_0);
        wholesaleLabel->setObjectName(QStringLiteral("wholesaleLabel"));
        wholesaleLabel->setGeometry(QRect(220, 240, 71, 16));
        wholesaleSlider = new QSlider(page_0);
        wholesaleSlider->setObjectName(QStringLiteral("wholesaleSlider"));
        wholesaleSlider->setGeometry(QRect(220, 260, 141, 22));
        wholesaleSlider->setOrientation(Qt::Horizontal);
        gasVal = new QLabel(page_0);
        gasVal->setObjectName(QStringLiteral("gasVal"));
        gasVal->setGeometry(QRect(150, 140, 41, 20));
        gasVal->setAlignment(Qt::AlignCenter);
        restaurantsVal = new QLabel(page_0);
        restaurantsVal->setObjectName(QStringLiteral("restaurantsVal"));
        restaurantsVal->setGeometry(QRect(320, 140, 41, 20));
        restaurantsVal->setAlignment(Qt::AlignCenter);
        departmentStoresVal = new QLabel(page_0);
        departmentStoresVal->setObjectName(QStringLiteral("departmentStoresVal"));
        departmentStoresVal->setGeometry(QRect(150, 190, 41, 20));
        departmentStoresVal->setAlignment(Qt::AlignCenter);
        supermarketsVal = new QLabel(page_0);
        supermarketsVal->setObjectName(QStringLiteral("supermarketsVal"));
        supermarketsVal->setGeometry(QRect(150, 240, 41, 20));
        supermarketsVal->setAlignment(Qt::AlignCenter);
        hotelLabel = new QLabel(page_0);
        hotelLabel->setObjectName(QStringLiteral("hotelLabel"));
        hotelLabel->setGeometry(QRect(30, 290, 111, 16));
        hotelVal = new QLabel(page_0);
        hotelVal->setObjectName(QStringLiteral("hotelVal"));
        hotelVal->setGeometry(QRect(150, 290, 41, 20));
        hotelVal->setAlignment(Qt::AlignCenter);
        hotelSlider = new QSlider(page_0);
        hotelSlider->setObjectName(QStringLiteral("hotelSlider"));
        hotelSlider->setGeometry(QRect(30, 310, 141, 22));
        hotelSlider->setOrientation(Qt::Horizontal);
        airfareLabel = new QLabel(page_0);
        airfareLabel->setObjectName(QStringLiteral("airfareLabel"));
        airfareLabel->setGeometry(QRect(220, 290, 81, 16));
        airfareVal = new QLabel(page_0);
        airfareVal->setObjectName(QStringLiteral("airfareVal"));
        airfareVal->setGeometry(QRect(320, 290, 41, 20));
        airfareVal->setAlignment(Qt::AlignCenter);
        airfareSlider = new QSlider(page_0);
        airfareSlider->setObjectName(QStringLiteral("airfareSlider"));
        airfareSlider->setGeometry(QRect(220, 310, 141, 22));
        airfareSlider->setOrientation(Qt::Horizontal);
        groceriesVal = new QLabel(page_0);
        groceriesVal->setObjectName(QStringLiteral("groceriesVal"));
        groceriesVal->setGeometry(QRect(320, 190, 41, 20));
        groceriesVal->setAlignment(Qt::AlignCenter);
        wholesaleVal = new QLabel(page_0);
        wholesaleVal->setObjectName(QStringLiteral("wholesaleVal"));
        wholesaleVal->setGeometry(QRect(320, 240, 41, 20));
        wholesaleVal->setAlignment(Qt::AlignCenter);
        travelLabel = new QLabel(page_0);
        travelLabel->setObjectName(QStringLiteral("travelLabel"));
        travelLabel->setGeometry(QRect(30, 340, 111, 16));
        travelVal = new QLabel(page_0);
        travelVal->setObjectName(QStringLiteral("travelVal"));
        travelVal->setGeometry(QRect(150, 340, 41, 20));
        travelVal->setAlignment(Qt::AlignCenter);
        travelSlider = new QSlider(page_0);
        travelSlider->setObjectName(QStringLiteral("travelSlider"));
        travelSlider->setGeometry(QRect(30, 360, 141, 22));
        travelSlider->setOrientation(Qt::Horizontal);
        amazonVal = new QLabel(page_0);
        amazonVal->setObjectName(QStringLiteral("amazonVal"));
        amazonVal->setGeometry(QRect(320, 340, 41, 20));
        amazonVal->setAlignment(Qt::AlignCenter);
        amazonSlider = new QSlider(page_0);
        amazonSlider->setObjectName(QStringLiteral("amazonSlider"));
        amazonSlider->setGeometry(QRect(220, 360, 141, 22));
        amazonSlider->setOrientation(Qt::Horizontal);
        amazonLabel = new QLabel(page_0);
        amazonLabel->setObjectName(QStringLiteral("amazonLabel"));
        amazonLabel->setGeometry(QRect(220, 340, 81, 16));
        paypalVal = new QLabel(page_0);
        paypalVal->setObjectName(QStringLiteral("paypalVal"));
        paypalVal->setGeometry(QRect(150, 390, 41, 20));
        paypalVal->setAlignment(Qt::AlignCenter);
        paypalSlider = new QSlider(page_0);
        paypalSlider->setObjectName(QStringLiteral("paypalSlider"));
        paypalSlider->setGeometry(QRect(30, 410, 141, 22));
        paypalSlider->setOrientation(Qt::Horizontal);
        paypalLabel = new QLabel(page_0);
        paypalLabel->setObjectName(QStringLiteral("paypalLabel"));
        paypalLabel->setGeometry(QRect(30, 390, 111, 16));
        onlineVal = new QLabel(page_0);
        onlineVal->setObjectName(QStringLiteral("onlineVal"));
        onlineVal->setGeometry(QRect(320, 390, 41, 20));
        onlineVal->setAlignment(Qt::AlignCenter);
        onlineSlider = new QSlider(page_0);
        onlineSlider->setObjectName(QStringLiteral("onlineSlider"));
        onlineSlider->setGeometry(QRect(220, 410, 141, 22));
        onlineSlider->setOrientation(Qt::Horizontal);
        onlineLabel = new QLabel(page_0);
        onlineLabel->setObjectName(QStringLiteral("onlineLabel"));
        onlineLabel->setGeometry(QRect(220, 390, 81, 16));
        label_3 = new QLabel(page_0);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 440, 41, 16));
        totalWeights = new QLabel(page_0);
        totalWeights->setObjectName(QStringLiteral("totalWeights"));
        totalWeights->setGeometry(QRect(190, 440, 41, 16));
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
        progressBar->setGeometry(QRect(70, 510, 251, 23));
        progressBar->setValue(24);
        progressBarStatus = new QLabel(centralWidget);
        progressBarStatus->setObjectName(QStringLiteral("progressBarStatus"));
        progressBarStatus->setGeometry(QRect(170, 480, 51, 16));
        progressBarStatus->setScaledContents(true);
        progressBarStatus->setAlignment(Qt::AlignCenter);
        progressBarStatus->setWordWrap(false);
        goToPage1 = new QPushButton(centralWidget);
        goToPage1->setObjectName(QStringLiteral("goToPage1"));
        goToPage1->setGeometry(QRect(140, 460, 113, 32));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "Welcome to our Credit Card Recommender!", 0));
        label_2->setText(QApplication::translate("MainWindow", "Please choose a weightage for each credit card category to help us learn about your preferences. If you have no preferences just click next!", 0));
        gasLabel->setText(QApplication::translate("MainWindow", "Gas", 0));
        restaurantsLabel->setText(QApplication::translate("MainWindow", "Restaurants", 0));
        departmentStoresLabel->setText(QApplication::translate("MainWindow", "Department Stores", 0));
        groceriesLabel->setText(QApplication::translate("MainWindow", "Groceries", 0));
        supermarketsLabel->setText(QApplication::translate("MainWindow", "Supermarkets", 0));
        wholesaleLabel->setText(QApplication::translate("MainWindow", "Wholesale", 0));
        gasVal->setText(QApplication::translate("MainWindow", "0", 0));
        restaurantsVal->setText(QApplication::translate("MainWindow", "0", 0));
        departmentStoresVal->setText(QApplication::translate("MainWindow", "0", 0));
        supermarketsVal->setText(QApplication::translate("MainWindow", "0", 0));
        hotelLabel->setText(QApplication::translate("MainWindow", "Hotel", 0));
        hotelVal->setText(QApplication::translate("MainWindow", "0", 0));
        airfareLabel->setText(QApplication::translate("MainWindow", "Airfare", 0));
        airfareVal->setText(QApplication::translate("MainWindow", "0", 0));
        groceriesVal->setText(QApplication::translate("MainWindow", "0", 0));
        wholesaleVal->setText(QApplication::translate("MainWindow", "0", 0));
        travelLabel->setText(QApplication::translate("MainWindow", "Travel", 0));
        travelVal->setText(QApplication::translate("MainWindow", "0", 0));
        amazonVal->setText(QApplication::translate("MainWindow", "0", 0));
        amazonLabel->setText(QApplication::translate("MainWindow", "Amazon", 0));
        paypalVal->setText(QApplication::translate("MainWindow", "0", 0));
        paypalLabel->setText(QApplication::translate("MainWindow", "Paypal", 0));
        onlineVal->setText(QApplication::translate("MainWindow", "0", 0));
        onlineLabel->setText(QApplication::translate("MainWindow", "Online", 0));
        label_3->setText(QApplication::translate("MainWindow", "Total:", 0));
        totalWeights->setText(QString());
        fileUploadButton->setText(QApplication::translate("MainWindow", "Upload .csv", 0));
        label_9->setText(QApplication::translate("MainWindow", "Please upload a CSV file containing your credit card or debit card transactions from the past month", 0));
        goToPage2->setText(QApplication::translate("MainWindow", "Next", 0));
        label_10->setText(QApplication::translate("MainWindow", "Congrats here are the top 3 credit cards for you!", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Start over!", 0));
        progressBarStatus->setText(QString());
        goToPage1->setText(QApplication::translate("MainWindow", "Next", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
