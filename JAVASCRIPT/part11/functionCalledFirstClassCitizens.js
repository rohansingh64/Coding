// why function is called first class citizens in javascript

//  because function is

//  1--> Assigned to variables
//  2--> Passed as arguments
//  3--> Returned from other functions
//  4--> use as datastructure like array element
//  5--> use as properties of an object

//
//
//

// //  1--> Assigned to variables

// let val = function () {
//   console.log("hi");
// };

// val();

//
//
//

// //  2--> Passed as arguments

// let a = 5;
// function getValue() {
//   return a;
// }

// function printValue(fn) {
//   console.log("value : ", fn());
// }

// printValue(getValue);

//
//
//

// //  3--> Returned from other functions

// function get() {
//   return function getAns() {
//     console.log("hii");
//   };
// }

// let v = get();

// v();

// //
// //

// function multiply(a) {
//   return function ans(b) {
//     return a * b;
//   };
// }

// let c = multiply(5);

// let d = c(2);

// console.log("multiply is ", d);

//
//
//

// //  4--> use as datastructure like array element

// let arr = [
//   function print() {
//     console.log("hi");
//   },
//   function getSquare(a) {
//     return a * a;
//   },
//   10,
//   20,
//   30,
// ];

// let x = arr[0];
// x();

// let y = arr[1];
// let s = y(5);
// console.log("s : ", s);

// let z = arr[2];
// console.log("z : ", z);

//
//
//

//
//
//

// //  5--> use as properties of an object

// let obj = {
//   name: "rahan",
//   age: 22,
//   greet: function () {
//     console.log("hiiiiiiii");
//   },
// };

// let a = obj.greet;
// a();
