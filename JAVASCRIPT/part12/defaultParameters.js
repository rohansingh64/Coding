//

//

// function sayMyname(fname = "Rohan", lname = "Singh") {
//   console.log(fname, "-", lname);
// }

// sayMyname(); // Rohan - Singh

// sayMyname("Ajay","Gupta"); // Ajay - Gupta

// sayMyname("Ram"); // Ram - Singh

//

//

//

//

//  we can also use object array functions as default argument

// array as default parameter

// let solve = (val = [1, 2, 3, true]) => {
//   console.log("Hi -- ", val);
// };

// solve("Rohan");

// solve(5);

// solve();

//
//
//

// object as default parameter

// let solve = (
//   val = {
//     name: "rohan",
//     age: "20",
//     greet: function () {
//       console.log("hi everyone");
//     },
//   }
// ) => {
//   console.log("Hi -- ", val);
// };

// solve("Rohan");

// solve(5);

// solve();

//
//
//
//
//
//

// function as default parameter

// function getVal(){
//     return 100;
// }

// let solve = (val = getVal()) => {
//     console.log("Hi -- ", val);
//   };

//   solve("Rohan");

//   solve(5);

//   solve();

//
//
//
//
//
//
//
//
//
//

//  passing null and undefined to a parameter

function solve(val = "default") {
  console.log("val : ", val);
}

solve("rohan");

solve(null); // take null

solve(undefined); // take default value of val
