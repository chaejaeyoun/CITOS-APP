var Observable = require('FuseJS/Observable');
var qreader = require('Qreader');
// var MainView = require('../MainView');

var Id = this.Parameter;



var txt = Observable();

function goBack()
{
    console.log("goback");
    router.push("Home");
     
}


    // var opts = ({
    //         	'username' : MainVew.userid.value,
    //             'menu' : password.value,
    //             'price' : password.value,
    //             'buytime' : password.value,
    //           });



function load () {
	//qr코드상에서 json형식을 string으로 변화하여 보내줘서 res는 string으로 옴
	qreader.scan().then(function (res) {

	//JSON.parse는 스트링을 제이슨으로 바꿔줌
	var tmp = JSON.parse(res);

    console.log(tmp.menu);
    console.log(tmp.price);
    console.log(Id._values);

		txt.value = res;

	var otp = ({
            	'userid' : Id._values,
            	'menu' : menu.value,
            	'price' : price.value,
            	'cardnum' : cardnum.value
            	
              });

	fetch('http://f2c85938.ngrok.io/card/add',{
	            method: "POST",
	            headers: {
	            	"Content-type": "application/json"
	            },
	            body : JSON.stringify(otp)
	        }).then((res)=>{
	            // console.log( JSON.parse(res._bodyInit).documents[1].address_name )
	            console.log(JSON.stringify(res));
	            // console.log( JSON.parse(res._bodyInit));

	            // // this point
	            // if( JSON.parse(res._bodyInit) == true){
	            // 	router.push("Home");
	            // 	console.log("Move to Home");
	            // }
	            
	            // JSON.parse(res._bodyInit).documents[1].address_name
	        }).catch((err)=>{
	            console.log(err);
	        });

}





module.exports = {
	goBack : goBack,
	load: load,
 	txt: txt,
 	Id : Id
 	// userid : MainView.userid
 // 	load2: load2,
 //  	image: image
};
