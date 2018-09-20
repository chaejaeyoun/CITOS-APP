var Observable = require('FuseJS/Observable');

function goBack()
{
  router.goBack();
  console.log("goback");    
}

var cardnum = Observable("");
var month = Observable("");
var year = Observable("");



function SaveCard(){
    console.log('save'); //Sign_in 함수가 호출되었는지 확인

	fetch('http://fc32d6d8.ngrok.io/users/signin',{
	            method: "POST",
	            headers: {
	            	"Content-type": "application/json"
	            },
	            body : JSON.stringify({
	            	cardnum : cardnum.value,
	            	month : month.value,
	            	year : year.value
	              })
	        }).then((res)=>{
	            // console.log( JSON.parse(res._bodyInit).documents[1].address_name )
	            console.log(JSON.stringify(res));
	            console.log( JSON.parse(res._bodyInit));

	            // this point
	            if( JSON.parse(res._bodyInit) == true){
	            	router.push("Home");
	            	console.log("Move to Home");
	            }
	            // JSON.parse(res._bodyInit).documents[1].address_name
	        }).catch((err)=>{
	            console.log(err);
	        });

}





module.exports = {
	goBack : goBack,
	SaveCard : SaveCard,
	cardnum : cardnum,
	month : month,
	year : year
};
