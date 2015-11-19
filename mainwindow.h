#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtCore>
#include<QMessageBox>
#include"gausscal.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

protected:
    GaussCal cal;

private slots:
    void on_changeButton_clicked();
    void on_ellipseBox_currentIndexChanged(int index);
    void on_calButton_clicked();
    void on_comboBox_activated(int index);
};

#endif // MAINWINDOW_H
