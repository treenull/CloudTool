#if _MSC_VER >= 1600

#pragma execution_character_set("utf-8")

#endif


#include "page_2.h"
#include "ui_page_2.h"

#include <QProcess>

Page_2::Page_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_2)
{
    ui->setupUi(this);

    set_Page2_toolButton();
}

Page_2::~Page_2()
{
    delete ui;
}

void Page_2::set_Page2_toolButton()
{

    ui->Page2_toolButton->setIcon(QIcon("./program/SystemOptimization/CCleaner/CCleaner_128.ico"));
    ui->Page2_toolButton->setAutoRaise(true);
    ui->Page2_toolButton->setText("CCleaner (专业版) 32位 ");


    ui->Page2_toolButton_2->setIcon(QIcon("./program/SystemOptimization/CCleaner/CCleaner_128.ico"));
    ui->Page2_toolButton_2->setAutoRaise(true);
    ui->Page2_toolButton_2->setText("CCleaner (专业版) 64位 ");



    ui->Page2_toolButton_3->setIcon(QIcon("./program/SystemOptimization/DISM++/Dism++.ico"));
    ui->Page2_toolButton_3->setAutoRaise(true);
    ui->Page2_toolButton_3->setText("Dism++  32位 ");


    ui->Page2_toolButton_4->setIcon(QIcon("./program/SystemOptimization/DISM++/Dism++.ico"));
    ui->Page2_toolButton_4->setAutoRaise(true);
    ui->Page2_toolButton_4->setText("Dism++  64位 ");



    ui->Page2_toolButton_5->setIcon(QIcon("./program/SystemOptimization/SpaceSniffer/SpaceSniffer.ico"));
    ui->Page2_toolButton_5->setAutoRaise(true);
    ui->Page2_toolButton_5->setText("Spacesniffer (硬盘空间分析)");



    ui->Page2_toolButton_6->setIcon(QIcon("./program/SystemOptimization/UninstallToolPortable/UninstallToolPortable3.5.9.ico"));
    ui->Page2_toolButton_6->setAutoRaise(true);
    ui->Page2_toolButton_6->setText("UninstallToolPortable (程序卸载工具)");


    ui->Page2_toolButton_7->setIcon(QIcon("./program/SystemOptimization/关闭或禁用windows自动更新工具/关闭或禁用windows自动更新工具.ico"));
    ui->Page2_toolButton_7->setAutoRaise(true);
    ui->Page2_toolButton_7->setText("关闭或禁用windows自动更新工具");




}

void Page_2::on_Page2_toolButton_clicked()
{
    QProcess process;
    process.startDetached("./program/SystemOptimization/CCleaner/CCleaner.exe"); // "."代表程序运行目录 /代表当前盼复的根目录 打开程序运行目录下的Data文件夹作为默认打开路径，这里应该写成"./Data/"，

}


void Page_2::on_Page2_toolButton_2_clicked()
{
    QProcess process;
    process.startDetached("./program/SystemOptimization/CCleaner/CCleaner64.exe");

}

void Page_2::on_Page2_toolButton_3_clicked()
{
    QProcess process;
    process.startDetached("./program/SystemOptimization/DISM++/Dism++x86.exe");
}

void Page_2::on_Page2_toolButton_4_clicked()
{
    QProcess process;
    process.startDetached("./program/SystemOptimization/DISM++/Dism++x64.exe");

}

void Page_2::on_Page2_toolButton_5_clicked()
{
    QProcess process;
    process.startDetached("./program/SystemOptimization/SpaceSniffer/SpaceSniffer.exe");

}

void Page_2::on_Page2_toolButton_6_clicked()
{
    QProcess process;
    process.startDetached("./program/SystemOptimization/UninstallToolPortable/UninstallToolPortable3.5.9.exe");

}


void Page_2::on_Page2_toolButton_7_clicked()
{
    QProcess process;
    process.startDetached("./program/SystemOptimization/关闭或禁用windows自动更新工具/关闭或禁用windows自动更新工具V2.80.1.exe");

}
