//人脸识别失败的弹窗

import QtQuick 2.0
import QtQuick.Controls 2.1
import '../'

Popup
{
    //通过传参控制显示存物或取物的图片
    property  string toppngpath:'qrc:/resources/recogfacefail/Icon-shez.png'
    property  string leftbuttonreleasepngpath: 'qrc:/resources/recogfacefail/Icon button-shouye.png'
    property  string leftbuttonpresspngpath: 'qrc:/resources/recogfacefail/Icon button-shouye2.png'

property  string rightbuttonreleasepngpath: 'qrc:/resources/recogfacefail/Icon button-linshilikai.png'
property  string rightbuttonpresspngpath: 'qrc:/resources/recogfacefail/Icon button-linshilikai.png'

    property  string  tips: "识别失败,未识别到您的信息\n建议您使用临时存物"
    id:openeddoorPopup
    modal: true
    focus: true
    closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutsideParent

    Rectangle
    {
        width: parent.width
        height: parent.height*2/5
        y:parent.height/10
        color:"transparent"
        Image {
            id: savelockerimage
            width: parent.width/2
            height: parent.height
            anchors.centerIn: parent
            smooth: true
            source: toppngpath
        }
    }



    Rectangle
    {
        width: parent.width
        height: parent.height/10
        y:parent.height*3/5
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
        height: parent.height/4
        y:parent.height*4/5
        color:"transparent"
       ChooseButton{
        x:parent.width/8
        width: parent.width/4
        height: parent.height
        buttonheight:parent.height
        img_src: leftbuttonreleasepngpath
        btn_txt: ""


        onClickedLeft: {
            console.log("返回首页");
            pageLoader.source = "";
            }
    }
       ChooseButton{
        x:parent.width*5/8
        width: parent.width/4
        height: parent.height
        buttonheight:parent.height
        img_src: rightbuttonreleasepngpath
        btn_txt: ""

        onClickedLeft: {
            console.log("临时存物");
            $choosetype="linshicuwu";
            pageLoader.source = "../TempsavePage.qml";
            }
    }

    }

}

