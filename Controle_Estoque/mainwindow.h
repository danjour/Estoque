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
    bool logado;
    QString nome_func, acesso_func;
    QSqlDatabase basedeDados=QSqlDatabase::addDatabase("QSQLITE");

private slots:
    void on_bnt_block_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
