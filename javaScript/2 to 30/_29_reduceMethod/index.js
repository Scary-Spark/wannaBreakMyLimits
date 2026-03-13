/*
    .reduce() = is an array method used to reduce an array to a single value by repeatedly applying a function
*/

const prices = [5, 30, 25, 10, 15, 20];
const total = prices.reduce(sum);

console.log(total);
function sum(accumulator, element) {
  return accumulator + element;
}

// accumulator = previous
// element = next
