import QtQuick 2.0
import QtQuick.Controls 2.15

Slider {
    id: control

    background: Rectangle {
        implicitWidth : 200
        implicitHeight: 4
        width         : control.availableWidth
        height        : implicitHeight
        radius        : 2
        color         : "lightblue"
    }
    handle    : Rectangle {
        x             : control.leftPadding + control.visualPosition * (control.availableWidth - width)
        y             : control.topPadding + control.availableHeight / 2 - height / 2
        implicitWidth : 26
        implicitHeight: 26
        radius        : 13
        color         : control.pressed ? "#f0f0f0" : "#f6f6f6"
        border.color  : "#bdbebf"
    }
}
