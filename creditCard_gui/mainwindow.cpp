#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    travelSliderVal = 0;
    diningSliderVal = 0;
    cashbackSliderVal = 0;
    pointsSliderVal = 0;
    grocerySliderVal = 0;
    gasSliderVal = 0;
    ui->setupUi(this);
    ui->prefErrorDialog->setVisible(false);
    ui->csvErrorDialog->setVisible(false);
    ui->progressBar->setTextVisible(true);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);
    ui->progressBarStatus->setText("0%");
    ui->progressBarStatus->repaint();
    ui->travelSlider->setRange(0,10);
    ui->diningSlider->setRange(0,10);
    ui->cashBackSlider->setRange(0,10);
    ui->pointsSlider->setRange(0,10);
    ui->grocerySlider->setRange(0,10);
    ui->gasSlider->setRange(0,10);
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
    int total = travelSliderVal + diningSliderVal + cashbackSliderVal;
    if(total == 0 || total == 10) {
        ui->stackedWidget->setCurrentIndex(1);
        ui->progressBar->setValue(50);
        ui->progressBarStatus->setText("50%");
        ui->progressBarStatus->repaint();
    } else {
        ui->prefErrorDialog->setVisible(true);
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
        ui->csvErrorDialog->setVisible(true);
        ui->csvErrorDialog->repaint();
    }

}

void MainWindow::on_travelSlider_valueChanged(int value)
{
    travelSliderVal = value;
    ui->travelVal->setText(QString::number(value));
    ui->travelVal->repaint();

}

void MainWindow::on_diningSlider_valueChanged(int value)
{
    diningSliderVal = value;
    ui->diningVal->setText(QString::number(value));
    ui->diningVal->repaint();
}

void MainWindow::on_cashBackSlider_valueChanged(int value)
{
    cashbackSliderVal = value;
    ui->cashBackVal->setText(QString::number(value));
    ui->cashBackVal->repaint();
}


void MainWindow::on_prefErrorDialogOk_clicked()
{
    ui->prefErrorDialog->close();
}


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
//    travelSliderVal = 0;
//    diningSliderVal = 0;
//    cashbackSliderVal = 0;
//    pointsSliderVal = 0;
//    grocerySliderVal = 0;
//    gasSliderVal = 0;
//    ui->prefErrorDialog->setVisible(false);
//    ui->csvErrorDialog->setVisible(false);
//    ui->progressBar->setTextVisible(true);
//    ui->progressBar->setMinimum(0);
//    ui->progressBar->setMaximum(100);
//    ui->progressBar->setValue(0);
//    ui->progressBarStatus->setText("0%");
//    ui->progressBarStatus->repaint();
//    ui->travelSlider->setRange(0,10);
//    ui->diningSlider->setRange(0,10);
//    ui->cashBackSlider->setRange(0,10);
//    ui->pointsSlider->setRange(0,10);
//    ui->grocerySlider->setRange(0,10);
//    ui->gasSlider->setRange(0,10);
}

void MainWindow::on_csvErrorDialogOk_clicked()
{
    ui->csvErrorDialog->close();
    ui->csvErrorDialog->repaint();
}
