/*
    two ways of full input:
        1. window promt
        2. HTML textbox
*/

let fullName;
fullName = window.prompt("What's your fullName? ");

console.log(`fullname: ${fullName}`);

let username;
document.getElementById("mySubmit").onclick = function () {
  username = document.getElementById("myText").value;
  document.querySelector("h1").textContent = "Hello " + username;
};
