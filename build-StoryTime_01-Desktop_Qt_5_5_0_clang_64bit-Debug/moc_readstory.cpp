/****************************************************************************
** Meta object code from reading C++ file 'readstory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../StoryTime_01/Read/readstory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'readstory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ReadStory_t {
    QByteArrayData data[6];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReadStory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReadStory_t qt_meta_stringdata_ReadStory = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ReadStory"
QT_MOC_LITERAL(1, 10, 25), // "on_BtnSelectOpt1_released"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 25), // "on_BtnSelectOpt2_released"
QT_MOC_LITERAL(4, 63, 35), // "on_scrollArea_windowIconTextC..."
QT_MOC_LITERAL(5, 99, 8) // "iconText"

    },
    "ReadStory\0on_BtnSelectOpt1_released\0"
    "\0on_BtnSelectOpt2_released\0"
    "on_scrollArea_windowIconTextChanged\0"
    "iconText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReadStory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void ReadStory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReadStory *_t = static_cast<ReadStory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_BtnSelectOpt1_released(); break;
        case 1: _t->on_BtnSelectOpt2_released(); break;
        case 2: _t->on_scrollArea_windowIconTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ReadStory::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ReadStory.data,
      qt_meta_data_ReadStory,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ReadStory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReadStory::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ReadStory.stringdata0))
        return static_cast<void*>(const_cast< ReadStory*>(this));
    return QDialog::qt_metacast(_clname);
}

int ReadStory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
