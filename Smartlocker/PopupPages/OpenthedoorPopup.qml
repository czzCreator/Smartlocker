//存物或取物的弹窗
import QtQuick 2.0
import QtQuick.Controls 2.1
import '../'
Popup
{
    //通过传参控制显示存物或取物的图片
    property  string lockerpngpath:'qrc:/resources/popuppage/Icon-cun.png'
    property  string zhinengguipngpath: 'qrc:/resources/popuppage/Icon-zhinenggui.png'

    id:opendoorPopup
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
        width: parent.width
        height: 10
        y:parent.height*7/18
        color:"transparent"
        Text {
            id: mytext
            anchors.centerIn: parent
            font.pixelSize: 8
            text: qsTr("正在打开柜门，请稍后...")
        }
    }

    Rectangle
    {
        id: buttonrect
        width: parent.width
        height: 20
        y:parent.height*8/18
       ChooseButton{
        width: parent.width/4
        height: parent.height
        buttonheight:parent.height
        anchors.centerIn: parent
        img_src: ""
        btn_txt: "模拟开门"
        rectcolor:"red"
        clr_enter:"red"
        clr_exit:"red"
        clr_click:"red"
        clr_release:"red"

        onClickedLeft: {
            console.log("点击了屏幕");
            bottompngurl="qrc:/resources/bottompanel/inputMessageCode.png"
            bottompngurl1="qrc:/resources/bottompanel/depositAndFetchStatus.png"
            bottompngurl2="qrc:/resources/bottompanel/closeTheDoor-red.png"
            if($choosetype=="cuwu")
            {
            opendoorpopup0.close();
            dooropenedpopup.open();
            }
            else if($choosetype=="quwu")
            {
                openeddoorpopup.close();
               dooropenedpopup2.open();
            }
            else if($choosetype=="linshicuwu")
            {
               opendoorpopup0.close();
               dooropenedpopup3.open();
            }
            else if($choosetype=="linshiquwu")
            {
                openeddoorpopup.close();
                dooropenedpopup4.open();
            }
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

