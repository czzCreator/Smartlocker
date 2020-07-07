//程序锁屏主页面
import QtQuick 2.7
import QtQuick.Window 2.2
import QtQuick.Controls 2.0
import QtQuick.Controls.Styles 1.2
import QtQuick.Layouts 1.3
import Network 1.0

Window {
    id: mainscreenWindow
    visible: true
    title: qsTr("咚咚智能柜")
    color: "white"
    property string bottompngurl: "qrc:/resources/bottompanel/inputMessageCode-red.png"
    property string bottompngurl1: "qrc:/resources/bottompanel/depositAndFetchStatus.png"
    property string bottompngurl2: "qrc:/resources/bottompanel/closeTheDoor.png"
    property string $choosetype: "cunwu"   //1.cunwu 2.quwu 3.linshicunwu 4.linshiquwu

    //visibility:"Maximized"                //这个属性自动让窗口默认扩到  maximumWidth  maximumHeight 定义的最大
    minimumWidth: 382
    minimumHeight: 500
    //maximumWidth: 382
    //maximumHeight: 500

    //flags: $fullScreen ?Qt.FramelessWindowHint : Qt.Window

    width: $fullScreen? Screen.desktopAvailableWidth:382
    height: $fullScreen? Screen.desktopAvailableHeight:500

    //覆盖大的方框，触发全屏点击事件跳转到功能页面
    Rectangle{
        id: tabrect
        width:  parent.width
        height: parent.height
        color:"transparent"   //透明背景色
        Loader { id: pageLoader }
        //全屏点击跳转到下一个页面
        MouseArea {
            anchors.fill: parent
            onClicked: {
                console.log("点击了屏幕");
                pageLoader.source = "MainFunction.qml"
                }
        }

        //背景图片
        Image {
            id: backgroudimage
            width: parent.width
            height: parent.height
            smooth: true
            source: 'qrc:/resources/mainscreenpage/bg.png'
        }

        //logo图片
        Image {
            id: logoimage
            x:0.05*parent.width   //根据设计图比例计算得出
            y:0.03*parent.height
            width: 0.17*parent.width
            height: 0.03*parent.height
            //fillMode: Image.PreserveAspectFit
            smooth: true
            source: 'qrc:/resources/mainscreenpage/logo.png'
        }

        //阴影框图片
        Image {
            id: shadowimage
            width:  parent.width
            height: 0.14*parent.height
            x: 0
            y: 0.7*parent.height
            smooth: true
            source: 'qrc:/resources/mainscreenpage/fangkuang.png'
        }

        //日期和时间的框
        Rectangle
        {
            //anchors.centerIn: parent
            id: textrect
            width:  parent.width
            height: 0.2*parent.height
            x: 0
            y: 0.69*parent.height
            color:"transparent"
            //color: Qt.rgba(45/255,44/255,109/255,0.4)// 阴影框
            //opacity: 0.5//(2)
            //日期标签
            Text {
                id: date
                text: qsTr(" 月  日\n\n")
                anchors.centerIn: parent
                color: "white"  //设置Label字体颜色
                font.pixelSize: 32 //字体大小
                font.italic: true  //斜体
                //字体对其方式
                horizontalAlignment:Text.AlignHCente
                verticalAlignment:Text.AlignVCenter
            }
        }

        //时间标签
        Rectangle{
            id: textrect2
            width:  parent.width
            height: 0.2*parent.height
            x: 0
            y: 0.7*parent.height
            color:"transparent"
            Text {
                id: time
                text: qsTr("00:00 星期")
                anchors.centerIn: parent
                color: "white"  //设置Label字体颜色
                font.pixelSize: 13 //字体大小
                font.italic: true  //斜体
                //字体对其方式
                horizontalAlignment:Text.AlignHCente
                verticalAlignment:Text.AlignVCenter
            }
        }


        //公司名称
        Rectangle
        {
            //anchors.centerIn: parent
            id: companyrect
            width:  parent.width
            height: 0.015*parent.height
            y: 0.945*parent.height
            //opacity: 0.1
            color:"transparent"
            property var dataObject: ({});
            //公司名称标签
            Text{

                text: qsTr("咕 咚 网 络（北 京）有 限 公 司")
                anchors.centerIn: parent
                color: "white"  //设置Label字体颜色
                font.pixelSize: 12 //字体大小
                font.italic: true  //斜体
                //字体对其方式
                horizontalAlignment:Text.AlignHCente
                verticalAlignment:Text.AlignVCenter
            }
        }
    }

    Timer {
        id: timer
        interval: 1000; running: true; repeat: true
        onTriggered:{
            date.text = Qt.formatDateTime(new Date(), "MM月dd日\n\n")
            time.text = getTimeInterval()+Qt.formatDateTime(new Date(), "hh:mm:ss  dddd")
        }
    }


    Component.onCompleted: {
        timer.start();
        //接口1. 根据设备id登录获取新的人员信息
        login();

    }

    //获取时间段，上午，中午，下午
    function getTimeInterval()
    {
        var d = new Date();
        var hours = d.getHours();
        var tieminterval;
        if(hours>=5&&hours<8) tieminterval="早上 ";
        else if(hours>=8&&hours<11) tieminterval="上午 ";
        else if(hours>=11&&hours<13) tieminterval="中午 ";
        else if(hours>=13&&hours<18) tieminterval="下午 ";
        else if(hours>=18&&hours<24) tieminterval="晚上 ";
        else if(hours>=0&&hours<5) tieminterval="深夜 ";
        return tieminterval;
    }

    function login(){
        http_get("/api/user/check/","13307422738",function(jsonObj){
            console.log(JSON.stringify(jsonObj));
            //companyrect.searchsObject = jsonObj;
        });
        var data = {"phone_num": "13307422738","password": "4236687"};
        http_post("/api/user/login", data, function(jsonObj){
            console.log(JSON.stringify(jsonObj));
            //companyrect.searchsObject = jsonObj;
            console.log(JSON.stringify(jsonObj['data']));

            //获取的数据存到sqllite
        });
    }


    //post请求封装函数,url 为接口地址api, data 为json 参数 ,callable为回调
    function http_post(urlapi,data, callable) {
        var xhr = HttpRequestFactory.create();
        xhr.finished.connect(function(){
            xhr.finished.disconnect(arguments.callee);
            console.log(xhr.responseText);
            callable(JSON.parse(xhr.responseText))
        });

        xhr.error.connect(function(){
            xhr.error.disconnect(arguments.callee);
            console.log(xhr.statusText)
        });

        xhr.timeout.connect(function(){
            xhr.timeout.disconnect(arguments.callee);
            console.log("time out")
        });

        xhr.open("POST","http://106.12.144.158"+urlapi);
        xhr.setTimeout(30 * 1000);      // 3 s
        xhr.setRequestHeader("Content-Type", "application/json");
        xhr.setRequestHeader("Referer", "http://www.baidu.com");
        xhr.send(JSON.stringify(data));
        //xhr.send(urlQuery(data));   //具体看后台的解析方式
    }

    //get请求封装函数,urlapi 为接口api地址， args为get请求参数?id=xxx ,callable为回调函数
    function http_get(urlapi,args, callable) {
        callable = callable || function(resultObject){
            console.log(JSON.stringify(resultObject));
        }
        var url = "http://106.12.144.158" + urlapi +args;

        var xhr = HttpRequestFactory.create();
        xhr.finished.connect(function(){
            xhr.finished.disconnect(arguments.callee);
            console.log(xhr.responseText);
            callable(JSON.parse(xhr.responseText));
        });

        xhr.error.connect(function(){
            xhr.error.disconnect(arguments.callee);
            console.log(xhr.statusText)
        });

        xhr.timeout.connect(function(){
            xhr.timeout.disconnect(arguments.callee);
            console.log("time out")
        });

        xhr.setRequestHeader("Content-Type", "application/json");
        xhr.setRequestHeader("Referer", "http://www.baidu.com");
        xhr.setTimeout(30 * 1000);      // 3 s
        xhr.open("GET", url);
        xhr.send();
    }

    function urlQuery(jsonObject) {
        var query = "";
        var i = 0;
        for(var iter in jsonObject) {

            if(i>0) {
                query += "&";
            }
            query += iter +"=" + encodeURI(jsonObject[iter]);
            i++;
        }
        console.log("url query:", query);
        return query;
    }
}
