// generate a random numbers beteen (0 to 0.999999 upto 16 decimal places)
var n = Math.random();

//in order to generate random number in a range we use in this way.

var p = Math.random() * 100 + 1;
// in here Math.random()*100 generate 0 to 99.99999... but not 100.
// this is why we are adding +1 here as well as remove 0
// also we can math Math.floor() to get floor value
