/*
    .map() = is an array method used to create a new array by applying a function to each element of an existing array
*/

const numbers = [1, 2, 3, 4];
const doubled = numbers.map((num) => num * 2);
console.log(doubled);

const squres = numbers.map();
console.log(square);

function square(element) {
  return Math.pow(element, 2);
}
