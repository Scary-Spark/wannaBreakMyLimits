const person = {
  fullName: "Sponge Bob",
  age: 30,
  isStudent: true,
  hobbies: ["karate", "jellyFishing", "cooking"],
  address: {
    street: "124 conch st.",
    city: "Bikini bottom",
    country: "Int. water",
  },
};

console.log(person.fullName);
console.log(person.age);
console.log(person.hobbies);
console.log(person.address);
console.log(person.address.city);
console.log("\nUsing for loop");

for (const property in person.address) {
  console.log(person.address[property]);
}
