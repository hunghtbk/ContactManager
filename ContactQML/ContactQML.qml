import QtQuick 2.6
import QtQuick.Window 2.2

//import contact 1.0
//import data 1.0


Window {
    visible: true
    width: 500
    height: 270

    title: "Contact"


    //background
    Image {
        id: backgroundImage
        width: parent.width; height: parent.height
        source: "Icon/contact-background.jpg"

    }

    ConfigContact {
        id: informationContact
        anchors.right: parent.right
        anchors.left: parent.left
        anchors.top: view.bottom
        width: view.width; height: 40
        opacity: 0
    }

//    Save Button
    Button {
        id: saveButton
        width: parent.width / 5; height: 20
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: informationContact.bottom
        anchors.margins: 5
        text: "Save"
        color: "lightsteelblue"
        opacity: informationContact.opacity
        onClicked: {

            listModel.editContact(view.currentIndex, informationContact.nameText, informationContact.phoneText)
            informationContact.opacity = 0

        }

    }

    ListView {
        id: view
        width: parent.width
        anchors.fill: parent

        anchors.topMargin: 5
        anchors.bottomMargin: informationContact.opacity ? 70 : 0
        clip: true
        model: listModel
        delegate: contactDelegate

        highlight: highlightComponent
        highlightRangeMode: ListView.ApplyRange
        spacing: 5
        focus: true

        // animation when remove
        remove:
            Transition {
            NumberAnimation {
                properties: "x"; to: view.width
                duration: 250; easing.type: Easing.InBounce
                }
            }

        displaced:
            Transition {
                SequentialAnimation {
                    PauseAnimation { duration: 250 }
                    NumberAnimation { properties: "y"; duration: 75 }
                }
            }

    }

    //highlight item
    Component {
        id: highlightComponent

        Rectangle {
            width: view.width
            height: 60
            radius: 10
            color: "green"
        }
    }

    Component {
        id: contactDelegate

        Rectangle {
            id: wrapper
            width: ListView.view.width
            height: 60
            radius: 10
            color: "white"
            border.color: "grey"
            opacity:  0.9


            Text {
                id: namePerson
                anchors.left: parent.left
                anchors.leftMargin: 20
                y: 10
                font.pixelSize: 16
                text: name
                font.bold: true
                color: "black"
            }

            Text {
                id: phonePerson
                anchors.left: parent.left
                anchors.leftMargin: 20
                y: 35
                font.pixelSize: 12
                text: phone
                font.bold: false
                color: "black"
            }

            //delete button
            Image {
                id: deleteButton
                width: parent.height * 0.6; height: parent.height * 0.6
                anchors.verticalCenter: parent.verticalCenter
                anchors.right: parent.right
                anchors.rightMargin: 5
                source: "Icon/delete_icon.png"

                MouseArea {
                    id: deleteButtonArea
                    anchors.fill: parent
                    onClicked: {

                        listModel.removeContact(index)
                    }
                }

            }

            //edit button
            Image {
                id: editButton
                width: parent.height * 0.6; height: parent.height * 0.6
                anchors.verticalCenter: parent.verticalCenter
                anchors.right: deleteButton.left
                anchors.rightMargin: 5
                source: "Icon/eidt_icon.png"

                MouseArea {
                    id: editButtonArea
                    anchors.fill: parent

                    onClicked: {
                        display()
                    }
                }
            }

            //display info of selected contact to edit
            function display() {
                view.currentIndex = index
                view.focus = true
                informationContact.opacity = 1
                informationContact.nameText = listModel.getName(index)
                informationContact.phoneText = listModel.getPhone(index)

            }

            MouseArea {
                anchors.left: parent.left
                anchors.right: editButton.left
                anchors.top: parent.top
                anchors.bottom: parent.bottom

                // click to view item
                onClicked: {
                    view.currentIndex = index
                    view.focus = true
                }
            }        
        }
    }
}
