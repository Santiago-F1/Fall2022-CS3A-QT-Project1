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

private slots:
    void on_pushButton_22_clicked();

    void on_sortByTeamName_clicked();

    void on_pushButton_20_clicked();

    void on_sortByStadiumName_clicked();

    void on_pushButton_15_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
