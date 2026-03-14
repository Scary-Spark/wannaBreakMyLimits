/*
    destructing = extract values from arrays and objects,
                then assign them to variables in a convenient way
                [] = to perform array destructuring
                {} = to perform object destructuring
*/

// swap the value of two variables
let a = 1;
let b = 2;
[a, b] = [b, a];
console.log(`a: ${a}, b: ${b}`);

// swap to elements in a array
const colors = ["red", "green", "blue", "black", "white"];
[colors[0], colors[4]] = [colors[4], colors[1]];

// assign array elements to variable
const [firstColor, secondColor, thirColor, ...extraColors] = colors;
console.log(firstColor);
console.log(extraColors);

// extract values from object
const person1 = {
  firstName: "Sponge",
  lastName: "Squre",
  age: 30,
  job: "Fry Cooker",
};

const person2 = {
  firstName: "Patrik",
  lastName: "Star",
  age: 30,
};

const { firstName, lastName, age, job = "Unemployed" } = person2;
console.log(firstName);
console.log(job);

// destructuring in function parameters
function displayPerson({ firstName, lastName, age, job }) {
  console.log(`Name: ${firstName} ${lastName}`);
  console.log(`Age: ${age}`);
  console.log(`Job: ${job}`);
}

displayPerson(person1);
displayPerson(person2);
