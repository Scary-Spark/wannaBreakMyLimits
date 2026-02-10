var randomNumber1 = Math.floor(Math.random() * 6 + 1);
var randomNumber2 = Math.floor(Math.random() * 6 + 1);

var imagePath1 = "./images/dice" + randomNumber1 + ".png";
var imagePath2 = "./images/dice" + randomNumber2 + ".png";

document.querySelector(".img1").setAttribute("src", imagePath1);
document.querySelector(".img2").setAttribute("src", imagePath2);

var winner = "";

if (randomNumber1 > randomNumber2) winner = "🚩Player 1 wins!";
else if (randomNumber1 < randomNumber2) winner = "Player 2 wins!🚩";
else winner = "Refresh me!";

document.querySelector("h1").textContent = winner;
