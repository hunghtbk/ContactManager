import QtQuick 2.0

Rectangle {
    id: root
    color: "linen"

    property alias nameText: nameInput.text
    property alias phoneText: phoneInput.text

    Row {
        anchors.fill: parent
        anchors.margins: 10
        spacing: 5

        Text {
            id: nameLabel
            width: parent.width * 0.1; height: 16
            anchors.verticalCenter: parent.verticalCenter
            text: "Name"
            font.pixelSize: 14
            font.bold: true
            color: "blue"
        }

        Rectangle {
            id: boxName
            width: parent.width * 0.4 - 10; height: 25
            border.width: 1
            anchors.verticalCenter: nameLabel.verticalCenter
            anchors.rightMargin: 5

            TextInput {
                id: nameInput
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 14
                KeyNavigation.tab: phoneInput
                focus: true
            }
        }

        Text {
            id: phoneLabel
            width: parent.width * 0.1; height: 16
            anchors.verticalCenter: parent.verticalCenter
            text: "Phone"
            font.pixelSize: 14
            font.bold: true
            color: "blue"
        }

        Rectangle {
            height: 25; width: boxName.width
            border.width: 1
            anchors.verticalCenter: phoneLabel.verticalCenter
            anchors.rightMargin: 5

            TextInput {
                id: phoneInput
                anchors.verticalCenter: parent.verticalCenter
                font.pixelSize: 14
                KeyNavigation.tab: nameInput

            }
        }
    }
}
