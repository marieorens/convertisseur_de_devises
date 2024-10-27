#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),val_naira(0),val_xof(0),taux(1.7)
{
    ui->setupUi(this);
    connect(ui->pushButton,&QPushButton::clicked,this,&MainWindow::convertir);
    connect(ui->actionQuitter,&QAction::triggered,this,&MainWindow::close);
    connect(ui->actionA_propos,&QAction::triggered,this,&MainWindow::a_propos);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::convertir(void){

    val_xof=ui->doubleSpinBox_xof->value();
    val_naira=val_xof*taux;
    ui->doubleSpinBox_2_naira->setValue(val_naira);
}

void  MainWindow::a_propos(void){

    QMessageBox::information(this,"A propos","Ceci est un convertisseur de devises créé par Orens le génie putain l'émotion de ouf.\nVous pouvez choisir le taux de conversion en choisissant Fichier.");


}
