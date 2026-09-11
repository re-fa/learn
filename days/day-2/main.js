// 11 September ( 9 ) 2026 //
// Friday //

// 1 : "use strict"; //
// The ("use strict";) or ("use-strict";) in the first line in your code, to check your code and show hidden errors in console tab in browser. //
// she to check your code in Strict mode //
// she written in the first line in your file .js or in the first line in any function , example : 

function strict() {
  "use strict";
  number = 5;
  console.log(number)
};

strict();

// this code is error , because you don't use let in variable, but this code :

function nostrict() {
  number = 5;
  console.log(number)
};

nostrict();

// this code is run , but not good don't use let in variable //



// 2 : variables //

// let, var, const //

// let is nice and modren, example :
let name = "Reda";
let age = 16;
let country = "Iraq";

console.log(`My name is ${name}, I'm from ${country}, I'm ${age}`);

name = "Reda M.";
console.log(name);

// var is old, and not very nice, example:
var testVar = "test";
var testVar = "noTest";
console.log(testVar);

// const to static variables, example :
const myName = "Reda";
/* MyName = "Ahmed"; */ // This error //
console.log(myName);

// Sorry, My English is not good. //
// Tank You! //
