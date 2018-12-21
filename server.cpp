#include "server.h"

#include <QString>




//QQmlListProperty<data> client2::dt()
//{
//    return QQmlListProperty<data>(this, d_data);
//}

//void client2::add(QString name, QString number)
//{
//    d_data.push_back(new data(name, number));
//    emit dtChanged();
//}


Server::Server()
{
    m_server = new QTcpServer();
    m_socket = new QTcpSocket();
    connect(m_server , SIGNAL(newConnection()),this, SLOT(acceptConnection()));
    if (m_server->listen(QHostAddress::Any ,8888))
    {
        qDebug()<< "server started";
    }
    else
    {
        qDebug ()<< "server did not start";
    }

}

Server::~Server()
{
    delete m_server;
    delete m_socket;
}

void Server::acceptConnection()
{
    qDebug() << "new connection";
    m_socket = m_server->nextPendingConnection();
    connect(m_socket,SIGNAL(readyRead()),this,SLOT(startRead()));
}

void Server::startRead()
{
    QString temp = m_socket->readAll();
     qDebug() << temp;
    QStringList list = temp.split(':');
    QString name, phone;
    name = list.at(0);
    phone = list.at(1);
    m_list.append(DataModel(name, phone));
    qDebug ()<< m_list.at(0).name() << m_list.at(0).phoneNumber();
//    ContactModel contact;

//    contact.appendContact(name, phone);
    emit addData(name, phone);
}

QList<DataModel> Server::list() const
{
    return m_list;
}
