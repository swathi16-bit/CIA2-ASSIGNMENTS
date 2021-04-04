#ifndef SWATHICIA2_212218104167_H
#define SWATHICIA2_212218104167_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Swathicia2_212218104167; }
QT_END_NAMESPACE

class Swathicia2_212218104167 : public QMainWindow
{
    Q_OBJECT

public:
    Swathicia2_212218104167(QWidget *parent = nullptr);
    ~Swathicia2_212218104167();

private slots:
    void on_pushButton_toggled(bool checked);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Swathicia2_212218104167 *ui;
};
#endif // SWATHICIA2_212218104167_H
