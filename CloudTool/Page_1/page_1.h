#ifndef PAGE_1_H
#define PAGE_1_H

#include <QWidget>

namespace Ui {
class Page_1;
}

class Page_1 : public QWidget
{
    Q_OBJECT

public:
    explicit Page_1(QWidget *parent = nullptr);
    ~Page_1();

private slots:


    void on_Page1_toolButton_clicked();

    void on_Page1_toolButton_2_clicked();

    void on_Page1_toolButton_3_clicked();

    void on_Page1_toolButton_4_clicked();

    void on_Page1_toolButton_5_clicked();

    void on_Page1_toolButton_6_clicked();

    void on_Page1_toolButton_7_clicked();



private:
    Ui::Page_1 *ui;

    void set_Page1_toolButton();


};

#endif // PAGE_1_H
