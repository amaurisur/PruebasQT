import QtQuick 2.0

Rectangle {
    id: rectanguloAceite
    width: 152
    height: 102
    color: "#00000000"

    Item {
        id: itemAceite
        x: 0
        y: 0
        width: 150
        height: 100

        Image {
            id: aceiteImagen
            x: 0
            y: 0
            width: 150
            height: 100
            fillMode: Image.PreserveAspectFit
            source: "images/pruebaAceite.svg"
        }

        Image {
            id: agujaImagen
            objectName: "agujaImagen"
            x: 69
            y: 19
            width: 4
            height: 59
            scale: 1.1
            z: 0
            rotation: -65
            transformOrigin: Item.Bottom
            source: "images/agujaAceite.svg"
        }
    }
}

