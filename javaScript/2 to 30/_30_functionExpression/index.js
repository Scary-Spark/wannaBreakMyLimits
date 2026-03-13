/*
    function expressions = a way to define functions as values or varibales
*/

const hello = function () {
  console.log("Hello");
};

hello();

setTimeout(hello, 3000);

setTimeout(function () {
  console.log("Hello World");
}, 4000);
