#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpSocket>
#include <QTcpServer>

#include "datamodel.h"
#include "contactmodel.h"

class Server : public QObject
{
    Q_OBJECT
public:
    Server();
    ~Server();

    QList<DataModel> list() const;

signals:
    void addData(QString name, QString phone);
public slots:
    void acceptConnection();
    void startRead();

private:
    QTcpServer *m_server;
    QTcpSocket *m_socket;
    QList<DataModel> m_list;
};

#endif // SERVER_H
