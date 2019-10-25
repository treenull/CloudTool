#if _MSC_VER >= 1600

#pragma execution_character_set("utf-8")

#endif


#include "page_0.h"
#include "ui_page_0.h"

#include <QDesktopServices>
#include <QUrl>


Page_0::Page_0(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_0)
{
    ui->setupUi(this);

    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    timer->start(1000);

    timerUpdate();
}

Page_0::~Page_0()
{
    delete ui;
}



void Page_0::on_toolButton_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/onlywyj/ToolBox/releases"));

}

void Page_0::timerUpdate(void)
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy/MM/dd dddd \n "
                                "hh:mm \n ");                   //设置时间格式 2019/10/5 星期六  21:26:25  (yyyy/mm/dd  dddd\n   hh:mm:ss)
    ui->label->setText(str);
}
