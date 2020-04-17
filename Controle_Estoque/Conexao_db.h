#ifndef CONEXAO_DB_H
#define CONEXAO_DB_H
#include <QtSql>
#include <QDebug>

class Conexao{
public:
    QSqlDatabase basedeDados;
    QString local;
    QString banco;
    Conexao(){
        basedeDados=QSqlDatabase::addDatabase("QSQLITE");
    }
    void fechar(){
        basedeDados.close();
    }
    bool abrir(){
        QString local=qApp->applicationDirPath();
        QString banco=local+"/db/controlEstoque.db";
        basedeDados.setDatabaseName(banco);
        if(!basedeDados.open()){
            return false;
        }else{
            return true;
        }
    }
    bool aberto(){
        if(basedeDados.isOpen()){
            return true;
        }else{
            return false;
        }
    }
};

#endif // CONEXAO_DB_H
