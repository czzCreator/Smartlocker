import QtQuick 2.0

Rectangle {
    id: rec

    property string img_src: ""
    property string img_src_click: ""
    property string img_src_release: ""
    property alias btn_txt: button.text

    property color clr_enter: "#dcdcdc"
    property color clr_exit: "#ffffff"
    property color clr_click: "#aba9b2"
    property color clr_release: "#ffffff"
    property color rectcolor: "transparent"
    property int  buttonheight: 50

    //自定义点击信号
    signal clickedLeft()
    signal clickedRight()
    signal release()

    width: parent.width
    height: buttonheight
    radius: 10
    color:rectcolor
    Image {
        id: icon
        width:parent.width-4
        height: buttonheight-4
        source: img_src
        clip: true
    }

    Text {
        id: button
        text: qsTr(btn_txt)
        color: "white"
        x:parent.width-40
        y:5
        font.pixelSize: 8
        font.bold: true
        font.pointSize: 14
    }

    MouseArea {
        id: mouseArea
        anchors.fill: parent
        hoverEnabled: true

        //接受左键和右键输入
        acceptedButtons: Qt.LeftButton | Qt.RightButton
        onClicked: {
            //左键点击
            if (mouse.button === Qt.LeftButton)
            {
                parent.clickedLeft()
//                console.log(button.text + " Left button click")
            }
            else if(mouse.button === Qt.RightButton)
            {
                parent.clickedRight()
//                console.log(button.text + " Right button click")
            }
        }

        //按下
        onPressed: {
            color = clr_click
            if(img_src_click!="")
            {
            img_src=img_src_click
            }
        }

        //释放
        onReleased: {
            color = clr_enter
            if(img_src_release!="")
            {
            img_src=img_src_release
            }
            parent.release()
            console.log("Release")
        }

        //指针进入
        onEntered: {
            color = clr_enter
//            console.log(button.text + " mouse entered")
        }

        //指针退出
        onExited: {
            color = clr_exit
//            console.log(button.text + " mouse exited")
        }
    }
}
