import QtQuick 2.0
import UiComponents 1.0

Rectangle {
    width : 200
    height: 200

    property alias title: backend.title

    BeConfigScreen {
        id: backend
    }

    Rectangle {
        width : parent.width
        height: parent.height
        color : "lightgray"

        Text {
            anchors.centerIn: parent
            text            : backend.title
            font.pointSize  : 20
        }
    }
}

