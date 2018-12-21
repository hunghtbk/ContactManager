/****************************************************************************
** Meta object code from reading C++ file 'contactmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../contactmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contactmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ContactModel_t {
    QByteArrayData data[17];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContactModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContactModel_t qt_meta_stringdata_ContactModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ContactModel"
QT_MOC_LITERAL(1, 13, 11), // "sizeChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "listChanged"
QT_MOC_LITERAL(4, 38, 8), // "inserted"
QT_MOC_LITERAL(5, 47, 4), // "name"
QT_MOC_LITERAL(6, 52, 5), // "phone"
QT_MOC_LITERAL(7, 58, 13), // "insertContact"
QT_MOC_LITERAL(8, 72, 5), // "index"
QT_MOC_LITERAL(9, 78, 10), // "DataModel*"
QT_MOC_LITERAL(10, 89, 4), // "data"
QT_MOC_LITERAL(11, 94, 13), // "appendContact"
QT_MOC_LITERAL(12, 108, 13), // "removeContact"
QT_MOC_LITERAL(13, 122, 11), // "editContact"
QT_MOC_LITERAL(14, 134, 7), // "getName"
QT_MOC_LITERAL(15, 142, 8), // "getPhone"
QT_MOC_LITERAL(16, 151, 4) // "size"

    },
    "ContactModel\0sizeChanged\0\0listChanged\0"
    "inserted\0name\0phone\0insertContact\0"
    "index\0DataModel*\0data\0appendContact\0"
    "removeContact\0editContact\0getName\0"
    "getPhone\0size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContactModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   63,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    2,   68,    2, 0x02 /* Public */,
      11,    2,   73,    2, 0x02 /* Public */,
      12,    1,   78,    2, 0x02 /* Public */,
      13,    3,   81,    2, 0x02 /* Public */,
      14,    1,   88,    2, 0x02 /* Public */,
      15,    1,   91,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    8,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    8,    5,    6,
    QMetaType::QString, QMetaType::Int,    8,
    QMetaType::QString, QMetaType::Int,    8,

 // properties: name, type, flags
      16, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void ContactModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ContactModel *_t = static_cast<ContactModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->listChanged(); break;
        case 2: _t->inserted((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->insertContact((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< DataModel*(*)>(_a[2]))); break;
        case 4: _t->appendContact((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->removeContact((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->editContact((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: { QString _r = _t->getName((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 8: { QString _r = _t->getPhone((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ContactModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContactModel::sizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ContactModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ContactModel::listChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ContactModel *_t = static_cast<ContactModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->size(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ContactModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_ContactModel.data,
      qt_meta_data_ContactModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ContactModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContactModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ContactModel.stringdata0))
        return static_cast<void*>(const_cast< ContactModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int ContactModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ContactModel::sizeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ContactModel::listChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
