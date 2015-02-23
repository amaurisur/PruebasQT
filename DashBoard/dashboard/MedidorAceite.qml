import QtQuick 1.1

Rectangle {
    id: rectanguloAceite
    width: 152
    height: 102

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
            source: "images/pruebaAceite.svg"
        }

        Image {
            id: agujaImagen
            x: 69
            y: 19
            width: 4
            height: 59
            rotation: -65
            transformOrigin: Item.Bottom
            source: "images/agujaAceite.svg"
        }
    }
}

