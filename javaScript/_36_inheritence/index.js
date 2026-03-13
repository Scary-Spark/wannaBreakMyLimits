/*
    inheritence= allows a class to inherit properties and methods of another exisiting class
*/

class Animal {
  alive = true;
  eat() {
    console.log(`This ${this.name} is eating`);
  }

  sleep() {
    console.log(`This ${this.name} is sleeping`);
  }
}

class Rabbit extends Animal {
  name = "Rabbit";
}

class Fish extends Animal {
  name = "Fish";
}

class Hawk extends Animal {
  name = "Hawk";
}

const animal1 = new Rabbit();
console.log(animal1.name);
