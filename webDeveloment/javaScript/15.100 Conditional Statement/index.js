var n = 100;

if (n === 0) console.log("n is 0 and even");
else if (n % 2 === 0 && n === 2) {
  console.log("n is even");
} else {
  console.log("n is odd");
}

/*
    comparators:
        1. === : is equal to
        2. !== : is not equal to
        3. >   : greater than
        4. >=  : greater than or equal
        5. <   : lesser than
        6. <=  : lesser than or equal
*/

/*
    Note that '===' and '==' are not same.
    in javaScript '==' ignores the data type. i.e. we can compare the string with decimal.
    but '===' compares both value and data type.
*/
