// // reference datatype -- non primritive data type

// //  array , object and functions

// // object -->

// // object creation using object literal {}

// let obj = {
//   name: "rohan",
//   gender: "male",
//   printInfo: function () {
//     console.log("hi my name is rohan singh"); // we also use function as property of object
//   },
// };

// console.log(obj);

// // object key value accessing through . dot notation
// console.log(obj.name);
// console.log(obj.gender);
// obj.printInfo();

// // object key value accessing through [] bracket notation

// console.log(obj["name"]);
// console.log(obj["gender"]);
// obj["printInfo"]();

// // we can dynamically add or updateValue or delete properties of object

// obj.age = 20; // add new  property

// obj.weight = "40kg"; // add new  property

// obj.name = "Ram"; // modify  property value

// console.log(obj);

// delete obj.weight; // delete  property

// console.log(obj);

// // need of bracket notation  --> when key of object have
// // special characters, space or starts with a number then
// // you can not access it using dot notation

// let obj = {
//   "full name": "Rohan Singh", // here a space so use " " or ' '  for declare it
//   age: 20,
//   weight: "45kg",
//   greet: () => {
//     console.log("hello kaise ho saare"); // here I use arrow fn
//   },
// };

// console.log(obj);

// console.log(obj.age);
// console.log(obj.weight);
// obj.greet();

// // console.log(obj.''full name''); // error
// console.log(obj["full name"]);

//
//
//
//

//    this keyword

// Access properties inside function of same object -->  use this keyword --> this.varName
// --> arrow functions do not have this so do not use this for arrow function it gives undefine for values

let obj = {
  name: "rohan",
  age: 22,
  print: function () {
    console.log("hi my name is ", this.name);
  },
  show: () => {
    console.log("hi my age is ", this.age); // you use arrow fn then it gives undefine in output
  },
};

obj.print();
obj.show();
