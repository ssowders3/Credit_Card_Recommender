#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDebug>
#include <QTextEdit>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_fileUploadButton_clicked()
{
    filename = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    QDir::homePath(),
                                                    tr("CSV (*.csv)"));
    if( !filename.isNull() )
    {
      qDebug() << "selected file path : " << filename.toUtf8();
    }
}

void MainWindow::on_goToPage1_clicked()
{
    totalWeights = gasVal + restaurantsVal + departmentStoresVal + groceriesVal + supermarketsVal
            + wholesaleVal + hotelVal +airfareVal + travelVal + amazonVal + paypalVal
            + onlineVal;
    if(totalWeights == 0 || totalWeights == 100) {
        ui->stackedWidget->setCurrentIndex(1);
        ui->progressBar->setValue(50);
        ui->progressBarStatus->setText("50%");
        ui->progressBarStatus->repaint();
    } else {
        p1ErrorDialog = new QMessageBox();
        p1ErrorDialog->setText(tr("Sorry your preferences must add up to 0 or 100!"));
        p1ErrorDialog->exec();
    }
}

void MainWindow::on_goToPage2_clicked()
{
    if( !filename.isNull() ) {
        ui->stackedWidget->setCurrentIndex(2);
        ui->progressBar->setValue(100);
        ui->progressBarStatus->setText("100%");
        ui->progressBarStatus->repaint();
    } else {
        p2ErrorDialog = new QMessageBox();
        p2ErrorDialog->setText(tr("Sorry you must choose a .csv file to continue!"));
        p2ErrorDialog->exec();
    }

}

//void MainWindow::on_travelSlider_valueChanged(int value)
//{
//    travelSliderVal = value;
//    ui->travelVal->setText(QString::number(value));
//    ui->travelVal->repaint();

//}

//void MainWindow::on_diningSlider_valueChanged(int value)
//{
//    diningSliderVal = value;
//    ui->diningVal->setText(QString::number(value));
//    ui->diningVal->repaint();
//}

//void MainWindow::on_cashBackSlider_valueChanged(int value)
//{
//    cashbackSliderVal = value;
//    ui->cashBackVal->setText(QString::number(value));
//    ui->cashBackVal->repaint();
//}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::initializePage0()
{
    // initialize progress bar
    ui->progressBar->setTextVisible(true);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);
    ui->progressBarStatus->setText("0%");
    ui->progressBarStatus->repaint();

    //initialize global variables
    gasVal = 0;
    restaurantsVal = 0;
    departmentStoresVal = 0;
    groceriesVal = 0;
    supermarketsVal = 0;
    wholesaleVal = 0;
    hotelVal = 0;
    airfareVal = 0;
    travelVal = 0;
    amazonVal = 0;
    paypalVal = 0;
    onlineVal = 0;

    //initialize sliders
    ui->travelSlider->setRange(0,100);
    ui->restaurantsSlider->setRange(0,100);
    ui->departmentStoresSlider->setRange(0,100);
    ui->groceriesSlider->setRange(0,100);
    ui->superMarketsSlider->setRange(0,100);
    ui->wholesaleSlider->setRange(0,100);
    ui->hotelSlider->setRange(0,100);
    ui->airfareSlider->setRange(0,100);
    ui->travelSlider->setRange(0,100);
    ui->amazonSlider->setRange(0,100);
    ui->paypalSlider->setRange(0,100);
    ui->onlineSlider->setRange(0,100);
}

void MainWindow::on_gasSlider_valueChanged(int value)
{
        gasVal = value;
        ui->gasVal->setText(QString::number(value));
        ui->gasVal->repaint();
}

void MainWindow::on_restaurantsSlider_valueChanged(int value)
{
    restaurantsVal = value;
    ui->restaurantsVal->setText(QString::number(value));
    ui->restaurantsVal->repaint();
}

void MainWindow::on_departmentStoresSlider_valueChanged(int value)
{
    departmentStoresVal = value;
    ui->departmentStoresVal->setText(QString::number(value));
    ui->departmentStoresVal->repaint();
}

void MainWindow::on_groceriesSlider_valueChanged(int value)
{
    groceriesVal = value;
    ui->groceriesVal->setText(QString::number(value));
    ui->groceriesVal->repaint();
}

void MainWindow::on_superMarketsSlider_valueChanged(int value)
{
    supermarketsVal = value;
    ui->supermarketsVal->setText(QString::number(value));
    ui->supermarketsVal->repaint();
}

void MainWindow::on_wholesaleSlider_valueChanged(int value)
{
    wholesaleVal = value;
    ui->wholesaleVal->setText(QString::number(value));
    ui->wholesaleVal->repaint();
}



void MainWindow::on_hotelSlider_valueChanged(int value)
{
    hotelVal = value;
    ui->hotelVal->setText(QString::number(value));
    ui->hotelVal->repaint();
}

void MainWindow::on_airfareSlider_valueChanged(int value)
{
    airfareVal = value;
    ui->airfareVal->setText(QString::number(value));
    ui->airfareVal->repaint();
}



void MainWindow::on_travelSlider_valueChanged(int value)
{
    travelVal = value;
    ui->travelVal->setText(QString::number(value));
    ui->travelVal->repaint();
}

void MainWindow::on_amazonSlider_valueChanged(int value)
{
    amazonVal = value;
    ui->amazonVal->setText(QString::number(value));
    ui->amazonVal->repaint();
}

void MainWindow::on_paypalSlider_valueChanged(int value)
{
    paypalVal = value;
    ui->paypalVal->setText(QString::number(value));
    ui->paypalVal->repaint();
}

void MainWindow::on_onlineSlider_valueChanged(int value)
{
    onlineVal = value;
    ui->onlineVal->setText(QString::number(value));
    ui->onlineVal->repaint();
}
