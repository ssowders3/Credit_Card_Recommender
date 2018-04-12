#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QFileDialog>
#include <QFileDialog>
#include <QDebug>

class QFileDialogTester : public QWidget
{
public:
  void openFile()
  {
    QString filename =  QFileDialog::getOpenFileName(
          this,
          "Open Document",
          "User/Katie",
          "All files (*.*) ;; Document files (*.doc *.rtf);; PNG files (*.png)");

    if( !filename.isNull() )
    {
      qDebug() << "selected file path : " << filename.toUtf8();
    }
  }
};


int main(int argc, char *argv[])
{
    QApplication app( argc, argv );

    QFileDialogTester test;
    test.openFile();

    return 0;
//    QApplication a(argc, argv);
//    MainWindow w;
//    QPushButton button;
//    button.setText("Credit Card");
//    button.setToolTip("Suck my dick");
//    button.show();

//    //w.show();

//    return a.exec();
}


