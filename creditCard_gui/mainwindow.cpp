#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QString fileName = QFileDialog::getOpenFileName(this,
            ("Open Image"), "Users/Katie", ("Image Files (*.png *.jpg *.bmp)"));

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
