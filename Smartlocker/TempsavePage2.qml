//临时存物
//人脸识别成功结果页面
import QtQuick 2.7
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Controls.Styles 1.2
import QtQuick.Layouts 1.3
import "./TopPanel"
import "./BottomPanel"

Window {
    id: recogFacePage
    visible: true
    title: qsTr("咚咚智能柜1")
    color: "white"

    property string name: "张三"
    property string classname: "三年级三班"
    property string phonenumber :"17876564565"
    property string idcardnumner :"43078119900722546"

    //visibility:"Maximized"      //这个属性自动让窗口默认扩到  maximumWidth  maximumHeight 定义的最大
    minimumWidth: 382
    minimumHeight: 500
    //maximumWidth: 382
    //maximumHeight: 500

    //flags: $fullScreen ?Qt.FramelessWindowHint : Qt.Window

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

    //人脸图片
    Image {
        id: logoimage
        x:0.3*parent.width
        y:0.235*parent.height
        width: 0.39*parent.width
        height: 0.307*parent.height
        //fillMode: Image.PreserveAspectFit
        smooth: true
        source: 'qrc:/resources/photo.jpg'
    }

    //正确勾
    Image {
        id: rightimage
        x:0.45*parent.width
        y:0.35*parent.height
        width: 0.1*parent.width
        height: 0.075*parent.height
        smooth: true
        source: 'qrc:/resources/recogfacesuccess/Icon-yanzhengchenggong.png'
    }

    //个人信息
    Rectangle
    {
        //anchors.centerIn: parent
        id: inforect
        width:  parent.width
        height: 80
        y: 0.50*parent.height
        color:"transparent"
        //姓名/班级/手机号/身份证
        Text {
            id: personInfo
            text: qsTr("姓名:")+name+qsTr("\n")+qsTr("班级:")+classname+qsTr("\n")+qsTr("手机号:")+phonenumber+qsTr("\n")+qsTr("身份证号:")+idcardnumner
            anchors.centerIn: parent
            color: "black"  //设置Label字体颜色
            font.pixelSize: 8 //字体大小
            font.italic: true  //斜体
            //字体对其方式
            horizontalAlignment:Text.AlignHCente
            verticalAlignment:Text.AlignVCenter
        }

 }

    //按钮
    Rectangle
    {
        //anchors.centerIn: parent
        id: serviceButtonRect
        width:  parent.width
        height: 100
        y: 330
        color:"transparent"

        ChooseButton{
            y:10
            x:parent.width/3
            width: parent.width/3
            //clr_exit: Qt.rgba(255/255,0/255,0/255,0.8)
            img_src: "qrc:/resources/recogfacefail/Icon button-cunwu.png"
            //btn_txt: "个人信息正确"
            buttonheight:40
            onClickedLeft: {
                console.log("点击了屏幕");
                //opendoorpopup.open();
                pageLoader.source = "EnterPasswdPage.qml";
                }
        }
    }


    BottomPanel{
        y:parent.height-100
        width: parent.width
        validationInformationColor:"qrc:/resources/bottompanel/validationInformation-red.png"
    }

}
