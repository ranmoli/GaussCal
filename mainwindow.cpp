#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(378,240);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_changeButton_clicked()
{
    if(cal.isDirectCal())
    {
        cal.setIsDirectCal(false);
        ui->changeButton->setText(tr("反算"));
        ui->label1->setText(tr("X:"));
        ui->label2->setText(tr("Y:"));
        ui->label3->setText(tr("经度:"));
        ui->label4->setText(tr("纬度:"));
    }
    else
    {
        cal.setIsDirectCal(true);
        ui->changeButton->setText(tr("正算"));
        ui->label1->setText(tr("经度:"));
        ui->label2->setText(tr("纬度:"));
        ui->label3->setText(tr("X:"));
        ui->label4->setText(tr("Y:"));
    }
}

void MainWindow::on_ellipseBox_currentIndexChanged(int index)
{
  cal.setEllipse(static_cast<Ellipse>(index));
}

void MainWindow::on_calButton_clicked()
{
    if(ui->lineEdit1->text()==QString("")||ui->lineEdit2->text()==QString(""))
    {
        QMessageBox::warning(this,tr("警告"),tr("输入不完全"));
    }//还要判断中央子午线经度的框（未创建）


}
