#ifndef PAGE_0_H
#define PAGE_0_H

#include <QWidget>

#include <QTimer>
#include <QDateTime>

namespace Ui {
class Page_0;
}

class Page_0 : public QWidget
{
    Q_OBJECT

public:
    explicit Page_0(QWidget *parent = nullptr);
    ~Page_0();

private slots:

    void on_toolButton_clicked();


    void timerUpdate(void);

private:
    Ui::Page_0 *ui;
};

#endif // PAGE_0_H
