/****************************************************************************
** Meta object code from reading C++ file 'base.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../base.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'base.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Base_t {
    QByteArrayData data[29];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Base_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Base_t qt_meta_stringdata_Base = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Base"
QT_MOC_LITERAL(1, 5, 8), // "inResult"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 9), // "bandwidth"
QT_MOC_LITERAL(4, 25, 5), // "error"
QT_MOC_LITERAL(5, 31, 14), // "inDisplayTable"
QT_MOC_LITERAL(6, 46, 6), // "Points"
QT_MOC_LITERAL(7, 53, 14), // "inDisplayGraph"
QT_MOC_LITERAL(8, 68, 10), // "inProgress"
QT_MOC_LITERAL(9, 79, 7), // "percent"
QT_MOC_LITERAL(10, 87, 6), // "doWork"
QT_MOC_LITERAL(11, 94, 8), // "outRadio"
QT_MOC_LITERAL(12, 103, 7), // "current"
QT_MOC_LITERAL(13, 111, 6), // "random"
QT_MOC_LITERAL(14, 118, 4), // "file"
QT_MOC_LITERAL(15, 123, 11), // "outFilename"
QT_MOC_LITERAL(16, 135, 8), // "filename"
QT_MOC_LITERAL(17, 144, 13), // "outPrevSelect"
QT_MOC_LITERAL(18, 158, 10), // "prevSelect"
QT_MOC_LITERAL(19, 169, 7), // "outData"
QT_MOC_LITERAL(20, 177, 15), // "componentNumber"
QT_MOC_LITERAL(21, 193, 11), // "selectCount"
QT_MOC_LITERAL(22, 205, 15), // "countGeneration"
QT_MOC_LITERAL(23, 221, 13), // "individNumber"
QT_MOC_LITERAL(24, 235, 10), // "geneNumber"
QT_MOC_LITERAL(25, 246, 3), // "mut"
QT_MOC_LITERAL(26, 250, 9), // "tournSize"
QT_MOC_LITERAL(27, 260, 10), // "leftSearch"
QT_MOC_LITERAL(28, 271, 11) // "rightSearch"

    },
    "Base\0inResult\0\0bandwidth\0error\0"
    "inDisplayTable\0Points\0inDisplayGraph\0"
    "inProgress\0percent\0doWork\0outRadio\0"
    "current\0random\0file\0outFilename\0"
    "filename\0outPrevSelect\0prevSelect\0"
    "outData\0componentNumber\0selectCount\0"
    "countGeneration\0individNumber\0geneNumber\0"
    "mut\0tournSize\0leftSearch\0rightSearch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Base[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    1,   64,    2, 0x06 /* Public */,
       7,    3,   67,    2, 0x06 /* Public */,
       8,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   77,    2, 0x0a /* Public */,
      11,    3,   78,    2, 0x0a /* Public */,
      15,    1,   85,    2, 0x0a /* Public */,
      17,    1,   88,    2, 0x0a /* Public */,
      19,    9,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 6,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   12,   13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, 0x80000000 | 6,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   20,   21,   22,   23,   24,   25,   26,   27,   28,

       0        // eod
};

void Base::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Base *_t = static_cast<Base *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->inResult((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->inDisplayTable((*reinterpret_cast< Points(*)>(_a[1]))); break;
        case 2: _t->inDisplayGraph((*reinterpret_cast< Points(*)>(_a[1])),(*reinterpret_cast< Points(*)>(_a[2])),(*reinterpret_cast< Points(*)>(_a[3]))); break;
        case 3: _t->inProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->doWork(); break;
        case 5: _t->outRadio((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->outFilename((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->outPrevSelect((*reinterpret_cast< Points(*)>(_a[1]))); break;
        case 8: _t->outData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])),(*reinterpret_cast< int(*)>(_a[9]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Base::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Base::inResult)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Base::*)(Points );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Base::inDisplayTable)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Base::*)(Points , Points , Points );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Base::inDisplayGraph)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Base::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Base::inProgress)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Base::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Base.data,
      qt_meta_data_Base,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Base::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Base::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Base.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Base::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Base::inResult(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Base::inDisplayTable(Points _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Base::inDisplayGraph(Points _t1, Points _t2, Points _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Base::inProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
