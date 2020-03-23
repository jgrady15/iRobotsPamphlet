#ifndef FRONTPAGE_H
#define FRONTPAGE_H

#include "header.h"
#include <QMainWindow>
#include "ui_frontpage.h"
#include "loginwindow.h"
#include "reviewwindow.h"
#include "ui_frontpage.h"
#include "helpmenu.h"

namespace Ui {
class FrontPage;
}

class FrontPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit FrontPage(QWidget *parent = nullptr);
    ~FrontPage();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_homeButton_1_clicked();

    void on_homeButton_2_clicked();

    void on_homeButton_3_clicked();

    void submitReview();

    void stopItGetSomeHelp();
    void sendPamphlet();
    void on_pamphlet_button_clicked();

private:
    Ui::FrontPage *ui;
    MainWindow *mainW = new MainWindow;
    reviewWindow *review;
    helpMenu *help = new helpMenu;
    emailWidget *email = new emailWidget();
};

#endif // FRONTPAGE_H
