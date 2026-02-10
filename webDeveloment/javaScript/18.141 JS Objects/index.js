var bellBoy1 = {
  name: "Timmy",
  age: 19,
  hasWorkPermit: true,
  languages: ["English", "French"],
};

console.log("Hi, I am" + bellBoy1.name);
console.log("I am " + bellBoy1.age + " years old!");
console.log("I know the languages: " + bellBoy1.languages);

// constructor function:
function Worker(name, age) {
  this.name = name;
  this.age = age;
  this.sleep = function () {
    return "is sleeping";
  };
}

var worker1 = new Worker("Spark", 19);
console.log("worker 1 is: " + worker1.name);
console.log(worker1.name + " " + worker1.sleep());

var workers = [
  new Worker("Rahim", 20),
  new Worker("Karim", 19),
  new Worker("Akbor", 34),
];

for (var i = 0; i < workers.length; i++) {
  console.log("Name: " + workers[i].name + ", Age: " + workers[i].age);
}
