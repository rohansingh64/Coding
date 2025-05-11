// hoisting --> process of shifting variable and function top to their scope

// only variable declare using var not by let and const
// only var declaration not value of variable

// only plane function shift to top of their scope not fn expression or arrow fn

// //  exa --> 1

// console.log("a : ",a);
// var a = 2;

// console.log("b : ",b);
// var b;

//
//
//

// // // exa --> 2

// console.log("a : ", a);
// let a = 5;

//
//
//

// // // exa --> 3

// console.log("a : ", a);
// const a = 5;

//
//
//

// // exa --> 4

// greet();

// function greet() {
//   console.log("hello kaise ho saare");
// }

//
//
//

// // exa --> 5

// greet(); // reference error let , const not shift to top of scope

// let greet = function () {
//   console.log("hello kaise ho saare");
// };

//
//
//

// // exa --> 6

// // console.log(greet); // no error

// // greet(); // type error
// // here we declare greet using var so not reference error but type error because
// // only var = greet; shift to top and here greet seem as variable not function

// var greet = function () {
//   console.log("hello kaise ho saare");
// };

//
//
//

// temporal dead zone -->

// let and const variable not access before initialise variable this zone is called TDZ

console.log(a);
console.log("hi");
console.log("hello");
let a = 5;

// space before let a = 5 for a is tdz and you want to access a so you are in tdz and in tdz reference error occurs
