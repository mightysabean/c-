//alert("I found the truth");

var i=0;
function myfunction(){

        i++;

}
setTimeout(myfunction,2000);

function callback1(i,setTimeout){

    document.getElementById("demo").innerHTML=i;    

}