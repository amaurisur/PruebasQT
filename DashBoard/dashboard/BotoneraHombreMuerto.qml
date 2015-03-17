import QtQuick 2.0

Rectangle {
    width: 100
    height: 150
    id: botoneraHM
    objectName: "botoneraHM"

    signal blueClicked()
    signal redClicked()

    function light_redButton(accion){
        if (accion == "ON"){
            red.state = "stateRedOn"
            console.log("Entro en RED  light --> accion == ON ",accion)
        }
        else{
            red.state = "stateRedOff"
            console.log("Entro en RED light --> ELSE de accion == ON ",accion)
        }
        return (red.state + accion)
    }

    function light_blueButton(accion){
        if (accion == "ON"){
            blue.state = "stateBlueOn"
            console.log("Entro en BLUE light --> accion == ON ",accion)
        }
        else{
            blue.state = "stateBlueOff"
            console.log("Entro en BLUE light --> ELSE de accion == ON ",accion)
        }
        return (blue.state + accion)
    }

    Image {
        id: image1
        objectName: "image1"
        anchors.fill: parent
        source: "images/BKG_botonera_HM.png"

        Column {

            id: column1
            anchors.fill: parent
            Item {
                    id: red
                    objectName: "red"
                    y: 0
                    width: 100
                    height: 75

                    Image {
                        id: redOFF
                        x: 0
                        y: 0
                        width: 65
                        height: 65
                        anchors.horizontalCenter: parent.horizontalCenter
                        anchors.verticalCenter: parent.verticalCenter
                        source: "images/red.PNG"
                        opacity: 1
                    }

                    Image {
                        id: redON
                        x: 0
                        y: 0
                        width: 65
                        height: 65
                        anchors.horizontalCenter: parent.horizontalCenter
                        anchors.verticalCenter: parent.verticalCenter
                        source: "images/redON.png"
                        opacity: 0
                    }

                    states: [
                                State {
                                    name: "stateRedOn";

                                    PropertyChanges { target: redON;
                                                      opacity: 1
                                    }
                                },
                                State {
                                    name: "stateRedOff";
                                    PropertyChanges { target: redON;
                                                      opacity: 0
                                    }
                                }
                            ]

                    transitions:[
                            Transition {
                                from: "*"
                                to: "*"
                                NumberAnimation { properties: "opacity";
                                                  duration: 200
                                }
                            }
                    ]

//                    MouseArea {
//                        anchors.fill: parent
//                        onClicked: {
//                                    if (red.state == "stateRedOn")
//                                        red.state = "stateRedOff"
//                                        botoneraHM.blueClicked()
//                                    //else
//                                       // red.state = "stateRedOn"
//                                       // botoneraHM.blueClicked()
//                        }
//                    }
            }

            Item {
                id: blue
                y: 75
                width: 100
                height: 75
                transformOrigin: Item.Center
                anchors.horizontalCenter: parent.horizontalCenter

                Image {
                    id: blueOFF
                    x: 0
                    y: 0
                    width: 65
                    height: 65
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.verticalCenter: parent.verticalCenter
                    source: "images/blue.PNG"
                    opacity: 1
                }

                Image {
                    id: blueON
                    x: 0
                    y: 0
                    width: 65
                    height: 65
                    anchors.horizontalCenter: parent.horizontalCenter
                    anchors.verticalCenter: parent.verticalCenter
                    source: "images/blueON.png"
                    opacity: 0
                }

                states: [
                        State {
                            name: "stateBlueOn";
                            PropertyChanges { target: blueON;
                                              opacity: 1
                            }
                        },
                        State {
                            name: "stateBlueOff";
                            PropertyChanges { target: blueON;
                                              opacity: 0
                            }

                        }
                ]

                transitions:[
                        Transition {
                            from: "*"
                            to: "*"
                            NumberAnimation { properties: "opacity";
                                duration: 200
                            }
                        }
                ]

                MouseArea {
                    anchors.fill: parent
                    onClicked: {
                                botoneraHM.blueClicked()
//                                if (red.state == "stateRedOn"){
//                                    red.state = "stateRedOff"
//                                    blue.state = "stateBlueOff"
//                                    botoneraHM.blueClicked()
//                                }

                    }
                } // Mouse Area
//                MouseArea {
//                        anchors.fill: parent
//                        onClicked: {
//                                    if (blue.state == "stateBlueOn")
//                                        blue.state = "stateBlueOff"
//                                    else
//                                        blue.state = "stateBlueOn"
//                                        botoneraHM.blueClicked()
//                        }
//                }
           } // Item
       }
    }
}
