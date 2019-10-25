#if _MSC_VER >= 1600

#pragma execution_character_set("utf-8")

#endif


#include "page_3.h"
#include "ui_page_3.h"

#include <QProcess>

Page_3::Page_3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_3)
{
    ui->setupUi(this);


    set_Page3_toolButton();
}

Page_3::~Page_3()
{
    delete ui;
}


void Page_3::set_Page3_toolButton()
{

    ui->Page3_toolButton->setIcon(QIcon("./program/FileProcessing/Everything/Everything.ico"));
    ui->Page3_toolButton->setAutoRaise(true);
    ui->Page3_toolButton->setText("Everything (文件搜索工具)");



    ui->Page3_toolButton_2->setIcon(QIcon("./program/FileProcessing/FreeRename/FreeRename.ico"));
    ui->Page3_toolButton_2->setAutoRaise(true);
    ui->Page3_toolButton_2->setText("FreeRename (文件批量重命名)");



    ui->Page3_toolButton_3->setIcon(QIcon("./program/FileProcessing/360文件粉碎机/360文件粉碎机.ico"));
    ui->Page3_toolButton_3->setAutoRaise(true);
    ui->Page3_toolButton_3->setText("360文件粉碎机 单文件 ");


    ui->Page3_toolButton_4->setIcon(QIcon("./program/FileProcessing/PDFShaperPro/PDFViewer.ico"));
    ui->Page3_toolButton_4->setAutoRaise(true);
    ui->Page3_toolButton_4->setText("PDFViewer (PDF查看工具)");


    ui->Page3_toolButton_5->setIcon(QIcon("./program/FileProcessing/PDFShaperPro/PDFShaper.ico"));
    ui->Page3_toolButton_5->setAutoRaise(true);
    ui->Page3_toolButton_5->setText("PDFShaper (PDF处理工具)");






   // ui->Page3_toolButton_6->setIcon(QIcon("./program/SystemOptimization/UninstallToolPortable/UninstallToolPortable3.5.9.ico"));
    ui->Page3_toolButton_6->setAutoRaise(true);
    ui->Page3_toolButton_6->setText("");


    //ui->Page2_toolButton_7->setIcon(QIcon("./program/SystemTest/Speccy/speccy.ico"));
    ui->Page3_toolButton_7->setAutoRaise(true);
    ui->Page3_toolButton_7->setText("");



}


void Page_3::on_Page3_toolButton_clicked()
{
    QProcess process;
    process.startDetached("./program/FileProcessing/Everything/Everything.exe"); // "."代表程序运行目录 /代表当前盼复的根目录 打开程序运行目录下的Data文件夹作为默认打开路径，这里应该写成"./Data/"，

}


void Page_3::on_Page3_toolButton_2_clicked()
{
    QProcess process;
    process.startDetached("./program/FileProcessing/FreeRename/FreeRename5.3.exe");

}


void Page_3::on_Page3_toolButton_3_clicked()
{
    QProcess process;
    process.startDetached("./program/FileProcessing/360文件粉碎机/360文件粉碎机.exe");

}

void Page_3::on_Page3_toolButton_4_clicked()
{
    QProcess process;
    process.startDetached("./program/FileProcessing/PDFShaperPro/PDFViewer.exe");

}

void Page_3::on_Page3_toolButton_5_clicked()
{
    QProcess process;
    process.startDetached("./program/FileProcessing/PDFShaperPro/PDFShaper.exe");

}

