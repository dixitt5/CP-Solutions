/*let myAge=19;
console.log(myAge);*/

/*let myAge=19;
let humanDogRatio=7;
let myDogAge=myAge*humanDogRatio;
console.log(myDogAge);*/

/*let bonusPoints=50;
console.log(bonusPoints);

bonusPoints+=50;
console.log(bonusPoints);

bonusPoints-=75;
console.log(bonusPoints);

bonusPoints+=45;
console.log(bonusPoints);*/

/*function calc()
{
    console.log(42);
}

calc();*/

/*let lap1=34;
let lap2=33;
let lap3=36;

function sum()
{
    console.log(lap1+lap2+lap3);
}

sum();*/

let countEl=document.getElementById("count-el");
let saveEl=document.getElementById("save-el");
//console.log(countEl);
let count=0;

function increment()
{
    count=count+1;
    countEl.textContent=count;
    //console.log(count);
}

function save()
{
    let countStr=count+" - "
    saveEl.textContent+=countStr
    countEl.textContent=0
    count=0
}

//let message="You have three new notifications"; 
