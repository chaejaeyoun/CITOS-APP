var Observable = require('FuseJS/Observable');

function goBack()
{
	router.push("Login");
    console.log("goback");
    
     
}


var saveid = Observable("");
var savepassword = Observable("");
var savesex = Observable("");
var saveage = Observable("");
var savename = Observable("");

function Save(){
    console.log('save'); //Sign_in 함수가 호출되었는지 확인

	fetch('http://7e27fb14.ngrok.io/users/signup',{
	            method: "POST",
	            headers: {
	            	"Content-type": "application/json"
	            },
	            body : JSON.stringify({
	            	newid : saveid.value,
	                newpw : savepassword.value,
	                newname : savename.value,
	                newage : saveage.value,
	                newsex : savesex.value
	                
	              })
	        }).then((res)=>{
	            // console.log( JSON.parse(res._bodyInit).documents[1].address_name )
	            console.log(JSON.stringify(res));
	            // console.log( JSON.parse(res._bodyInit));

	            // this point
	            // if( JSON.parse(res._bodyInit) == true){
	            // 	router.push("Login");
	            // 	console.log("Move to Login");
	            // }


	            // JSON.parse(res._bodyInit).documents[1].address_name
	        }).catch((err)=>{
	            console.log(err);
	        });




}






module.exports = {
	goBack : goBack,
	saveid : saveid,
	savepassword : savepassword,
	savesex : savesex,
	saveage : saveage,
	savename : savename,
	Save : Save
};
