import QtQuick 1.0

Rectangle {
    id: button
    objectName: "button"
    width: 100
    height: 100
    //color: "#0000000"
    radius: 0
    gradient: Gradient {
        GradientStop {
            position: 0
            color: "#ffffff"
        }

        GradientStop {
            position: 1
            color: "#000000"
        }
    }
    border.color: "#000000"
    visible: true
    opacity: 1
    //antialiasing: true
    border.width: 0
    signal clicked()

    states: [
        State {
            name: "on";
            PropertyChanges { target: blueOn; y: 0; clip: true; anchors.horizontalCenterOffset: 0; sourceSize.height: 100; sourceSize.width: 100; source: "blueON.png";opacity: 1}
            PropertyChanges { target: blueOff; clip: true; opacity: 0}

            PropertyChanges {
                target: image1
                opacity: 1
            }

            PropertyChanges {
                target: button
                visible: false
            }

            PropertyChanges {
                target: mouseArea1
                clip: true
            }
        },
        State {
            name: "off";
            PropertyChanges { target: blueOn; opacity: 0}
            PropertyChanges { target: blueOff; opacity: 1}

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
    anchors.rightMargin: 0
            anchors.bottomMargin: 0
            anchors.leftMargin: 0
            anchors.topMargin: 0
            visible: true
            anchors.fill: parent
            onClicked: {

                if (button.state == "on")
                    button.state = "off"
                else
                    button.state = "on"

                button.clicked()
            }
}


Image {
    id: blueOn
    x: 50
    y: 0
    objectName: "blueOff"
    width: 100
    height: 100
    z: -1
    sourceSize.height: 100
    sourceSize.width: 100
    anchors.horizontalCenterOffset: 0
    visible: true
    fillMode: Image.PreserveAspectFit
    anchors.horizontalCenter: parent.horizontalCenter
    source: "blueON.png"
    opacity: 1
}

Image {
    id: blueOff
    x: 37
    y: 0
    objectName: "blueOff"
    width: 100
    height: 100
    anchors.horizontalCenterOffset: 0
    //antialiasing: true
    visible: true
    fillMode: Image.PreserveAspectFit
    anchors.horizontalCenter: parent.horizontalCenter
    source: "blue.PNG"
    opacity: 1
}

Image {
    id: image1
    x: -1
    y: -11
    source: "green.PNG"
    opacity: 0
}
}

