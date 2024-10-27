#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void convertir(void);
    void a_propos(void);
private:
    Ui::MainWindow *ui;
    double taux,val_naira,val_xof;
};
#endif // MAINWINDOW_H
