#ifndef PAGE_4_H
#define PAGE_4_H

#include <QWidget>

namespace Ui {
class Page_4;
}

class Page_4 : public QWidget
{
    Q_OBJECT

public:
    explicit Page_4(QWidget *parent = nullptr);
    ~Page_4();

private slots:


    void on_Page4_toolButton_clicked();

    void on_Page4_toolButton_2_clicked();

    void on_Page4_toolButton_3_clicked();

    //void on_Page4_toolButton_4_clicked();

   // void on_Page4_toolButton_5_clicked();

   // void on_Page4_toolButton_6_clicked();

   // void on_Page4_toolButton_7_clicked();


private:
    Ui::Page_4 *ui;

    void set_Page4_toolButton();
};

#endif // PAGE_4_H
