import QtQuick 2.0

Rectangle {
    id: button
    objectName: "button"
    width: 100
    height: 100
    color: "transparent"
    gradient: Gradient {
        GradientStop {
            id: gradientStop1
            position: 0
            color: "transparent"
        }

        GradientStop {
            position: 1
            color: "transparent"
        }
    }
    signal clicked()

    Image {
        id: blueOff
        fillMode: Image.PreserveAspectFit
        anchors.fill: parent
        objectName: "blueOff"
        source: "blue.PNG"
        opacity: 1
    }

    Image {
        id: blueOn
        anchors.fill: parent
        objectName: "blueOff"
        source: "blueON.png"
        opacity: 0
      }

    states: [
        State {
            name: "on";
            PropertyChanges { target: blueOn; source: "blueON.png"; anchors.rightMargin: 0; anchors.bottomMargin: 0; anchors.leftMargin: 0; anchors.topMargin: 0;opacity: 1}
            PropertyChanges { target: blueOff; anchors.topMargin: 0; opacity: 0}

            PropertyChanges {
                target: button
                color: "#000000"
                visible: true
                border.width: 0
                border.color: "transparent"
                z: 2147483646
            }

            PropertyChanges {
                target: gradientStop1
                color: "transparent"
            }

            PropertyChanges {
                target: mouseArea1
                width: 97
                anchors.rightMargin: 0
                anchors.bottomMargin: -2
                anchors.leftMargin: 0
                anchors.topMargin: -100
            }

            PropertyChanges {
                target: image1
                x: -1
                y: 0
                visible: true
                opacity: 1
            }
        },
        State {
            name: "off";
            PropertyChanges { target: blueOn; opacity: 0}
            PropertyChanges { target: blueOff; opacity: 1}

            PropertyChanges {
                target: mouseArea1
                anchors.topMargin: -100
            }

            PropertyChanges {
                target: button
                border.color: "#00000000"
            }

        }
    ]

    transitions:[
        Transition {
            from: "*"
            to: "*"
            NumberAnimation { properties: "opacity"; duration: 200  }
        }
    ]

    MouseArea {
        id: mouseArea1
        anchors.top: blueOn.bottom
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.topMargin: -100
        onClicked: {

            if (button.state == "on")
                button.state = "off"
            else
                button.state = "on"

            button.clicked()
        }
    }
}

