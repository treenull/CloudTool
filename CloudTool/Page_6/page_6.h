#ifndef PAGE_6_H
#define PAGE_6_H

#include <QWidget>

namespace Ui {
class Page_6;
}

class Page_6 : public QWidget
{
    Q_OBJECT

public:
    explicit Page_6(QWidget *parent = nullptr);
    ~Page_6();


private slots:


    void on_Page6_toolButton_clicked();

    void on_Page6_toolButton_2_clicked();

    void on_Page6_toolButton_3_clicked();

    void on_Page6_toolButton_4_clicked();

    void on_Page6_toolButton_5_clicked();

   // void on_Page6_toolButton_6_clicked();

   // void on_Page6_toolButton_7_clicked();


private:
    Ui::Page_6 *ui;

    void set_Page6_toolButton();
};

#endif // PAGE_6_H
