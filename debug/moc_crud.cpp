/****************************************************************************
** Meta object code from reading C++ file 'crud.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../crud.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crud.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CRUD_t {
    QByteArrayData data[18];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CRUD_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CRUD_t qt_meta_stringdata_CRUD = {
    {
QT_MOC_LITERAL(0, 0, 4), // "CRUD"
QT_MOC_LITERAL(1, 5, 22), // "on_ajouter_emp_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 26), // "on_pushButton_supp_clicked"
QT_MOC_LITERAL(4, 56, 30), // "on_pushButton_modifier_clicked"
QT_MOC_LITERAL(5, 87, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 109, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 133, 28), // "on_pushButton_genpdf_clicked"
QT_MOC_LITERAL(8, 162, 11), // "generatePDF"
QT_MOC_LITERAL(9, 174, 8), // "filePath"
QT_MOC_LITERAL(10, 183, 17), // "on_ask_ai_clicked"
QT_MOC_LITERAL(11, 201, 12), // "simulateChat"
QT_MOC_LITERAL(12, 214, 11), // "chatContent"
QT_MOC_LITERAL(13, 226, 16), // "readTextFromFile"
QT_MOC_LITERAL(14, 243, 8), // "typeText"
QT_MOC_LITERAL(15, 252, 4), // "text"
QT_MOC_LITERAL(16, 257, 5), // "delay"
QT_MOC_LITERAL(17, 263, 15) // "on_stat_clicked"

    },
    "CRUD\0on_ajouter_emp_clicked\0\0"
    "on_pushButton_supp_clicked\0"
    "on_pushButton_modifier_clicked\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_genpdf_clicked\0generatePDF\0"
    "filePath\0on_ask_ai_clicked\0simulateChat\0"
    "chatContent\0readTextFromFile\0typeText\0"
    "text\0delay\0on_stat_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CRUD[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    1,   80,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    1,   84,    2, 0x08 /* Private */,
      13,    1,   87,    2, 0x08 /* Private */,
      14,    2,   90,    2, 0x08 /* Private */,
      17,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::QString, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   15,   16,
    QMetaType::Void,

       0        // eod
};

void CRUD::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CRUD *_t = static_cast<CRUD *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ajouter_emp_clicked(); break;
        case 1: _t->on_pushButton_supp_clicked(); break;
        case 2: _t->on_pushButton_modifier_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pushButton_genpdf_clicked(); break;
        case 6: { bool _r = _t->generatePDF((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->on_ask_ai_clicked(); break;
        case 8: _t->simulateChat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: { QString _r = _t->readTextFromFile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->typeText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->on_stat_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject CRUD::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CRUD.data,
      qt_meta_data_CRUD,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CRUD::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CRUD::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CRUD.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CRUD::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
