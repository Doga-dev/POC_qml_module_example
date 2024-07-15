import QtQuick 2.0
import QtQuick.Controls 2.0

Button {
    id: control
    width         : 100
    height        : 50
    font.pixelSize: 16
    background    : Rectangle {
        radius: 8
        color : "blue"
    }
    contentItem   : Text {
        text               : control.text
        font.pixelSize     : 16
        color              : "white"
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment  : Text.AlignVCenter
    }
}

