/*
    this = reference to the object whre THIS is used
    (the object depends on the immediate context)

    person.name=this.name
*/

const person1 = {
  name: "Sponge",
  favFood: "Hambergers",
  sayHello: function () {
    console.log("Hi" + this.name);
  },
};

person1.sayHello();
