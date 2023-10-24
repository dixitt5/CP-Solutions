
let cards=[]
let sum=0
let hasBlackJack=false;
let isAlive=false;
let message=""

let messageEl=document.getElementById("message-el")
let sumEl=document.getElementById("sum-el")
let cardsEl=document.getElementById("cards-el")

let player={
    name: "Anushka",
    chips: 145
}

let playerEl=document.getElementById("player-el")
playerEl.textContent=player.name+":$"+player.chips

function getRandomCard()
{
    let value= 1+Math.floor(Math.random()*13)
    if (value===1)
    return 11
    if (value>10)
    return 10
    return value
}

function startGame()
{
    isAlive=true
    let firstCard=getRandomCard()
    let secondCard=getRandomCard()
    cards=[firstCard,secondCard]
    sum=firstCard+secondCard;
    renderGame()
}
function renderGame()
{
    cardsEl.textContent="Cards: "
    for (let i=0; i<cards.length; i++)
    cardsEl.textContent+=(cards[i]+" ")
    sumEl.textContent="Sum: "+sum
if (sum<=20)
message="Do you want to draw a new card?"
else if (sum===21)
{
    message="Wohoo! You've got blackjack!"
    hasBlackJack=true
}
else
{
    message= "You're out of the game!"
    isAlive=false
}
/*console.log(message)*/
messageEl.textContent=message
}

function newCard()
{
    if (isAlive===true && hasBlackJack===false)
    {
    console.log("Drawing a new card!")
    let card=getRandomCard()
    cards.push(card)
    sum+=card
    renderGame()
    }
}


/*console.log(hasBlackJack)
console.log(isAlive)*/