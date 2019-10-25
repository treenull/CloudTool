#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QTime>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QPixmap *pixmap = new QPixmap;
    pixmap->load(":/image/loading.png");
    //QPixmap pixmap(":/image/ToolBox.png");
    //pixmap = pixmap.scaled(970, 650);
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(*pixmap);
    splash->show();
    QTime t;
    t.start();
    while(t.elapsed()<2000)
    {
       QApplication::processEvents();
    }

    QFile qss(":/Qss.qss");
    qss.open(QFile::ReadOnly);
    qApp->setStyleSheet(qss.readAll());
    qss.close();

    MainWindow w;

    w.show();

    splash->finish(&w);

    delete splash;

    delete pixmap;

    return a.exec();
}
