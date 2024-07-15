import QtQuick 2.15
import QtQuick.Window 2.15
import UiComponents 1.0

// import "../plugins/UiComponents/components"  // uncomment to get UiComponents Types but execution failed with this line

Window {
    visible: true
    width  : 640
    height : 480
    title  : qsTr("Main Application")

    Column {
        anchors.centerIn: parent
        spacing         : 16

        ConfigurationScreenPanel {
            title: "Settings"
        }

        UiButton {
            text: "Click Me"

            onClicked: {
                text = "Clicked";
            }
        }
        CmpSlider {
            id: idSlider
        }

        UiText {
            text: "Styled Text " + String(Math.round(idSlider.value * 100))
        }
    }
}

