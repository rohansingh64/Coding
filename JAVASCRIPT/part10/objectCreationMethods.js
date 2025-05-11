// here we study about different methods to create an object

// 1  object literal ,,,  2  new Object() ,,, 3  Object.create(prototype)-->emptyObject
// 4  factoryFn(parameters)-->return ,,, 5  new constructorFn(para)-->this

//
//

// //  1. --> Using object Literal

// let obj = {
//   name: "rohan",
//   age: 23,
//   greet: function () {
//     console.log("hi my name is ", this.name);
//   },
// };

// console.log("obj  -->  ", obj);
// console.log("type of obj : ", typeof obj);
// obj.greet();

// //

// //

// //

// //

// //

// // 2. Using new Object() -->

// let obj = new Object();

// console.log("obj --> ", obj);

// obj.name = "rohan";
// obj.ht = 180;
// obj.print = function () {
//   console.log("hello");
// };

// console.log("obj --> ", obj);
// obj.print();

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

// // 3. Using Object.create(objPrototype)  -->

// let objPrototype = {
//   name: "rohan",
//   print: function () {
//     console.log("hi my name is ", this.name);
//   },
// };

// let obj = Object.create(objPrototype); // Always create a new empty object

// console.log("obj --> ", obj); // empty

// obj.Name = "Rohan";
// obj.age = 22;

// console.log("obj -->", obj);

//
//
//

//
//
//

//
//

// 4. Using factory functions  --> these are like normal fn but returns object

// function toCreateObject() {
//   return {
//     name: "rohan",
//     age: 22,
//     greet: function () {
//       console.log("hi kaise ho");
//     },
//   };
// }

// let obj = toCreateObject();

// console.log("obj --> ", obj);

// obj.fullName = "Rohan Singh";

// console.log("obj --> ", obj);

// obj.greet();

//
//
//
//

// we can also pass parameters to the factory fn

// function toCreateObject(Name, Age) {
//   return {
//     name: Name,
//     age: Age,
//     greet: function () {
//       console.log("hi kaise ho");
//     },
//   };
// }

// let obj = toCreateObject("Rohan Singh", 21);

// console.log("obj --> ", obj);

// obj.greet();

//
//
//

//
//
//

//
//

// 5. Using Constructor function -->  name of constructor fn in pascal notation(generally used not compulsory)

// function ToCreateObject() {
//     this.fname = 'rohan',
//     this.age = 22,
//     this.greet = function (){
//         console.log('hello to everyone');
//     }
// }

// let obj = new ToCreateObject();

// console.log("obj ----> ", obj);
// console.log("fname --> ", obj.fname);
// obj.greet();

//
//
//

// we also pass parmeter to constructor fn

// function ToCreateObject(name, age) {
//   (this.fname = name),
//     (this.age = 22),
//     (this.greet = function () {
//       console.log("hello to everyone");
//     });
// }

// let obj1 = new ToCreateObject("rohan");

// console.log("obj ----> ", obj1);
// console.log("fname --> ", obj1.fname);
// console.log("age --> ", obj1.age);
// obj1.greet();
