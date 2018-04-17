#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int travelSliderVal;
    int diningSliderVal;
    int cashbackSliderVal;
    int pointsSliderVal;
    int grocerySliderVal;
    int gasSliderVal;
    QString filename;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_fileUploadButton_clicked();
    void on_goToPage1_clicked();
    void on_goToPage2_clicked();
    void on_travelSlider_valueChanged(int value);
    void on_diningSlider_valueChanged(int value);
    void on_cashBackSlider_valueChanged(int value);

    void on_prefErrorDialogOk_clicked();

    void on_pushButton_clicked();

    void on_csvErrorDialogOk_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
