#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QMessageBox>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QIcon closeCad;
    QIcon openCad;
    static bool logado;
    static QString nome_func, acesso_func,user_func;
    static int id_colab;


private slots:
    void on_bnt_block_clicked();

    void on_pushButton_clicked();

    void on_actionEstoque_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
