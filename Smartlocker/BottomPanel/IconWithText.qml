//底部流程导航的图标和文字组合
import QtQuick 2.0
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.0
import QtGraphicalEffects 1.0
Rectangle {
    property string title : " "
    property string pngurl :" "
    property color iconcolor : "gray"
    property double index: 1
    color:"transparent"
    //每步的图标
    //     Image {
    //         id: panelStepIcon
    //         x:index*parent.width/10+5
    //         y:parent.width/7
    //         height: 20
    //         width: 20
    //         source: pngurl
    //     }

    Image {
        id: sourceimage
        source: pngurl
        sourceSize: Qt.size(25, 25)
        x:index*parent.width/10+5
        y:parent.width/7
        smooth: true
        visible: false
    }

    Rectangle {
        id: mask
        x:index*parent.width/10+5
        y:parent.width/7
        height: 25
        width: 25
        radius: height/2
        color:"red"
        visible: false

    }

    OpacityMask {
        anchors.fill: sourceimage
        source: sourceimage
        maskSource: mask
    }

    //每步的文字
    Rectangle
    {
        id: panelSteprect
        width: parent.width/10
        height: 10
        x: index*parent.width/10+5
        y: parent.width/5+5
        color:"transparent"
        //公司名称标签
        Text{
            text: qsTr(title)
            color: "black"  //设置Label字体颜色
            font.pixelSize: 6 //字体大小
            //font.italic: true  //斜体
            //字体对其方式
            horizontalAlignment:Text.AlignHCente
            verticalAlignment:Text.AlignVCenter
        }
    }
}
