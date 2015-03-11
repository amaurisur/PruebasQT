import QtQuick 2.0

Rectangle {
    id: page
    width: 250;
    height: 500
    gradient: Gradient {
        GradientStop {
            position: 1
            color: "#54566c"
        }

        GradientStop {
            position: 0
            color: "#caccd0"
        }
    }

    Column {
        id: leftColum
        x: 0
        y: 150
        width: 125
        height: 350
        spacing: 10

        Image {
            id: blueLeft
            objectName: "blueL"
            width: 100
            height: 100
            anchors.horizontalCenter: parent.horizontalCenter
            source: "images/blue.PNG"
            signal blueLeftSignal(int state)
            MouseArea {
                anchors.fill: parent
                onClicked: blueLeft.blueLeftSignal(1)
                }
        }

        Image {
            id: redLeft
            width: 100
            height: 100
            anchors.horizontalCenter: parent.horizontalCenter
            source: "images/red.PNG"
        }

        Image {
            id: greenLeft
            width: 100
            height: 100
            anchors.horizontalCenter: parent.horizontalCenter
            source: "images/green.PNG"
        }
    }

    Column {
        id: rightColum
        x: 125
        y: 150
        width: 125
        height: 350
        spacing: 10


        Image {
            id: blueRight
            width: 100
            height: 100
            anchors.horizontalCenter: parent.horizontalCenter
            source: "images/blue.PNG"
        }

        Image {
            id: redRight
            width: 100
            height: 100
            anchors.horizontalCenter: parent.horizontalCenter
            source: "images/red.PNG"
        }

        Image {
            id: greenRight
            x: 0
            y: -200
            width: 100
            height: 100
            anchors.horizontalCenter: parent.horizontalCenter
            source: "images/green.PNG"
        }
    }

    Row {
        id: row1
        x: 0
        y: 0
        width: 250
        height: 150
        transformOrigin: Item.Center

        Text {
            id: labelHand
            text: qsTr("HAND INDICATOR")
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 12
        }
    }
}

