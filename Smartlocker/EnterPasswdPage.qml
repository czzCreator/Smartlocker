import QtQuick 2.7
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Controls.Styles 1.2
import QtQuick.Layouts 1.3
import "./TopPanel"
import "./BottomPanel"
import "./PopupPages"
Window {
    id: enterPasswdPage
    visible: true
    visibility:"Maximized"
    width: 382
    height: 500
    title: qsTr("咚咚智能柜1")
    //flags: Qt.FramelessWindowHint
    color: "white"

     property string number1:"—"
     property string number2:"—"
     property string number3:"—"
     property string number4:"—"
     property int numerfontsize: 40

    minimumWidth: 382
    minimumHeight: 500
    maximumWidth: 382
    maximumHeight: 500

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

    Rectangle
    {
        //anchors.centerIn: parent
        id: inforect
        width:  parent.width
        height: 10
        x: 0.17*parent.width
        y: 0.225*parent.height
        color:"transparent"
        Text {
            id: personInfo
            text: qsTr("请输入手机号后四位:")
            //anchors.centerIn: parent
            color: "black"  //设置Label字体颜色
            font.pixelSize: 12 //字体大小
            font.italic: true  //斜体

            //字体对其方式
            horizontalAlignment:Text.AlignHCente
            verticalAlignment:Text.AlignVCenter
        }

    }

    //手机尾号数字栏
    Rectangle{
        id:lastphonenumber
        x:0
        y:0.32*parent.height
        width: parent.width
        height: 0.03*parent.height
        color: "transparent"
            Text{
              id:number1_txt
              x:0.2*parent.width
              text: number1
              color: "black"  //设置Label字体颜色
              font.pixelSize: numerfontsize //字体大小
              font.weight: Font.Bold
            }
            Text{
              id:number2_txt
              x:0.35*parent.width
              text: number2
              color: "black"  //设置Label字体颜色
              font.pixelSize: numerfontsize //字体大小
              font.weight: Font.Bold
            }
            Text{
              id:number3_txt
              x:0.5*parent.width
              text: number3
              color: "black"  //设置Label字体颜色
              font.pixelSize: numerfontsize //字体大小
              font.weight: Font.Bold
            }
            Text{
              id:number4_txt
              x:0.65*parent.width
              text: number4
              color: "black"  //设置Label字体颜色
              font.pixelSize: numerfontsize //字体大小
              font.weight: Font.Bold
            }
    }

    //第一行 1，2，3 数字键
    Rectangle
    {
        x:0
        y:0.42*parent.height
        width:  parent.width
        height: 0.07*parent.height
        color: "transparent"
        Row{
            width: 0.67*parent.width
            height:0.94*parent.height
            //1
            anchors.centerIn: parent
            ChooseButton{
                x:0
                y:0
                width:  0.333*parent.width
                buttonheight: parent.height
                img_src: "qrc:/resources/keyboardimages/Icon button--1.png"
                img_src_click: "qrc:/resources/keyboardimages/Icon button-1.png"
                img_src_release: "qrc:/resources/keyboardimages/Icon button--1.png"
                btn_txt: ""
                onClickedLeft: {
                    console.log("点击了1");
                    setNumbers("1");
                }
            }

            //2
            ChooseButton{
                x:0.335*parent.width
                y:0
                width:  0.333*parent.width
                buttonheight: parent.height
                img_src: "qrc:/resources/keyboardimages/Icon button--2.png"
                img_src_click: "qrc:/resources/keyboardimages/Icon button-2.png"
                img_src_release: "qrc:/resources/keyboardimages/Icon button--2.png"
                btn_txt: ""
                onClickedLeft: {
                    console.log("点击了2");
                    setNumbers("2");
                }
            }
            //3
            ChooseButton{
                x:0.67*parent.width
                y:0
                width:  0.333*parent.width
                buttonheight: parent.height
                img_src: "qrc:/resources/keyboardimages/Icon button--3.png"
                img_src_click: "qrc:/resources/keyboardimages/Icon button-3.png"
                img_src_release: "qrc:/resources/keyboardimages/Icon button--3.png"
                btn_txt: ""
                onClickedLeft: {
                    console.log("点击了3");
                    setNumbers("3");

                }
            }
        }
    }

    //第二行 4，5，6 数字键
    Rectangle
    {
        x:0
        y:0.49*parent.height
        width:  parent.width
        height: 0.07*parent.height
        color: "transparent"
        Row{
            width: 0.67*parent.width
            height:0.94*parent.height
            //4
            anchors.centerIn: parent
            ChooseButton{
                x:0
                y:0
                width:  0.333*parent.width
                buttonheight: parent.height
                img_src: "qrc:/resources/keyboardimages/Icon button--4.png"
                img_src_click: "qrc:/resources/keyboardimages/Icon button-4.png"
                img_src_release: "qrc:/resources/keyboardimages/Icon button--4.png"
                btn_txt: ""
                onClickedLeft: {
                    console.log("点击了4");
                    setNumbers("4");

                }
            }

            //5
            ChooseButton{
                x:0.335*parent.width
                y:0
                width:  0.333*parent.width
                buttonheight: parent.height
                img_src: "qrc:/resources/keyboardimages/Icon button--5.png"
                img_src_click: "qrc:/resources/keyboardimages/Icon button-5.png"
                img_src_release: "qrc:/resources/keyboardimages/Icon button--5.png"
                btn_txt: ""
                onClickedLeft: {
                    console.log("点击了5");
                    setNumbers("5");

                }
            }
            //6
            ChooseButton{
                x:0.67*parent.width
                y:0
                width:  0.333*parent.width
                buttonheight: parent.height
                img_src: "qrc:/resources/keyboardimages/Icon button--6.png"
                img_src_click: "qrc:/resources/keyboardimages/Icon button-6.png"
                img_src_release: "qrc:/resources/keyboardimages/Icon button--6.png"
                btn_txt: ""
                onClickedLeft: {
                    console.log("点击了6");
                    setNumbers("6");

                }
            }
        }
    }

    //第三行 7，8，9 数字键
    Rectangle
    {
        x:0
        y:0.56*parent.height
        width:  parent.width
        height: 0.07*parent.height
        color: "transparent"
        Row{
            width: 0.67*parent.width
            height:0.94*parent.height
            //7
            anchors.centerIn: parent
            ChooseButton{
                x:0
                y:0
                width:  0.333*parent.width
                buttonheight: parent.height
                img_src: "qrc:/resources/keyboardimages/Icon button--7.png"
                img_src_click: "qrc:/resources/keyboardimages/Icon button-7.png"
                img_src_release: "qrc:/resources/keyboardimages/Icon button--7.png"
                btn_txt: ""
                onClickedLeft: {
                    console.log("点击了7");
                    setNumbers("7");
                }
            }

            //8
            ChooseButton{
                x:0.335*parent.width
                y:0
                width:  0.333*parent.width
                buttonheight: parent.height
                img_src: "qrc:/resources/keyboardimages/Icon button--8.png"
                img_src_click: "qrc:/resources/keyboardimages/Icon button-8.png"
                img_src_release: "qrc:/resources/keyboardimages/Icon button--8.png"
                btn_txt: ""
                onClickedLeft: {
                    console.log("点击了8");
                    setNumbers("8");

                }
            }
            //9
            ChooseButton{
                x:0.67*parent.width
                y:0
                width:  0.333*parent.width
                buttonheight: parent.height
                img_src: "qrc:/resources/keyboardimages/Icon button--9.png"
                img_src_click: "qrc:/resources/keyboardimages/Icon button-9.png"
                img_src_release: "qrc:/resources/keyboardimages/Icon button--9.png"
                btn_txt: ""
                onClickedLeft: {
                    console.log("点击了9");
                    setNumbers("9");

                }
            }
        }
    }

    //第四行 空白，0，删除 数字键
    Rectangle
    {
        x:0
        y:0.63*parent.height
        width:  parent.width
        height: 0.07*parent.height
        color: "transparent"
        Row{
            width: 0.67*parent.width
            height:0.94*parent.height
            //空白
            anchors.centerIn: parent
            Rectangle{
                x:0
                y:0
                width:  0.333*parent.width
                height: parent.height
                color:"transparent"
            }

            //0
            ChooseButton{
                x:0.335*parent.width
                y:0
                width:  0.333*parent.width
                buttonheight: parent.height
                img_src: "qrc:/resources/keyboardimages/Icon button--0.png"
                img_src_click: "qrc:/resources/keyboardimages/Icon button-0.png"
                img_src_release: "qrc:/resources/keyboardimages/Icon button--0.png"
                btn_txt: ""
                onClickedLeft: {
                    console.log("点击了0");
                    setNumbers("0");
                }
            }
            //退格
            Rectangle{
                x:0.67*parent.width
                y:0
                width:  0.333*parent.width
                height: parent.height
                color:"transparent"
            ChooseButton{
                anchors.centerIn: parent
                width:  0.5*parent.width
                buttonheight: 0.5*parent.height
                img_src: "qrc:/resources/keyboardimages/Icon button-tuige.png"
                btn_txt: ""
                onClickedLeft: {
                    console.log("点击了退格");
                    delnumber();
                }
            }
            }
        }
    }

    //输入
    function setNumbers(text)
    {
        if(number1=="—")
        {
            number1=text;
             return "1";
        }
        else if(number1!="—"&&number2=="—")
        {
            number2=text;
             return "2";
        }
        else if(number1!="—"&&number2!="—"&&number3=="—")
        {
            number3=text;
             return "3";
        }
        else if(number1!="—"&&number2!="—"&&number3!="—"&&number4=="—")
        {
            number4=text;
           bottompngurl="qrc:/resources/bottompanel/inputMessageCode.png"
           bottompngurl1="qrc:/resources/bottompanel/depositAndFetchStatus-red.png"
           bottompngurl2="qrc:/resources/bottompanel/closeTheDoor.png"
            if(number1=="1"&&number2=="2"&&number3=="3"&&number4=="4")
            {
                if($choosetype=="cuwu"||$choosetype=="linshicuwu")
                opendoorpopup0.open();
                else if($choosetype=="quwu"||$choosetype=="linshiquwu")
                    openeddoorpopup.open();
            }
            else
            {
                errinputlastphone.open();
                number1="—";
                number2="—"
                number3="—"
                number4="—"
            }

            return "4";
        }
        else return "finish";
    }

    //退格
    function delnumber()
    {
        if(number1!="—"&&number2!="—"&&number3!="—"&&number4!="—")
        {
                    number4="—";
                    return "4";
        }
        else if(number1!="—"&&number2!="—"&&number3!="—")
        {
            number3="—";
             return "3";
        }
        else if(number1!="—"&&number2!="—")
        {
            number2="—";
             return "2";
        }
        else if(number1!="—")
        {
            number1="—";
             return "1";
        }
        else
        {
            return "empty"
        }
    }


    //存物弹窗
    OpenthedoorPopup{
        id: opendoorpopup0
        x:parent.width/10
        y:parent.height/4
        width: parent.width*4/5
        height: parent.height*3/5
        lockerpngpath:'qrc:/resources/popuppage/Icon-cun.png'
        zhinengguipngpath: 'qrc:/resources/popuppage/Icon-zhinenggui.png'
    }

    //取物弹窗
    OpenthedoorPopup{
        id: openeddoorpopup
        x:parent.width/10
        y:parent.height/4
        width: parent.width*4/5
        height: parent.height*3/5
        lockerpngpath:'qrc:/resources/popuppage/Icon button-qu.png'
        zhinengguipngpath: 'qrc:/resources/popuppage/Icon-zhinenggui.png'
    }

    //存物开门完毕，提示关门
    DoorOpened
    {
        id: dooropenedpopup
        x:parent.width/10
        y:parent.height/4
        width: parent.width*4/5
        height: parent.height*3/5
        lockerpngpath:'qrc:/resources/popuppage/Icon-moyang.png'
        zhinengguipngpath: 'qrc:/resources/popuppage/Icon-zhinenggui.png'
        tips: "6号柜门已打开,存物后请及时关闭柜门"
        doornumber: "6"
    }

    //临时存物开门完毕，提示关门
    DoorOpened
    {
        id: dooropenedpopup3
        x:parent.width/10
        y:parent.height/4
        width: parent.width*4/5
        height: parent.height*3/5
        lockerpngpath:'qrc:/resources/popuppage/Icon-moyang.png'
        zhinengguipngpath: 'qrc:/resources/popuppage/Icon-zhinenggui.png'
        tips: "临时6号柜门已打开，存物后请及时关闭柜门\n(临时柜12小时内取走货物)"
        doornumber: "6"
    }

    //取物开门完毕，提示关门
    DoorOpened
    {
        id: dooropenedpopup2
        x:parent.width/10
        y:parent.height/4
        width: parent.width*4/5
        height: parent.height*3/5
        lockerpngpath:'qrc:/resources/popuppage/Icon button-qu1.png'
        zhinengguipngpath: 'qrc:/resources/popuppage/Icon-zhinenggui.png'
        tips: "5号柜门已打开，取物后请及时关闭柜门"
        doornumber: "5"
    }

    //临时取物开门完毕，提示关门
    DoorOpened
    {
        id: dooropenedpopup4
        x:parent.width/10
        y:parent.height/4
        width: parent.width*4/5
        height: parent.height*3/5
        lockerpngpath:'qrc:/resources/popuppage/Icon button-qu1.png'
        zhinengguipngpath: 'qrc:/resources/popuppage/Icon-zhinenggui.png'
        tips: "临时12号柜门已打开，取物后请及时关闭柜门"
        doornumber: "12"
    }


    //手机验证码验证错误
    ERRinputlastphonenumber
    {
        id: errinputlastphone
        x:parent.width/4
        y:parent.height/4
        width: parent.width/2
        height: parent.height/3
    }

    BottomPanel{
        y:parent.height-100
        width: parent.width
        inputMessageCodeColor:bottompngurl
        depositAndFetchStatusColor:bottompngurl1
        closeTheDoorColor:bottompngurl2
    }

}
