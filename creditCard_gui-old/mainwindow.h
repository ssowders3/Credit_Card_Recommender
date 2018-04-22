#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int gasVal;
    int restaurantsVal;
    int departmentStoresVal;
    int groceriesVal;
    int supermarketsVal;
    int wholesaleVal;
    int hotelVal;
    int airfareVal;
    int travelVal;
    int amazonVal;
    int paypalVal;
    int onlineVal;
    int totalWeights;
    QString filename;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QMessageBox *p1ErrorDialog;
    QMessageBox *p2ErrorDialog;

private slots:
    void on_fileUploadButton_clicked();
    void on_goToPage1_clicked();
    void on_goToPage2_clicked();
    void on_pushButton_clicked();
    void on_gasSlider_valueChanged(int value);

    void on_restaurantsSlider_valueChanged(int value);

    void on_departmentStoresSlider_valueChanged(int value);

    void on_groceriesSlider_valueChanged(int value);

    void on_superMarketsSlider_valueChanged(int value);

    void on_wholesaleSlider_valueChanged(int value);

    void on_hotelSlider_valueChanged(int value);

    void on_airfareSlider_valueChanged(int value);

    void on_travelSlider_valueChanged(int value);

    void on_amazonSlider_valueChanged(int value);

    void on_paypalSlider_valueChanged(int value);

    void on_onlineSlider_valueChanged(int value);
    void initializePage0();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
