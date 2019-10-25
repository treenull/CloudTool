#if _MSC_VER >= 1600

#pragma execution_character_set("utf-8")

#endif


#include "page_4.h"
#include "ui_page_4.h"

#include <QProcess>

Page_4::Page_4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_4)
{
    ui->setupUi(this);

    set_Page4_toolButton();
}

Page_4::~Page_4()
{
    delete ui;
}

void Page_4::set_Page4_toolButton()
{
    ui->Page4_toolButton->setIcon(QIcon("./program/DownloadTool/PanDownload/PanDownload.ico"));
    ui->Page4_toolButton->setAutoRaise(true);
    ui->Page4_toolButton->setText("PanDownload (网盘下载器)");



    ui->Page4_toolButton_2->setIcon(QIcon("./program/DownloadTool/冰点文库下载器/冰点文库下载器.ico"));
    ui->Page4_toolButton_2->setAutoRaise(true);
    ui->Page4_toolButton_2->setText("冰点文库下载器 (文库资源下载)");



    //ui->Page4_toolButton_3->setIcon(QIcon("./program/DownloadTool/蘑菇游戏下载器/pcstory.ico"));
    ui->Page4_toolButton_3->setAutoRaise(true);
    ui->Page4_toolButton_3->setText("");



   // ui->Page3_toolButton_4->setIcon(QIcon("./program/SystemOptimization/DISM++/Dism++.ico"));
    ui->Page4_toolButton_4->setAutoRaise(true);
    ui->Page4_toolButton_4->setText("");



    //ui->Page3_toolButton_5->setIcon(QIcon("./program/SystemOptimization/SpaceSniffer/SpaceSniffer.ico"));
    ui->Page4_toolButton_5->setAutoRaise(true);
    ui->Page4_toolButton_5->setText("");


   // ui->Page3_toolButton_6->setIcon(QIcon("./program/SystemOptimization/UninstallToolPortable/UninstallToolPortable3.5.9.ico"));
    ui->Page4_toolButton_6->setAutoRaise(true);
    ui->Page4_toolButton_6->setText("");


    //ui->Page2_toolButton_7->setIcon(QIcon("./program/SystemTest/Speccy/speccy.ico"));
    ui->Page4_toolButton_7->setAutoRaise(true);
    ui->Page4_toolButton_7->setText("");

}


void Page_4::on_Page4_toolButton_clicked()
{
    QProcess process;
    process.startDetached("./program/DownloadTool/PanDownload/PanDownload.exe");

}


void Page_4::on_Page4_toolButton_2_clicked()
{
    QProcess process;
    process.startDetached("./program/DownloadTool/冰点文库下载器/冰点文库下载器.exe");
}


void Page_4::on_Page4_toolButton_3_clicked()
{
    QProcess process;
    process.startDetached("./program/DownloadTool/蘑菇游戏下载器/pcstory.exe");
}
