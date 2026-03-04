/*
    spread operator (...): allows an iterable such as an
        array of string to be expanded into seperate
        elements (unpacks the elements)
*/

let numbers = [1, 2, 3, 4, 5];
let max = Math.max(...numbers);
console.log(max);

let username = "Bro Code";
let letters = [...username].join("-");
console.log(letters);

// shallow copy
let fruits = ["apple", "mango"];
let newFruits = [...fruits, "others"];
