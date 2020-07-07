//个人信息错误
import QtQuick 2.0
import QtQuick.Controls 2.1
import '../'

Popup
{
    //通过传参控制显示存物或取物的图片
    property  string toppngpath:'qrc:/resources/personinfoerror/Icon-guanli.png'
    property  string buttonreleasepngpath: 'qrc:/resources/personinfoerror/Icon button-shouye.png'

    property  string  tips: "请联系管理中心13824555858修改个人信息"
    id:errpersoninfoPopup
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
        x:parent.width/3
        width: parent.width/3
        height: parent.height
        buttonheight:parent.height
        img_src: buttonreleasepngpath
        btn_txt: ""

        onClickedLeft: {
            console.log("返回首页");
            pageLoader.source = "";
            }
    }

    }

}

