#if _MSC_VER >= 1600

#pragma execution_character_set("utf-8")

#endif


#include "page_5.h"
#include "ui_page_5.h"


#include <QProcess>

Page_5::Page_5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_5)
{
    ui->setupUi(this);

    set_Page5_toolButton();
}

Page_5::~Page_5()
{
    delete ui;
}


void Page_5::set_Page5_toolButton()
{
    ui->Page5_toolButton->setIcon(QIcon("./program/DataRecovery/Recuva/recuva_128.ico"));
    ui->Page5_toolButton->setAutoRaise(true);
    ui->Page5_toolButton->setText("Recuva (文件恢复工具) 32位 ");


    ui->Page5_toolButton_2->setIcon(QIcon("./program/DataRecovery/Recuva/recuva_128.ico"));
    ui->Page5_toolButton_2->setAutoRaise(true);
    ui->Page5_toolButton_2->setText("Recuva (文件恢复工具) 64位 ");


    ui->Page5_toolButton_3->setIcon(QIcon("./program/DataRecovery/RecoveryRobotPro/RecoveryRobotPro.ico"));
    ui->Page5_toolButton_3->setAutoRaise(true);
    ui->Page5_toolButton_3->setText("RecoveryRobotPro (数据恢复工具)");


    ui->Page5_toolButton_4->setIcon(QIcon("./program/DataRecovery/360文件恢复独立版/360文件恢复独立版.ico"));
    ui->Page5_toolButton_4->setAutoRaise(true);
    ui->Page5_toolButton_4->setText("360文件恢复 独立版 ");



    //ui->Page3_toolButton_5->setIcon(QIcon("./program/SystemOptimization/SpaceSniffer/SpaceSniffer.ico"));
    ui->Page5_toolButton_5->setAutoRaise(true);
    ui->Page5_toolButton_5->setText("");



   // ui->Page3_toolButton_6->setIcon(QIcon("./program/SystemOptimization/UninstallToolPortable/UninstallToolPortable3.5.9.ico"));
    ui->Page5_toolButton_6->setAutoRaise(true);
    ui->Page5_toolButton_6->setText("");


    //ui->Page2_toolButton_7->setIcon(QIcon("./program/SystemTest/Speccy/speccy.ico"));
    ui->Page5_toolButton_7->setAutoRaise(true);
    ui->Page5_toolButton_7->setText("");

}


void Page_5::on_Page5_toolButton_clicked()
{
    QProcess process;
    process.startDetached("./program/DataRecovery/Recuva/recuva.exe");

}


void Page_5::on_Page5_toolButton_2_clicked()
{
    QProcess process;
    process.startDetached("./program/DataRecovery/Recuva/recuva64.exe");
}

void Page_5::on_Page5_toolButton_3_clicked()
{
    QProcess process;
    process.startDetached("./program/DataRecovery/RecoveryRobotPro/RecoveryRobotPro.exe");
}

void Page_5::on_Page5_toolButton_4_clicked()
{
    QProcess process;
    process.startDetached("./program/DataRecovery/360文件恢复独立版/Recovery360.exe");
}
