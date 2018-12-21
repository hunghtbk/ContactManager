#include "contactmodel.h"

#include <QModelIndex>

ContactModel::ContactModel(QObject *parent) : QAbstractListModel(parent)
{

//    m_listContact.append(DataModel("Mike", "555555555"));
//    m_listContact.append(DataModel(" ", " "));
//    m_listContact.append(DataModel(" ", " "));
//    m_listContact.append(DataModel(" ", " "));
//    m_listContact.append(DataModel(" ", " "));


}

ContactModel::~ContactModel()
{

}

ContactModel::ContactModel(DataModel data) : m_data(data)
{

}

void ContactModel::getDataFromServer()
{
    Server server;
    server.startRead();
    for (int i = 0; i < server.list().size(); i++) {
//        m_listContact.append(server.list().at(i));
    }
}

int ContactModel::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return m_listContact.size();
    else
        return 0;
}

QVariant ContactModel::data(const QModelIndex &index, int role) const
{
    if (index.row() < 0 || index.row() >= m_listContact.size())
        return QVariant();

    DataModel *data = m_listContact[index.row()];
    if (role == NameRole)
        return data->name();
    else if (role == PhoneRole)
        return data->phoneNumber();

    return QVariant();
}

QHash<int, QByteArray> ContactModel::roleNames() const
{
    QHash<int, QByteArray> role;
    if (role.isEmpty()) {
        role[ContactRole::NameRole] = "name";
        role[ContactRole::PhoneRole] = "phone";
    }

    return role;
}

QQmlListProperty<DataModel> ContactModel::list()
{
    return QQmlListProperty<DataModel>(this,m_listContact);
}

// insert
void ContactModel::insertContact(int index, DataModel *data)
{
    if (index < 0 || index > m_listContact.size()) {
        return;
    }

    if (!data->isValid())
        return;

    emit beginInsertRows(QModelIndex(), index, index);
    m_listContact.insert(index, data);
    emit endInsertRows();

    emit sizeChanged(m_listContact.size());
    qDebug() << m_listContact.at(index)->name();

//    emit listChanged();
}

void ContactModel::appendContact(const QString name, const QString phone)
{
    DataModel *data = new DataModel;
    data->setName(name);
    data->setPhoneNumber(phone);
    insertContact(size(), data);
}

// remove
void ContactModel::removeContact(int index)
{
    if (index < 0 || index > m_listContact.size()) {
        return;
    }

    emit beginRemoveRows(QModelIndex(), index, index);
    m_listContact.removeAt(index);
    emit endRemoveRows();
    emit sizeChanged(m_listContact.size());
}

void ContactModel::editContact(int index,const QString name,const QString phone)
{
    beginResetModel();
    if (index < 0 || index >= m_listContact.size()) {
        return;
    }
    m_listContact[index]->setName(name);
    m_listContact[index]->setPhoneNumber(phone);
    endResetModel();
}



QString ContactModel::getName(int index)
{
    if (index < 0 || index >= m_listContact.size()) {
        return "";
    }
    return m_listContact.at(index)->name();
}

QString ContactModel::getPhone(int index)
{
    if (index < 0 || index >= m_listContact.size()) {
        return "";
    }
    return m_listContact.at(index)->phoneNumber();
}

int ContactModel::size() const
{
    return m_listContact.size();
}

void ContactModel::setData(const DataModel &data)
{
    m_data = data;
}


void ContactModel::inserted(QString name, QString phone)
{
    appendContact(name, phone);
}

