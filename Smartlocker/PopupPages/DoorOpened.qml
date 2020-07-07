//存物或取物门已打开弹窗
import QtQuick 2.0
import QtQuick.Controls 2.1
import '../'

Popup
{
    //通过传参控制显示存物或取物的图片
    property  string lockerpngpath:'qrc:/resources/popuppage/Icon-moyang.png'
    property  string zhinengguipngpath: 'qrc:/resources/popuppage/Icon-zhinenggui.png'
    property  string  doornumber: "1"
    property  string  tips: "存物后请及时关闭柜门"
    id:openeddoorPopup
    modal: true
    focus: true
    closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutsideParent

    Rectangle
    {
        width: parent.width
        height: parent.height/5
        y:parent.height/10
        color:"transparent"
        Image {
            id: savelockerimage
            width: parent.width/4
            height: parent.height
            anchors.centerIn: parent
            smooth: true
            source: lockerpngpath
        }
    }

    Rectangle
    {
        width: 40
        height: 40
        y:parent.height*1/10+8
        x:parent.width/2
        color:"transparent"
        Text {
            id: mytext
            anchors.centerIn: parent
            color: "white"
            font.pixelSize: 25
            text: doornumber
        }
    }

    Rectangle
    {
        width: parent.width
        height: 10
        y:parent.height*1/3
        color:"transparent"
        Text {
            id: mytext2
            anchors.centerIn: parent
            font.pixelSize: 8
            text: tips
        }
    }

    Rectangle
    {
        id: buttonrect
        width: parent.width
        height: 20
        y:parent.height*7/18
        color:"transparent"
       ChooseButton{
        width: parent.width/4
        height: 10
        buttonheight:20
        anchors.centerIn: parent
        img_src: "qrc:/resources/popuppage/Icon button-queding.png"
        btn_txt: ""

        onClickedLeft: {
            console.log("返回首页");
            pageLoader.source = "";
            }
    }
    }

    Rectangle
    {
        width: parent.width
        height: parent.height*1/2
        y:parent.height/2
        color:"transparent"
        Image {
            id: zhinengguiimage
            width: parent.width*4/9
            height: parent.height
            anchors.centerIn: parent
            smooth: true
            source: zhinengguipngpath
        }
    }
}

