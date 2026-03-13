/*
    .filter() = is an array method used to create a new array containing only the elements that satisfy a condition
*/

let numbers = [1, 2, 3, 4, 5, 6, 7, 8];
let even = numbers.filter(isEven);
console.log(even);

function isEven(element) {
  return element % 2 === 0;
}
