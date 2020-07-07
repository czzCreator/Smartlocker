//号码验证错误弹窗
import QtQuick 2.0
import QtQuick.Controls 2.1
import '../'
Popup
{
    id:lastphonenumberERRPopup
    modal: true
    focus: true
    closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutsideParent

    Rectangle
    {
        width: parent.width
        height: 10
        y:parent.height*7/18
        color:"transparent"
        Text {
            id: mytext
            anchors.centerIn: parent
            font.pixelSize: 8
            text: qsTr("手机后四位验证错误")
        }
    }

    Rectangle
    {
        id: buttonrect
        width: parent.width
        height: parent.height/5
        y:parent.height*10/18
        color:"transparent"
       ChooseButton{
        width: parent.width/2
        height: parent.height
        buttonheight:parent.height
        anchors.centerIn: parent
        img_src: "qrc:/resources/popuppage/Icon button-queding.png"
        btn_txt: ""

        onClickedLeft: {
            console.log("点击了屏幕");
            lastphonenumberERRPopup.close();
            }
    }
    }
}


