//人脸识别界面
//认证方式选择页面  暂时只有人脸
import QtQuick 2.7
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Controls.Styles 1.2
import QtQuick.Layouts 1.3
import "./TopPanel"
import "./BottomPanel"
import "./PopupPages"
Window {
    id: recogFacePage
    visible: true
    title: qsTr("咚咚智能柜1")
    color: "white"

    minimumWidth: 382
    minimumHeight: 500
    //maximumWidth: 382
    //maximumHeight: 500

    //flags: Qt.FramelessWindowHint
    //visibility:"Maximized"
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

    //人脸识别中图片
    Image {
        id: facerecogimage
        width:  parent.width*2/3
        height: parent.height*5/8
        y: 80
        x:parent.width/6
        smooth: true
        source: 'qrc:/resources/recogfacesuccess/Icon-juxing.png'
    }

    //内部圆圈图
    Image {
        id: innercircleimage
        width:  parent.width*2/3-24
        height: facerecogimage.height*13/20+5
        y: 80+parent.height*1/16
        x:parent.width/6+12
        smooth: true
        source: 'qrc:/resources/recogfacesuccess/Icon-quanquan.png'
    }

    //内部扫描条形图
    Image {
        id: innerrectimage
        width:  parent.width*1/3
        height: 30
        y: 120+parent.height*1/16
        x:parent.width/3
        //anchors.centerIn: parent
        smooth: true
        source: 'qrc:/resources/recogfacesuccess/Icon-zhengzaisaomiao.png'
    }

    //文字提示
    Rectangle
    {
        //anchors.centerIn: parent
        id: tipsrect
        width:  parent.width
        height: 70
        y: 60
        color:"transparent"
        //提示标签
        Text {
            id: tips
            text: qsTr("人脸识别中")
            y:5
            x:120
            anchors.centerIn: parent
            color: "white"  //设置Label字体颜色
            font.pixelSize: 15 //字体大小
            font.italic: true  //斜体
            //字体对其方式
            horizontalAlignment:Text.AlignHCente
            verticalAlignment:Text.AlignVCenter
        }
    }

    //文字提示
    Rectangle
    {
        //anchors.centerIn: parent
        id: tipsrect2
        width:  parent.width
        height: 70
        y: 70+parent.height*1/2
        color:"transparent"
        //提示标签
        Text {
            id: tips2
            text: qsTr("请正脸面对摄像头")
            y:5
            x:120
            anchors.centerIn: parent
            color: "white"  //设置Label字体颜色
            font.pixelSize: 10 //字体大小
            font.italic: true  //斜体
            //字体对其方式
            horizontalAlignment:Text.AlignHCente
            verticalAlignment:Text.AlignVCenter
        }
    }

    //五个状态点
    Rectangle
    {
        //anchors.centerIn: parent
        id: fivecirclerect
        width:  parent.width
        height: 30
        y: 110+parent.height*1/2
        color:"transparent"
        Row{
        anchors.centerIn: parent
        Image {
            width: 5
            height: 5
            source: 'qrc:/resources/recogfacesuccess/Icon-zhuangtai2.png'
        }
        Text {
            text: qsTr("    ")
        }
        Image {
            width: 5
            height: 5
            source: 'qrc:/resources/recogfacesuccess/Icon-zhuangtai2.png'
        }
        Text {
            text: qsTr("    ")
        }
        Image {
            width: 7
            height: 7
            source: 'qrc:/resources/recogfacesuccess/Icon-zhuangtai.png'
        }
        Text {
            text: qsTr("    ")
        }
        Image {
            width: 5
            height: 5
            source: 'qrc:/resources/recogfacesuccess/Icon-zhuangtai2.png'
        }
        Text {
            text: qsTr("    ")
        }
        Image {
            width: 5
            height: 5
            source: 'qrc:/resources/recogfacesuccess/Icon-zhuangtai2.png'
        }
        }
    }


    //按钮
    Rectangle
    {
        //anchors.centerIn: parent
        id: serviceButtonRect
        width:  parent.width
        height: 20
        y: parent.height-105
        color:"transparent"
        //模拟人脸识别结果按钮
        ChooseButton{

            x:parent.width/4
            width: parent.width/5
            buttonheight:parent.height
            img_src: ""
            btn_txt: "人脸错误"
            rectcolor:"red"
            clr_enter:"red"
            clr_exit:"red"
            clr_click:"red"
            clr_release:"red"

            onClickedLeft: {
                console.log("点击了屏幕");
                if($choosetype=="cuwu")
                {
                facerecogfailpopup.open();
                }
                else
                {
                  facerecogquwufailpopup.open();
                }
                }
        }

        ChooseButton{

            x:parent.width/2
            width: parent.width/5
            buttonheight:parent.height
            img_src: ""
            btn_txt: "人脸正确"
            rectcolor:"red"
            clr_enter:"red"
            clr_exit:"red"
            clr_click:"red"
            clr_release:"red"

            onClickedLeft: {
                console.log("点击了屏幕");
                console.log($choosetype);
                if($choosetype=="cuwu")
                pageLoader.source = "RecogResultPage.qml";
                else if($choosetype=="quwu")
                   pageLoader.source = "RecogResultQuwuPage.qml";
                }
        }
    }

    //人脸识别失败窗口
    ERRfacerecogFail
    {
        id: facerecogfailpopup
        x:parent.width/10
        y:parent.height/4
        width: parent.width*4/5
        height: parent.height/4
    }

    //取物人脸识别窗口
    ERRfacerecogquwufail
    {
        id: facerecogquwufailpopup
        x:parent.width/10
        y:parent.height/4
        width: parent.width*4/5
        height: parent.height/4
    }

    BottomPanel{
        y:parent.height-100
        width: parent.width
        validationInformationColor:"qrc:/resources/bottompanel/validationInformation-red.png"
    }

}
