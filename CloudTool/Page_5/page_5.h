#ifndef PAGE_5_H
#define PAGE_5_H

#include <QWidget>

namespace Ui {
class Page_5;
}

class Page_5 : public QWidget
{
    Q_OBJECT

public:
    explicit Page_5(QWidget *parent = nullptr);
    ~Page_5();

private slots:


   void on_Page5_toolButton_clicked();

   void on_Page5_toolButton_2_clicked();

   void on_Page5_toolButton_3_clicked();

   void on_Page5_toolButton_4_clicked();

   // void on_Page5_toolButton_5_clicked();

   // void on_Page5_toolButton_6_clicked();

   // void on_Page5_toolButton_7_clicked();


private:
    Ui::Page_5 *ui;

    void set_Page5_toolButton();
};

#endif // PAGE_5_H
