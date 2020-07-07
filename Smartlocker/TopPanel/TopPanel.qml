import QtQuick 2.0
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.0
import QtGraphicalEffects 1.0
import "../"
   Rectangle {
    id: topPanel
    property int seconds: 300
    //color: Qt.rgba(41/255,41/255,41/255,0.8)

    //顶部黑色背景
    Image {
        id: toppanelBg
        height: parent.height
        width: parent.width
        source: "qrc:/resources/toppanel/juxing.png"
    }

    //logo
    Image {
        id: appIcon
        height: parent.height-10
        x:10
        y:5
        width: 60
        source: "qrc:/resources/toppanel/logo.png"
    }


    //竖线图标
    Image {
        id: yaxisIcon
        height: parent.height-10
        x:80
        y:5
        width: 1
        source: "qrc:/resources/toppanel/yaxis.png"
    }

    //定位符号
    Image {
        id: locationIcon
        height: parent.height-10
        x:90
        y: 5
        width: 10
        source: "qrc:/resources/toppanel/location.png"
    }

    //定位地址
    Rectangle
    {
        id: locationrect
        width:  150
        height: topPanel.height-10
        x:98
        y: 5
        color:"transparent"
        //公司名称标签
        Text{
            anchors.centerIn: parent
            text: qsTr("湖南省长沙市岳麓区58众创")
            color: "white"  //设置Label字体颜色
            font.pixelSize: 10 //字体大小
            font.italic: true  //斜体
            //字体对其方式
            horizontalAlignment:Text.AlignHCente
            verticalAlignment:Text.AlignVCenter
        }
    }

    //倒计时
    Rectangle
    {
        id: countdownrect
        width:  50
        height: topPanel.height
        x:parent.width-100
        y: 0
        color:"transparent"
        //公司名称标签
        Text{
            id: countdownseconds
            anchors.centerIn: parent
            color: "white"  //设置Label字体颜色
            font.pixelSize: 10 //字体大小
            font.italic: true  //斜体
            //字体对其方式
            horizontalAlignment:Text.AlignHCente
            verticalAlignment:Text.AlignVCenter
        }
    }

    //返回主页
    Rectangle
    {
        id: backtomainpagerect
        width:  50
        height: topPanel.height
        x:parent.width-50
        y: 0
        color:"transparent"
        //返回首页
        MouseArea {
            anchors.fill: parent
            onClicked: {
                console.log("点击了屏幕");
                pageLoader.source = "MainScreen.qml";
                }
        }

        //返回图标
        Image {
            id: backIcon
            height: parent.height-10
            x:parent.width-55
            y: 5
            width: 10
            source: "qrc:/resources/toppanel/back.png"
        }

        //公司名称标签
        Text{
            anchors.centerIn: parent
            color: "white"  //设置Label字体颜色
            text: qsTr("返回\n主页")
            font.pixelSize: 7 //字体大小
            font.italic: true  //斜体
            //字体对其方式
            horizontalAlignment:Text.AlignHCente
            verticalAlignment:Text.AlignVCenter
        }
    }

    //倒计时秒数
    Timer {
        id: timer
        interval: 1000; running: true; repeat: true
        onTriggered:{
           seconds=seconds-1;
            countdownseconds.text=String(seconds)+"秒";
           if(seconds==0)
           {
               timer.stop();
               pageLoader.source = ""
           }
        }
    }

    Component.onCompleted: {
        timer.start();
    }

}



