#ifndef PAGE_2_H
#define PAGE_2_H

#include <QWidget>

namespace Ui {
class Page_2;
}

class Page_2 : public QWidget
{
    Q_OBJECT

public:
    explicit Page_2(QWidget *parent = nullptr);
    ~Page_2();


private slots:


    void on_Page2_toolButton_clicked();

    void on_Page2_toolButton_2_clicked();

    void on_Page2_toolButton_3_clicked();

    void on_Page2_toolButton_4_clicked();

    void on_Page2_toolButton_5_clicked();

    void on_Page2_toolButton_6_clicked();

    void on_Page2_toolButton_7_clicked();


private:
    Ui::Page_2 *ui;

    void set_Page2_toolButton();


};

#endif // PAGE_2_H
