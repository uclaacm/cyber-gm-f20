function hit(){
    alert("world_wide_weebs")
}

function miss(){
    alert("Go train your aim then come back. https://aiming.pro/dashboard")
}
function hitOrMiss(){
    let randomNumber = Math.floor((Math.random() * 100) + 1);
    console.log(randomNumber);
    if(randomNumber ==  42){
        hit()
    }
    else{
        miss()
    }
}