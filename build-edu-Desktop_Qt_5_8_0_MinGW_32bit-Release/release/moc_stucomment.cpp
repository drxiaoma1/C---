/****************************************************************************
** Meta object code from reading C++ file 'stucomment.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../edu/stucomment.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stucomment.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_stucomment_t {
    QByteArrayData data[5];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_stucomment_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_stucomment_t qt_meta_stringdata_stucomment = {
    {
QT_MOC_LITERAL(0, 0, 10), // "stucomment"
QT_MOC_LITERAL(1, 11, 6), // "goback"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 18), // "on_release_clicked"
QT_MOC_LITERAL(4, 38, 17) // "on_goback_clicked"

    },
    "stucomment\0goback\0\0on_release_clicked\0"
    "on_goback_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_stucomment[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Int,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void stucomment::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        stucomment *_t = static_cast<stucomment *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->goback();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->on_release_clicked(); break;
        case 2: _t->on_goback_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (stucomment::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&stucomment::goback)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject stucomment::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_stucomment.data,
      qt_meta_data_stucomment,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *stucomment::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *stucomment::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_stucomment.stringdata0))
        return static_cast<void*>(const_cast< stucomment*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int stucomment::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
int stucomment::goback()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
