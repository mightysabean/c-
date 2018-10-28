var button=document.getElementById("button1");
var count=0;
button.onclick=function(){

count+=1;
document.getElementById("domlabel").innerHTML=count;

}