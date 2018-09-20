var Observable = require('FuseJS/Observable');
var qreader = require('Qreader');


var txt = Observable();

function goBack()
{
    console.log("goback");
    router.push("Home");
     
}

function load () {
	qreader.scan().then(function (res) {

    console.log(JSON.stringify(res));
    
		txt.value = res;
	});
}




module.exports = {
	goBack : goBack,
	load: load,
 	txt: txt
 // 	load2: load2,
 //  	image: image
};
