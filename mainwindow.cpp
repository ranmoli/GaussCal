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
        ui->lineEdit1->setText("");
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit4->setText("");
    }
    else
    {
        cal.setIsDirectCal(true);
        ui->changeButton->setText(tr("正算"));
        ui->label1->setText(tr("经度:"));
        ui->label2->setText(tr("纬度:"));
        ui->label3->setText(tr("X:"));
        ui->label4->setText(tr("Y:"));
        ui->lineEdit1->setText("");
        ui->lineEdit2->setText("");
        ui->lineEdit3->setText("");
        ui->lineEdit4->setText("");
    }
}

void MainWindow::on_ellipseBox_currentIndexChanged(int index)
{
  cal.setEllipse(static_cast<Ellipse>(index));
}

void MainWindow::on_comboBox_activated(int index)
{
    cal.setZonewide(static_cast<ZoneWide>(index));
}

void MainWindow::on_calButton_clicked()
{
    if(ui->lineEdit1->text().isEmpty()||ui->lineEdit2->text().isEmpty())
    {
        QMessageBox::warning(this,tr("警告"),tr("输入不完全"));
        return;
    }

    if(cal.isDirectCal())
    {
        cal.setLongitude(ui->lineEdit1->text().toDouble());
        cal.setLatitude(ui->lineEdit2->text().toDouble());

        cal.calculate();//need to do

        ui->lineEdit3->setText(QString::number(cal.x()));
        ui->lineEdit4->setText(QString::number(cal.y()));

    }
    else
    {
        cal.setX(ui->lineEdit1->text().toDouble());
        cal.setY(ui->lineEdit2->text().toDouble());

        cal.calculate();//need to do

        ui->lineEdit3->setText(QString::number(cal.longitude()));
        ui->lineEdit4->setText(QString::number(cal.latitude()));
    }



}


