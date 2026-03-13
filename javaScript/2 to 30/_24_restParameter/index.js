// Rest parameters (...) allow a function to accept any number of arguments and collect them into an array

// rest= bundle seperate elements into an array

const food1 = "pizza";
const food2 = "hambarg";
const food3 = "hotdog";
const food4 = "sushi";

function openFridge(...foods) {
  console.log(foods);
}

openFridge(food1, food2, food3, food4);
