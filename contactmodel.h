#ifndef CONTACTMODEL_H
#define CONTACTMODEL_H

#include <QAbstractListModel>
#include <QVariant>
#include <QList>
#include <QDebug>
#include <QtQuick>

#include "datamodel.h"
#include "server.h"


class ContactModel : public QAbstractListModel
{
    Q_OBJECT

public:
    enum ContactRole {
        NameRole = Qt::UserRole,
        PhoneRole = Qt::UserRole + 1
    };

    explicit ContactModel(QObject *parent = 0);
    ~ContactModel();
    ContactModel(DataModel data);

    void getDataFromServer();

    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    QHash<int, QByteArray> roleNames() const;

    QQmlListProperty<DataModel> list();

    // insert a contact at the index
    Q_INVOKABLE void insertContact(int index, DataModel *data);
    // insert a contact at the end
    Q_INVOKABLE void appendContact(const QString name, const QString phone);
    // remove a contact from the index
    Q_INVOKABLE void removeContact(int index);
    // edit a contact from the index
    Q_INVOKABLE void editContact(int index,const QString name,const QString phone);

    // get the size of the model
    Q_PROPERTY(int size READ size NOTIFY sizeChanged)

    // get contact data at the index
    Q_INVOKABLE QString getName(int index);
    Q_INVOKABLE QString getPhone(int index);

    int size() const;

    void setData(const DataModel &data);

    void setListContact(const QList<DataModel> &listContact);

//    QList<DataModel> list();
    QList<DataModel> getListContact() const;

public slots:
    void inserted(QString name, QString phone);

signals:
    void sizeChanged(int);
    void listChanged();

private:
    DataModel m_data;
    QList<DataModel*> m_listContact;


};

#endif // CONTACTMODEL_H
