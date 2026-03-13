/*
    for each method used to iterate over elements
    of an array and apply a specific function (callback)
    to each element

    arrary.forEach(callback)
*/

let numbers = [1, 3, 4, 5];

function display(element) {
  console.log(element);
}

numbers.forEach(display);
