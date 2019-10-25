#ifndef PAGE_3_H
#define PAGE_3_H

#include <QWidget>

namespace Ui {
class Page_3;
}

class Page_3 : public QWidget
{
    Q_OBJECT

public:
    explicit Page_3(QWidget *parent = nullptr);
    ~Page_3();

private slots:


    void on_Page3_toolButton_clicked();

    void on_Page3_toolButton_2_clicked();

    void on_Page3_toolButton_3_clicked();

    void on_Page3_toolButton_4_clicked();

    void on_Page3_toolButton_5_clicked();

   // void on_Page3_toolButton_6_clicked();

   // void on_Page3_toolButton_7_clicked();



private:
    Ui::Page_3 *ui;

    void set_Page3_toolButton();

};

#endif // PAGE_3_H
