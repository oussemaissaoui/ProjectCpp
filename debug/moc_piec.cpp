/****************************************************************************
** Meta object code from reading C++ file 'piec.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../piec.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'piec.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_piec_t {
    QByteArrayData data[13];
    char stringdata0[291];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_piec_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_piec_t qt_meta_stringdata_piec = {
    {
QT_MOC_LITERAL(0, 0, 4), // "piec"
QT_MOC_LITERAL(1, 5, 31), // "on_pushButton_Valider_2_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 31), // "on_pushButton_Supprimer_clicked"
QT_MOC_LITERAL(4, 70, 30), // "on_pushButton_Modifier_clicked"
QT_MOC_LITERAL(5, 101, 32), // "on_pushButton_Chercher_3_clicked"
QT_MOC_LITERAL(6, 134, 27), // "on_pushButton_Trier_clicked"
QT_MOC_LITERAL(7, 162, 34), // "on_pushButton_statistiques_cl..."
QT_MOC_LITERAL(8, 197, 25), // "on_pushButton_PDF_clicked"
QT_MOC_LITERAL(9, 223, 8), // "sendMail"
QT_MOC_LITERAL(10, 232, 8), // "mailSent"
QT_MOC_LITERAL(11, 241, 18), // "on_sendBtn_clicked"
QT_MOC_LITERAL(12, 260, 30) // "on_pushButton_quantite_clicked"

    },
    "piec\0on_pushButton_Valider_2_clicked\0"
    "\0on_pushButton_Supprimer_clicked\0"
    "on_pushButton_Modifier_clicked\0"
    "on_pushButton_Chercher_3_clicked\0"
    "on_pushButton_Trier_clicked\0"
    "on_pushButton_statistiques_clicked\0"
    "on_pushButton_PDF_clicked\0sendMail\0"
    "mailSent\0on_sendBtn_clicked\0"
    "on_pushButton_quantite_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_piec[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    1,   77,    2, 0x08 /* Private */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void piec::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        piec *_t = static_cast<piec *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_Valider_2_clicked(); break;
        case 1: _t->on_pushButton_Supprimer_clicked(); break;
        case 2: _t->on_pushButton_Modifier_clicked(); break;
        case 3: _t->on_pushButton_Chercher_3_clicked(); break;
        case 4: _t->on_pushButton_Trier_clicked(); break;
        case 5: _t->on_pushButton_statistiques_clicked(); break;
        case 6: _t->on_pushButton_PDF_clicked(); break;
        case 7: _t->sendMail(); break;
        case 8: _t->mailSent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->on_sendBtn_clicked(); break;
        case 10: _t->on_pushButton_quantite_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject piec::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_piec.data,
      qt_meta_data_piec,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *piec::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *piec::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_piec.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int piec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
