#ifndef DATAMODEL_H
#define DATAMODEL_H

#include <QString>
#include <QObject>

class DataModel
{

public:
    DataModel();
    DataModel(QString name, QString phoneNumber) :m_name(name), m_phoneNumber(phoneNumber)
    {
    }


    QString name() const;
    void setName(QString name);

    QString phoneNumber() const;
    void setPhoneNumber(QString phoneNumber);

    bool isValid();

private:
    QString m_name;
    QString m_phoneNumber;
};

#endif // DATAMODEL_H
