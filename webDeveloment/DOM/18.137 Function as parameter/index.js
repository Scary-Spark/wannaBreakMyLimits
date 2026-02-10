function add(num1, num2) {
  return num1 + num2;
}

function mul(num1, num2) {
  return num1 * num2;
}

function calculator(num1, num2, operator) {
  return operator(num1, num2);
}

console.log("Multiplication: " + calculator(1, 2, mul));
console.log("Sum: " + calculator(2, 3, add));
