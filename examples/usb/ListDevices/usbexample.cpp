#include "usbexample.h"
#include <QDebug>

UsbExample::UsbExample(QObject *parent)
    : QObject(parent)
{
    auto list = m_usb.devices();

    qDebug() << list.size() << "devices present";
    qDebug() << list;

    exit(0);
}
