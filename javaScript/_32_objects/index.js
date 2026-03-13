/*
    object = a collection of related properties and/or methods can represent real world objects
    (people, products, places)

    object= {key: value, function()}
*/

const person1 = {
  firstName: "Sponge",
  lastName: "Squrepants",
  age: 30,
  isEmployed: true,
  sayHello: function () {
    console.log("Spongebob Hello");
  },
};
console.log(person1.firstName);

const person2 = {
  firstName: "Patric",
  lastName: "Star",
  age: 42,
  isEmployed: false,
};

console.log(person2.isEmployed);
person1.sayHello();
