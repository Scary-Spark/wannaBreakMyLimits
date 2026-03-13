/*
    constructor = special methods for defining the properties and methods of objects
    constructor name defined using capital letter
*/

function Car(make, model, year, color) {
  this.make = make;
  this.model = model;
  this.year = year;
  this.color = color;
}

const car1 = new Car("Ford", "Mustang", 2025, "red");

console.log(car1.color);
