let fruits = ["apple", "orange"];
console.log(fruits);
console.log(fruits[0]);

fruits.push("coconut"); // insert at the end
fruits.pop(); // remove last index
fruits.unshift("mango"); // insert at the beginning
fruits.shift(); // remove from start

let length = fruits.length();
let index = fruits.indexOf("apple");

fruits.sort(); // sort
fruits.sort().reverse(); // sort reverse order
