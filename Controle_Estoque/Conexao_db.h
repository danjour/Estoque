#ifndef CONEXAO_DB_H
#define CONEXAO_DB_H
#include <QtSql>
#include <QDebug>

class Conexao{
public:
    QSqlDatabase basedeDados;
    Conexao(){
        basedeDados=QSqlDatabase::addDatabase("QSQLITE");
    }
    void fechar(){
        basedeDados.close();
    }
    bool abrir(){
        QString local=qApp->applicationDirPath();
        qDebug() << local;
        QString banco=local+"/db/controlEstoque.db";
        qDebug() <<banco;
        basedeDados.setDatabaseName(banco);
        if(!basedeDados.open()){
            return false;
        }else{
            return true;
        }
    }
};

#endif // CONEXAO_DB_H
