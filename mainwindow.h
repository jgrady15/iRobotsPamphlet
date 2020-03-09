#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "header.h"
#include "secdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Login_clicked();

private:
    QWidget *firstPageWidget;
    QWidget *secondPageWidget;
    QWidget *thirdPageWidget;

    Ui::MainWindow *ui;
    SecDialog *secDialog;
};

#endif // MAINWINDOW_H
