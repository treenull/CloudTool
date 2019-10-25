#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Page_0/page_0.h"
#include "Page_1/page_1.h"
#include "Page_2/page_2.h"
#include "Page_3/page_3.h"
#include "Page_4/page_4.h"
#include "Page_5/page_5.h"
#include "Page_6/page_6.h"
#include "Menu/menu.h"


#include <QMainWindow>
#include <QWidget>
#include <QMouseEvent>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();   

protected:

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);


private slots:

    void on_pushButton_min_clicked();

    void on_pushButton_close_clicked();

    void on_toolButton_menu_clicked();

    void on_pushButton_skin_clicked();


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();




private:

    void set_pushButton();

    Ui::MainWindow *ui;

    Page_0 *widget_0;

    Page_1 *widget_1;

    Page_2 *widget_2;

    Page_3 *widget_3;

    Page_4 *widget_4;

    Page_5 *widget_5;

    Page_6 *widget_6;

    bool m_bPressed;

    QPoint m_point;
/*
    QPoint last;

    int TITLE_HEIGHT = 40;
*/
};

#endif // MAINWINDOW_H
