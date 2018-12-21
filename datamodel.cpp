#include "datamodel.h"

DataModel::DataModel()
{

}

QString DataModel::name() const
{
    return m_name;
}

void DataModel::setName(QString name)
{
    m_name = name;
}

QString DataModel::phoneNumber() const
{
    return m_phoneNumber;
}

void DataModel::setPhoneNumber(QString phoneNumber)
{
    m_phoneNumber = phoneNumber;
}

bool DataModel::isValid()
{
    if (m_name.isEmpty() || m_phoneNumber.isEmpty())
        return false;
    else
        return true;
}
