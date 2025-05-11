let obj1 = {
  name: "rohit",
  age: 22,
};

let obj2 = obj1; // this is not object cloning --> here a new variable create and refers to same object

console.log("obj1 --> ", obj1);

console.log("obj2 --> ", obj2);

obj1.name = "rohan";

console.log("obj1 after change --> ", obj1);

console.log("obj2 after change --> ", obj2);

//
//

//  cloning of object  --> 3 methods --> iterate  , assign method , Spread Operator

//

// let obj1 = {
//   name: "Rohan",
//   age: 22,
//   greet: () => {
//     console.log("hi");
//   },
// };

// console.log("obj1 : --> ", obj1);

// // iterate  -->

// let obj2 = {};

// for (const key in obj1) {
//   obj2[key] = obj1[key];
// }

// console.log("obj2 : --> ", obj2);

//
//
//

// // assign method --> Object.assign(target,source1,source2,....)

// let obj2 = Object.assign({},obj1);

// console.log("obj2 : --> ", obj2);

//
//
//

// spread operator -->

// it creates swallo copy
// It's important to note that spread operator method
// performs a shallow copy, meaning it only copies the
// properties at the top level of the object
// If the object contains nested objects, they will be referenced
//  rather than cloned. For deep cloning, we need to use other techniques.

// let obj2 = { ...obj1 };

// console.log("obj2 : --> ", obj2);
