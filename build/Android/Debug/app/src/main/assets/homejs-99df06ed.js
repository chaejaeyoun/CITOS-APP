var Observable = require("FuseJS/Observable");

function goBack()
{
    console.log("goback");
    router.push("Login");
     
}



function GetClicked(){
 	router.push("Getpage");	
    console.log("Move to Getpage");
   

}

function QRClicked(){
 	router.push("QRpage");	
    console.log("Move to QRpage");
   

}

function CardClicked(){
 	router.push("Cardpage");	
    console.log("Move to Cardpage");
   

}


module.exports = {
	goBack : goBack,
	GetClicked : GetClicked,
	QRClicked : QRClicked,
	CardClicked : CardClicked
};
