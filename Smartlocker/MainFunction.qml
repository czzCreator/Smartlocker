//程序锁屏主页面
import QtQuick 2.7
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Controls.Styles 1.2
import QtQuick.Layouts 1.3
import "./TopPanel"
import "./BottomPanel"

Window {
    id: mainfunctionWindow
    visible: true
    title: qsTr("咚咚智能柜1")
    color: "white"

    minimumWidth: 382
    minimumHeight: 500
    //maximumWidth: 382
    //maximumHeight: 500

    //flags: Qt.FramelessWindowHint
    //visibility:"Maximized"        //这个属性自动让窗口默认扩到  maximumWidth  maximumHeight 定义的最大
    width: $fullScreen? Screen.desktopAvailableWidth:382
    height: $fullScreen? Screen.desktopAvailableHeight:500

    //背景图片
    Image {
        id: backgroudimage
        width: parent.width
        height: parent.height
        y:20
        smooth: true
        source: 'qrc:/resources/mainscreenpage/BJ.png'
    }

    //顶层logo和工具栏
    TopPanel {
        id: topPanel
        width: parent.width
        height: 20
        seconds:200
    }

    //文字提示
    Rectangle
    {
        //anchors.centerIn: parent
        id: tipsrect
        width:  parent.width
        height: 70
        y: 80
        color:"transparent"
        //color: Qt.rgba(45/255,44/255,109/255,0.4)//(1)
        //opacity: 0.5//(2)
        //提示标签
        Text {
            id: tips
            text: qsTr("选择您需要的服务")
            y:5
            x:120
            anchors.centerIn: parent
            color: "gray"  //设置Label字体颜色
            font.pixelSize: 15 //字体大小
            font.italic: true  //斜体
            //字体对其方式
            horizontalAlignment:Text.AlignHCente
            verticalAlignment:Text.AlignVCenter
        }
    }

    //服务按钮
    Rectangle
    {
        //anchors.centerIn: parent
        id: serviceButtonRect
        width:  parent.width
        height: 180
        y: 200
        color:"transparent"
        //存物按钮
        ChooseButton{
            y:20
            x:parent.width/4
            width: parent.width/2
            //clr_exit: Qt.rgba(255/255,0/255,0/255,0.8)
            img_src: "qrc:/resources/mainfunctionpage/Icon-button cunwu.png"
            btn_txt: "剩余:13"

            onClickedLeft: {
                console.log("点击了屏幕");
                $choosetype="cuwu";
                pageLoader.source = "RecogTypeChosePage.qml";
                }
        }

        ChooseButton{
            y:100
            x:parent.width/4
            width: parent.width/2
            //clr_exit: Qt.rgba(255/255,0/255,0/255,0.8)
            img_src: "qrc:/resources/mainfunctionpage/Icon-button-quwu.png"
            btn_txt: "已使用:5"
            onClickedLeft: {
                console.log("点击了屏幕");
                console.log($choosetype);
                $choosetype="quwu";
                pageLoader.source = "RecogTypeChosePage.qml";
                }
        }
    }

    BottomPanel{
        y:parent.height-100
        width: parent.width
        depositAndFetchColor: "qrc:/resources/bottompanel/depositAndFetch-red.png"
    }

}
