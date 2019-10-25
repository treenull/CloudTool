#if _MSC_VER >= 1600

#pragma execution_character_set("utf-8")

#endif


#include "page_6.h"
#include "ui_page_6.h"

#include <QProcess>

Page_6::Page_6(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_6)
{
    ui->setupUi(this);

    set_Page6_toolButton();
}

Page_6::~Page_6()
{
    delete ui;
}


void Page_6::set_Page6_toolButton()
{
    ui->Page6_toolButton->setIcon(QIcon("./program/OtherTool/iHasher/iHasher.ico"));
    ui->Page6_toolButton->setAutoRaise(true);
    ui->Page6_toolButton->setText("iHasher (文件哈希值校验器)");



    ui->Page6_toolButton_2->setIcon(QIcon("./program/OtherTool/ChipGenius/ChipGenius.ico"));
    ui->Page6_toolButton_2->setAutoRaise(true);
    ui->Page6_toolButton_2->setText("ChipGenius (USB芯片精灵)");


    ui->Page6_toolButton_3->setIcon(QIcon("./program/OtherTool/Freegata/freegata.ico"));
    ui->Page6_toolButton_3->setAutoRaise(true);
    ui->Page6_toolButton_3->setText("Freegata (翻墙工具 谨慎使用！)");

    ui->Page6_toolButton_4->setIcon(QIcon("./program/OtherTool/傲梅分区助手企业版_V8.3单文件版/傲梅分区助手企业版_V8.3单文件版.ico"));
    ui->Page6_toolButton_4->setAutoRaise(true);
    ui->Page6_toolButton_4->setText("傲梅分区助手企业版 单文件版");


    ui->Page6_toolButton_5->setIcon(QIcon("./program/OtherTool/360流量监控/360流量监控.ico"));
    ui->Page6_toolButton_5->setAutoRaise(true);
    ui->Page6_toolButton_5->setText("360流量监控 单文件版");







   // ui->Page3_toolButton_6->setIcon(QIcon("./program/SystemOptimization/UninstallToolPortable/UninstallToolPortable3.5.9.ico"));
    ui->Page6_toolButton_6->setAutoRaise(true);
    ui->Page6_toolButton_6->setText("");
    //ui->Page3_toolButton_6->setStyleSheet("QToolButton{""color:white;""}"
     //                                     "QToolButton:hover{" "color:black;""}");


    //ui->Page2_toolButton_7->setIcon(QIcon("./program/SystemTest/Speccy/speccy.ico"));
    ui->Page6_toolButton_7->setAutoRaise(true);
    ui->Page6_toolButton_7->setText("");
    //ui->Page2_toolButton_7->setStyleSheet("QToolButton{""color:white;""}"
     //                                   "QToolButton:hover{" "color:black;""}");

}


void Page_6::on_Page6_toolButton_clicked()
{
    QProcess process;
    process.startDetached("./program/OtherTool/iHasher/iHasher-v0.2.exe");

}

void Page_6::on_Page6_toolButton_2_clicked()
{
    QProcess process;
    process.startDetached("./program/OtherTool/ChipGenius/ChipGenius.exe");
}

void Page_6::on_Page6_toolButton_3_clicked()
{
    QProcess process;
    process.startDetached("./program/OtherTool/Freegata/fg768p.exe");
}

void Page_6::on_Page6_toolButton_4_clicked()
{
    QProcess process;
    process.startDetached("./program/OtherTool/傲梅分区助手企业版_V8.3单文件版/傲梅分区助手企业版_V8.3单文件版.exe");
}

void Page_6::on_Page6_toolButton_5_clicked()
{
    QProcess process;
    process.startDetached("./program/OtherTool/360流量监控/360流量监控.exe");
}



