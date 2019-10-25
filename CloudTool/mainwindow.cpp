#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QStackedWidget>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QToolBar>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);


        this->setWindowFlags(Qt::FramelessWindowHint);



        setAttribute(Qt::WA_TranslucentBackground);

        this->setWindowOpacity(0.95);

    setFixedSize(this->width(),this->height());

    set_pushButton();




    widget_0 = new Page_0(this);

    widget_1 = new Page_1(this);

    widget_2 = new Page_2(this);

    widget_3 = new Page_3(this);

    widget_4 = new Page_4(this);

    widget_5 = new Page_5(this);

    widget_6 = new Page_6(this);


    ui->stackedWidget->addWidget(widget_0);

    ui->stackedWidget->addWidget(widget_1);

    ui->stackedWidget->addWidget(widget_2);

    ui->stackedWidget->addWidget(widget_3);

    ui->stackedWidget->addWidget(widget_4);

    ui->stackedWidget->addWidget(widget_5);

    ui->stackedWidget->addWidget(widget_6);


     ui->stackedWidget->setCurrentWidget(widget_0);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        m_bPressed = true;
        m_point = event->pos();
    }
}


void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (m_bPressed)
        move(event->pos() - m_point + pos());
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);

    m_bPressed = false;
}



#if 0

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->y()<TITLE_HEIGHT)
    {
        last = event->globalPos();
    }
}




void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if(event->y()<TITLE_HEIGHT)
    {
        int dx = event->globalX() - last.x();
        int dy = event->globalY() - last.y();
        last = event->globalPos();
        this->move(this->x()+dx,this->y()+dy);
    }
}


void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->y()<TITLE_HEIGHT)
    {
        int dx = event->globalX() - last.x();
        int dy = event->globalY() - last.y();
        this->move(this->x()+dx,this->y()+dy);
    }
}
#endif



void MainWindow::set_pushButton()
{

}


void MainWindow::on_pushButton_min_clicked()
{
    this->showMinimized();
}


void MainWindow::on_pushButton_close_clicked()
{
    this->close();
}

void MainWindow::on_toolButton_menu_clicked()
{

}

void MainWindow::on_pushButton_skin_clicked()
{

}


void MainWindow::on_pushButton_clicked()
{
        ui->stackedWidget->setCurrentWidget(widget_1);
}


void MainWindow::on_pushButton_2_clicked()
{

        ui->stackedWidget->setCurrentWidget(widget_2);

}


void MainWindow::on_pushButton_3_clicked()
{

        ui->stackedWidget->setCurrentWidget(widget_3);

}


void MainWindow::on_pushButton_4_clicked()
{

        ui->stackedWidget->setCurrentWidget(widget_4);

}


void MainWindow::on_pushButton_5_clicked()
{

        ui->stackedWidget->setCurrentWidget(widget_5);

}


void MainWindow::on_pushButton_6_clicked()
{

        ui->stackedWidget->setCurrentWidget(widget_6);


}

