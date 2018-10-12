var UserMins=0.25; //The number of mintues the user specifies
var UserSecs=0; //The number of seconds the user specifies
var MyOriginalMins=0; // 0 mins
var MyOriginalSecs=0; // 0 secs
var MyNewSecs=0;
var MyNewMins=0;
var ComputedSecs=0;
var TotalMyOriginalSecs=(MyOriginalMins)*60+MyOriginalSecs;
var TotalUserSecs=((UserMins)*60)+UserSecs; //Total time in seconds the user specifies
var timex=TotalUserSecs*1000; //Total time in milliseconds the user specifies

counter();
setTimeout(counter,timex)

function counter(){
    while(ComputedSecs<TotalUserSecs){
        ComputedSecs=ComputedSecs+1;
    }
    }
   



var n = ComputedSecs.toString();

localStorage.setItem("timertime", "0");
localStorage.timertime = n;

document.getElementById("timer1").innerHTML=n;



//console.log("Original seconds is", TotalMyOriginalSecs);
//console.log("User Entered seconds is", TotalUserSecs);
console.log("Computed seconds is", n);