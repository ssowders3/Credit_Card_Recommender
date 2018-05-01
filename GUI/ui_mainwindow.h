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
    QWidget *welcome_page;
    QLabel *label_5;
    QLabel *label_4;
    QPushButton *continue_button;
    QWidget *preference_page;
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
    QPushButton *pref_next_button;
    QWidget *csv_page;
    QPushButton *fileUploadButton;
    QLabel *label_9;
    QPushButton *csv_next_button;
    QWidget *results_page;
    QLabel *label_10;
    QPushButton *pushButton;
    QLabel *first_card_pic;
    QLabel *second_card_pic;
    QLabel *third_card_pic;
    QProgressBar *progressBar;
    QLabel *progressBarStatus;

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
        welcome_page = new QWidget();
        welcome_page->setObjectName(QStringLiteral("welcome_page"));
        label_5 = new QLabel(welcome_page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 200, 311, 61));
        QFont font;
        font.setPointSize(36);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(welcome_page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 250, 231, 61));
        label_4->setFont(font);
        continue_button = new QPushButton(welcome_page);
        continue_button->setObjectName(QStringLiteral("continue_button"));
        continue_button->setGeometry(QRect(130, 310, 141, 32));
        stackedWidget->addWidget(welcome_page);
        preference_page = new QWidget();
        preference_page->setObjectName(QStringLiteral("preference_page"));
        label = new QLabel(preference_page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 371, 20));
        QFont font1;
        font1.setPointSize(18);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(preference_page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 341, 51));
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);
        gasLabel = new QLabel(preference_page);
        gasLabel->setObjectName(QStringLiteral("gasLabel"));
        gasLabel->setGeometry(QRect(30, 140, 60, 16));
        restaurantsLabel = new QLabel(preference_page);
        restaurantsLabel->setObjectName(QStringLiteral("restaurantsLabel"));
        restaurantsLabel->setGeometry(QRect(220, 140, 81, 16));
        departmentStoresLabel = new QLabel(preference_page);
        departmentStoresLabel->setObjectName(QStringLiteral("departmentStoresLabel"));
        departmentStoresLabel->setGeometry(QRect(30, 190, 121, 16));
        gasSlider = new QSlider(preference_page);
        gasSlider->setObjectName(QStringLiteral("gasSlider"));
        gasSlider->setGeometry(QRect(30, 160, 141, 22));
        gasSlider->setOrientation(Qt::Horizontal);
        restaurantsSlider = new QSlider(preference_page);
        restaurantsSlider->setObjectName(QStringLiteral("restaurantsSlider"));
        restaurantsSlider->setGeometry(QRect(220, 160, 141, 22));
        restaurantsSlider->setOrientation(Qt::Horizontal);
        departmentStoresSlider = new QSlider(preference_page);
        departmentStoresSlider->setObjectName(QStringLiteral("departmentStoresSlider"));
        departmentStoresSlider->setGeometry(QRect(30, 210, 141, 22));
        departmentStoresSlider->setOrientation(Qt::Horizontal);
        groceriesSlider = new QSlider(preference_page);
        groceriesSlider->setObjectName(QStringLiteral("groceriesSlider"));
        groceriesSlider->setGeometry(QRect(220, 210, 141, 22));
        groceriesSlider->setOrientation(Qt::Horizontal);
        groceriesLabel = new QLabel(preference_page);
        groceriesLabel->setObjectName(QStringLiteral("groceriesLabel"));
        groceriesLabel->setGeometry(QRect(220, 190, 61, 16));
        superMarketsSlider = new QSlider(preference_page);
        superMarketsSlider->setObjectName(QStringLiteral("superMarketsSlider"));
        superMarketsSlider->setGeometry(QRect(30, 260, 141, 22));
        superMarketsSlider->setOrientation(Qt::Horizontal);
        supermarketsLabel = new QLabel(preference_page);
        supermarketsLabel->setObjectName(QStringLiteral("supermarketsLabel"));
        supermarketsLabel->setGeometry(QRect(30, 240, 111, 16));
        wholesaleLabel = new QLabel(preference_page);
        wholesaleLabel->setObjectName(QStringLiteral("wholesaleLabel"));
        wholesaleLabel->setGeometry(QRect(220, 240, 71, 16));
        wholesaleSlider = new QSlider(preference_page);
        wholesaleSlider->setObjectName(QStringLiteral("wholesaleSlider"));
        wholesaleSlider->setGeometry(QRect(220, 260, 141, 22));
        wholesaleSlider->setOrientation(Qt::Horizontal);
        gasVal = new QLabel(preference_page);
        gasVal->setObjectName(QStringLiteral("gasVal"));
        gasVal->setGeometry(QRect(150, 140, 41, 20));
        gasVal->setAlignment(Qt::AlignCenter);
        restaurantsVal = new QLabel(preference_page);
        restaurantsVal->setObjectName(QStringLiteral("restaurantsVal"));
        restaurantsVal->setGeometry(QRect(320, 140, 41, 20));
        restaurantsVal->setAlignment(Qt::AlignCenter);
        departmentStoresVal = new QLabel(preference_page);
        departmentStoresVal->setObjectName(QStringLiteral("departmentStoresVal"));
        departmentStoresVal->setGeometry(QRect(150, 190, 41, 20));
        departmentStoresVal->setAlignment(Qt::AlignCenter);
        supermarketsVal = new QLabel(preference_page);
        supermarketsVal->setObjectName(QStringLiteral("supermarketsVal"));
        supermarketsVal->setGeometry(QRect(150, 240, 41, 20));
        supermarketsVal->setAlignment(Qt::AlignCenter);
        hotelLabel = new QLabel(preference_page);
        hotelLabel->setObjectName(QStringLiteral("hotelLabel"));
        hotelLabel->setGeometry(QRect(30, 290, 111, 16));
        hotelVal = new QLabel(preference_page);
        hotelVal->setObjectName(QStringLiteral("hotelVal"));
        hotelVal->setGeometry(QRect(150, 290, 41, 20));
        hotelVal->setAlignment(Qt::AlignCenter);
        hotelSlider = new QSlider(preference_page);
        hotelSlider->setObjectName(QStringLiteral("hotelSlider"));
        hotelSlider->setGeometry(QRect(30, 310, 141, 22));
        hotelSlider->setOrientation(Qt::Horizontal);
        airfareLabel = new QLabel(preference_page);
        airfareLabel->setObjectName(QStringLiteral("airfareLabel"));
        airfareLabel->setGeometry(QRect(220, 290, 81, 16));
        airfareVal = new QLabel(preference_page);
        airfareVal->setObjectName(QStringLiteral("airfareVal"));
        airfareVal->setGeometry(QRect(320, 290, 41, 20));
        airfareVal->setAlignment(Qt::AlignCenter);
        airfareSlider = new QSlider(preference_page);
        airfareSlider->setObjectName(QStringLiteral("airfareSlider"));
        airfareSlider->setGeometry(QRect(220, 310, 141, 22));
        airfareSlider->setOrientation(Qt::Horizontal);
        groceriesVal = new QLabel(preference_page);
        groceriesVal->setObjectName(QStringLiteral("groceriesVal"));
        groceriesVal->setGeometry(QRect(320, 190, 41, 20));
        groceriesVal->setAlignment(Qt::AlignCenter);
        wholesaleVal = new QLabel(preference_page);
        wholesaleVal->setObjectName(QStringLiteral("wholesaleVal"));
        wholesaleVal->setGeometry(QRect(320, 240, 41, 20));
        wholesaleVal->setAlignment(Qt::AlignCenter);
        travelLabel = new QLabel(preference_page);
        travelLabel->setObjectName(QStringLiteral("travelLabel"));
        travelLabel->setGeometry(QRect(30, 340, 111, 16));
        travelVal = new QLabel(preference_page);
        travelVal->setObjectName(QStringLiteral("travelVal"));
        travelVal->setGeometry(QRect(150, 340, 41, 20));
        travelVal->setAlignment(Qt::AlignCenter);
        travelSlider = new QSlider(preference_page);
        travelSlider->setObjectName(QStringLiteral("travelSlider"));
        travelSlider->setGeometry(QRect(30, 360, 141, 22));
        travelSlider->setOrientation(Qt::Horizontal);
        amazonVal = new QLabel(preference_page);
        amazonVal->setObjectName(QStringLiteral("amazonVal"));
        amazonVal->setGeometry(QRect(320, 340, 41, 20));
        amazonVal->setAlignment(Qt::AlignCenter);
        amazonSlider = new QSlider(preference_page);
        amazonSlider->setObjectName(QStringLiteral("amazonSlider"));
        amazonSlider->setGeometry(QRect(220, 360, 141, 22));
        amazonSlider->setOrientation(Qt::Horizontal);
        amazonLabel = new QLabel(preference_page);
        amazonLabel->setObjectName(QStringLiteral("amazonLabel"));
        amazonLabel->setGeometry(QRect(220, 340, 81, 16));
        paypalVal = new QLabel(preference_page);
        paypalVal->setObjectName(QStringLiteral("paypalVal"));
        paypalVal->setGeometry(QRect(150, 390, 41, 20));
        paypalVal->setAlignment(Qt::AlignCenter);
        paypalSlider = new QSlider(preference_page);
        paypalSlider->setObjectName(QStringLiteral("paypalSlider"));
        paypalSlider->setGeometry(QRect(30, 410, 141, 22));
        paypalSlider->setOrientation(Qt::Horizontal);
        paypalLabel = new QLabel(preference_page);
        paypalLabel->setObjectName(QStringLiteral("paypalLabel"));
        paypalLabel->setGeometry(QRect(30, 390, 111, 16));
        onlineVal = new QLabel(preference_page);
        onlineVal->setObjectName(QStringLiteral("onlineVal"));
        onlineVal->setGeometry(QRect(320, 390, 41, 20));
        onlineVal->setAlignment(Qt::AlignCenter);
        onlineSlider = new QSlider(preference_page);
        onlineSlider->setObjectName(QStringLiteral("onlineSlider"));
        onlineSlider->setGeometry(QRect(220, 410, 141, 22));
        onlineSlider->setOrientation(Qt::Horizontal);
        onlineLabel = new QLabel(preference_page);
        onlineLabel->setObjectName(QStringLiteral("onlineLabel"));
        onlineLabel->setGeometry(QRect(220, 390, 81, 16));
        label_3 = new QLabel(preference_page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(150, 440, 41, 16));
        totalWeights = new QLabel(preference_page);
        totalWeights->setObjectName(QStringLiteral("totalWeights"));
        totalWeights->setGeometry(QRect(190, 440, 41, 16));
        pref_next_button = new QPushButton(preference_page);
        pref_next_button->setObjectName(QStringLiteral("pref_next_button"));
        pref_next_button->setGeometry(QRect(140, 460, 113, 32));
        stackedWidget->addWidget(preference_page);
        csv_page = new QWidget();
        csv_page->setObjectName(QStringLiteral("csv_page"));
        fileUploadButton = new QPushButton(csv_page);
        fileUploadButton->setObjectName(QStringLiteral("fileUploadButton"));
        fileUploadButton->setGeometry(QRect(130, 200, 113, 32));
        label_9 = new QLabel(csv_page);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(39, 130, 291, 61));
        label_9->setAlignment(Qt::AlignCenter);
        label_9->setWordWrap(true);
        csv_next_button = new QPushButton(csv_page);
        csv_next_button->setObjectName(QStringLiteral("csv_next_button"));
        csv_next_button->setGeometry(QRect(130, 450, 113, 32));
        stackedWidget->addWidget(csv_page);
        results_page = new QWidget();
        results_page->setObjectName(QStringLiteral("results_page"));
        label_10 = new QLabel(results_page);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 40, 311, 20));
        label_10->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(results_page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 430, 113, 32));
        first_card_pic = new QLabel(results_page);
        first_card_pic->setObjectName(QStringLiteral("first_card_pic"));
        first_card_pic->setGeometry(QRect(37, 70, 151, 101));
        first_card_pic->setStyleSheet(QStringLiteral("background-image: url(amazonprime.png)"));
        second_card_pic = new QLabel(results_page);
        second_card_pic->setObjectName(QStringLiteral("second_card_pic"));
        second_card_pic->setGeometry(QRect(37, 190, 151, 101));
        third_card_pic = new QLabel(results_page);
        third_card_pic->setObjectName(QStringLiteral("third_card_pic"));
        third_card_pic->setGeometry(QRect(37, 310, 151, 101));
        stackedWidget->addWidget(results_page);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(70, 510, 251, 23));
        progressBar->setValue(24);
        progressBarStatus = new QLabel(centralWidget);
        progressBarStatus->setObjectName(QStringLiteral("progressBarStatus"));
        progressBarStatus->setGeometry(QRect(170, 530, 51, 16));
        progressBarStatus->setScaledContents(true);
        progressBarStatus->setAlignment(Qt::AlignCenter);
        progressBarStatus->setWordWrap(false);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_5->setText(QApplication::translate("MainWindow", "Credit Card ", 0));
        label_4->setText(QApplication::translate("MainWindow", "Recommender", 0));
        continue_button->setText(QApplication::translate("MainWindow", "Click to continue", 0));
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
        pref_next_button->setText(QApplication::translate("MainWindow", "Next", 0));
        fileUploadButton->setText(QApplication::translate("MainWindow", "Upload .csv", 0));
        label_9->setText(QApplication::translate("MainWindow", "Please upload a CSV file containing your credit card or debit card transactions from the past month", 0));
        csv_next_button->setText(QApplication::translate("MainWindow", "Next", 0));
        label_10->setText(QApplication::translate("MainWindow", "Congrats here are the top 3 credit cards for you!", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Start over!", 0));
        first_card_pic->setText(QApplication::translate("MainWindow", "Insert Credit Card #1", 0));
        second_card_pic->setText(QApplication::translate("MainWindow", "Insert Credit Card #2", 0));
        third_card_pic->setText(QApplication::translate("MainWindow", "Insert Credit Card #3", 0));
        progressBarStatus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
