#if _MSC_VER >= 1600

#pragma execution_character_set("utf-8")    //解决msvc中文乱码

#endif


#include "page_1.h"
#include "ui_page_1.h"

#include "mainwindow.h"

#include <QProcess>


void returnHomePage();


Page_1::Page_1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_1)
{
    ui->setupUi(this);

    set_Page1_toolButton();


}

Page_1::~Page_1()
{
    delete ui;
}

void Page_1::set_Page1_toolButton()
{
    /*ui->Page1_toolButton->setIcon(QIcon("./program/cpu-z/cpuz.ico"));
    ui->Page1_toolButton->setText("CPU-Z (CPU信息检测) 32位");
    //ui->Page1_toolButton->addMenu(tr("cpuz很强大"));
    ui->Page1_toolButton->setStyleSheet("QToolButton{"
                       //"background-color:rgba(100,225,100,30);"//背景色（也可以设置图片）
                       //"border-style:outset;"                  //边框样式（inset/outset）
                       //"border-width:4px;"                     //边框宽度像素
                       //"border-radius:10px;"                   //边框圆角半径像素
                       //"border-color:rgba(255,255,255,30);"    //边框颜色
                       //"font:bold 10px;"                       //字体，字体大小
                       "color:white;"                //字体颜色
                       //"padding:6px;"                          //填衬
                       "}"
                       //鼠标按下样式
                       //"QToolButton:pressed{"
                       //"background-color:rgba(100,255,100,200);"
                       //"border-color:rgba(255,255,255,30);"
                       //"border-style:inset;"
                       //"color:blue;"
                       //"}"
                       //鼠标悬停样式
                       "QToolButton:hover{"
                       //"background-color:rgba(100,255,100,100);"
                       //"border-color:rgba(255,255,255,200);"
                       "color:green;"
                       "}");
        */

    ui->Page1_toolButton->setIcon(QIcon("./program/SystemTest/Speccy/speccy.ico"));
    ui->Page1_toolButton->setAutoRaise(true);
    ui->Page1_toolButton->setText("Speccy (硬件信息检测) 32位 ");

    //QMenu *menu=new QMenu();
   // menu->addMenu(tr("wangauduahsdjasdsaj;djas;ldjas;da"));
   // ui->Page1_toolButton->setPopupMode(QToolButton::MenuButtonPopup);
   // ui->Page1_toolButton->setMenu(menu);


    ui->Page1_toolButton_2->setIcon(QIcon("./program/SystemTest/CPU-Z/cpuz.ico"));
    ui->Page1_toolButton_2->setAutoRaise(true);
    ui->Page1_toolButton_2->setText("CPU-Z (CPU信息检测) 32位 ");



    ui->Page1_toolButton_3->setIcon(QIcon("./program/SystemTest/CPU-Z/cpuz.ico"));
    ui->Page1_toolButton_3->setAutoRaise(true);
    ui->Page1_toolButton_3->setText("CPU-Z (CPU信息检测) 64位 ");


    ui->Page1_toolButton_4->setIcon(QIcon("./program/SystemTest/GPU-Z/GPU-Z_128.ico"));
    ui->Page1_toolButton_4->setAutoRaise(true);
    ui->Page1_toolButton_4->setText("GPU-Z (GPU信息检测)");


    ui->Page1_toolButton_5->setIcon(QIcon("./program/SystemTest/DiskInfo/DiskInfo.ico"));
    ui->Page1_toolButton_5->setAutoRaise(true);
    ui->Page1_toolButton_5->setText("DiskInfo (硬盘信息检测)");


    ui->Page1_toolButton_6->setIcon(QIcon("./program/SystemTest/Battery/BatteryMon2_BATTERYMON.ico"));
    ui->Page1_toolButton_6->setAutoRaise(true);
    ui->Page1_toolButton_6->setText("BatteryMon (电池信息检测)");



    ui->Page1_toolButton_7->setIcon(QIcon("./program/SystemTest/Speccy/speccy.ico"));
    ui->Page1_toolButton_7->setAutoRaise(true);
    ui->Page1_toolButton_7->setText("Speccy (硬件信息检测) 64位 ");



}

void Page_1::on_Page1_toolButton_clicked()
{
    QProcess process;
    process.startDetached("./program/SystemTest/Speccy/Speccy.exe");

}


void Page_1::on_Page1_toolButton_2_clicked()
{
    QProcess process;
    process.startDetached("./program/SystemTest/CPU-Z/cpuz_x32.exe");

}

void Page_1::on_Page1_toolButton_3_clicked()
{
    QProcess process;
    process.startDetached("./program/SystemTest/CPU-Z/cpuz_x64.exe");
}

void Page_1::on_Page1_toolButton_4_clicked()
{
    QProcess process;
    process.startDetached("./program/SystemTest/GPU-Z/GPU-Z.exe");

}

void Page_1::on_Page1_toolButton_5_clicked()
{
    QProcess process;
    process.startDetached("./program/SystemTest/DiskInfo/DiskInfo.exe");

}

void Page_1::on_Page1_toolButton_6_clicked()
{
    QProcess process;
    process.startDetached("./program/SystemTest/Battery/BatteryMon2.1cn.exe");

}


void Page_1::on_Page1_toolButton_7_clicked()
{
    QProcess process;
    process.startDetached("./program/SystemTest/Speccy/Speccy64.exe");

}




