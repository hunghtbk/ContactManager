import QtQuick 2.0

Rectangle {
    id: root
    //  button property
    property alias text: label.text

    signal clicked()


    Text {
        id: label
        anchors.centerIn: parent

    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            root.clicked()
        }
    }

}
