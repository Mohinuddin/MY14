/****************************************************************************
** Meta object code from reading C++ file 'newdownloadmanager.h'
**
** Created: Wed Jan 4 16:46:22 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../newDownloadManager/newdownloadmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newdownloadmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_newDownloadManager[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   20,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_newDownloadManager[] = {
    "newDownloadManager\0\0url\0startDownload(QUrl&)\0"
};

const QMetaObject newDownloadManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_newDownloadManager,
      qt_meta_data_newDownloadManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &newDownloadManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *newDownloadManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *newDownloadManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_newDownloadManager))
        return static_cast<void*>(const_cast< newDownloadManager*>(this));
    return QObject::qt_metacast(_clname);
}

int newDownloadManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: startDownload((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
