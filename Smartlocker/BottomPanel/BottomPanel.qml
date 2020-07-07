//底部流程导航
import QtQuick 2.0
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.0
import QtGraphicalEffects 1.0
import "../"

   Rectangle {
    id: bottomPanel
    property string phonenumer: "40005585"   //客服电话
    property string depositAndFetch : "存物/取物"         //存物取物文字
    property string depositAndFetchColor: "qrc:/resources/bottompanel/depositAndFetch.png"          //存物取物图标颜色
    property string validationInformation : "验证信息"    //验证信息文字
    property string validationInformationColor : "qrc:/resources/bottompanel/validationInformation.png"   //验证信息图标颜色
    property string inputMessageCode :"输入验证码"        //输入验证码
    property string inputMessageCodeColor : "qrc:/resources/bottompanel/inputMessageCode.png"       //输入验证码图标颜色
    property string depositAndFetchStatus: "存/取成功"    //存取成功
    property string depositAndFetchStatusColor : "qrc:/resources/bottompanel/depositAndFetchStatus.png"   //存取成功状态图标颜色
    property string closeTheDoor: "关闭柜门"              //关闭柜门
    property string closeTheDoorColor :"qrc:/resources/bottompanel/closeTheDoor.png"             //关闭柜门图标颜色

    color:"transparent"

    //二维码
    Image {
        id: qrcodeIcon
        height: 30
        x:0.4*parent.width/10+5
        y:20
        width: 30
        source: "qrc:/resources/bottompanel/qrcode.png"
    }

    //二维码旁边文字
    Rectangle
    {
        id: qrcoderect
        width:  80
        height: 10
        x:0.4*parent.width/10+13
        y: 35
        color:"transparent"
        //公司名称标签
        Text{
            anchors.centerIn: parent
            text: qsTr("微信扫一扫\n在线客服")
            color: "black"  //设置Label字体颜色
            font.pixelSize: 7 //字体大小
            //字体对其方式
            horizontalAlignment:Text.AlignHCente
            verticalAlignment:Text.AlignVCenter
        }
    }

    //客服电话
    Rectangle
    {
        id: cellphonerect
        width:  80
        height: 10
        x:parent.width-92
        y: 30
        color:"transparent"
        //公司名称标签
        Text{
            anchors.centerIn: parent
            text:phonenumer+qsTr("\n客服电话")
            color: "black"  //设置Label字体颜色
            font.pixelSize: 8 //字体大小
            //字体对其方式
            horizontalAlignment:Text.AlignHCente
            verticalAlignment:Text.AlignVCenter
        }
    }


    //存物取物ICON
    IconWithText{
        id: panelIcon1
        title:depositAndFetch
        pngurl:depositAndFetchColor
        width: parent.width
        height: 100
        index:0.4
    }

    //连接线
    Image {
        id: line1
        x:1.4*parent.width/10
        y: parent.width/8
        height: parent.width/10
        width: parent.width/10
        source: "qrc:/resources/bottompanel/line.png"
    }

    //验证信息ICON
    IconWithText{
        id: panelIcon2
        title:validationInformation
        pngurl:validationInformationColor
        width: parent.width
        height: 100
        index:2.4
    }

    //连接线
    Image {
        id: line2
        x:3.4*parent.width/10
        y: parent.width/8
        height: parent.width/10
        width: parent.width/10
        source: "qrc:/resources/bottompanel/line.png"
    }

    //输入验证码
    IconWithText{
        id: panelIcon3
        title:inputMessageCode
        pngurl:inputMessageCodeColor
        width: parent.width
        height: 100
        index:4.4
    }

    //连接线
    Image {
        id: line3
        x:5.4*parent.width/10
        y: parent.width/8
        height: parent.width/10
        width: parent.width/10
        source: "qrc:/resources/bottompanel/line.png"
    }

    //存/取成功
    IconWithText{
        id: panelIcon4
        title:depositAndFetchStatus
        pngurl:depositAndFetchStatusColor
        width: parent.width
        height: 100
        index:6.4
    }

    //连接线
    Image {
        id: line4
        x:7.4*parent.width/10
        y: parent.width/8
        height: parent.width/10
        width: parent.width/10
        source: "qrc:/resources/bottompanel/line.png"
    }

    //关闭柜门
    IconWithText{
        id: panelIcon5
        title:closeTheDoor
        pngurl:closeTheDoorColor
        width: parent.width
        height: 100
        index:8.4
    }
}







