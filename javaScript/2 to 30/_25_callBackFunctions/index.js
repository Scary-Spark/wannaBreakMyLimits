/*
    callback function ia function that is passed as an argument
    to another function

    it is used to handle asynchronous operations:
        1. reading a file
        2. network requests
        3. interacting with databases

    "Hey, when you're done call this function"
*/

function hello() {
  setTimeout(function () {
    console.log("Hello!");
  }, 3000);
}

function goodBye() {
  console.log("Goodbye");
}

hello();
goodBye();

// in here , in normal case goodbye will print first and hello will
// be print after 3s

function goodMorning(callback) {
  // callback is argument not keyword
  console.log("Good Morning");
  callback();
}
function goodEvening() {
  console.log("Good evening");
}

goodMorning(goodEvening);
