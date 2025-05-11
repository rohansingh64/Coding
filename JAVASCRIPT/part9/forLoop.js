// extra for loops -->

// // for each --> used with arrays

// // syntax  -->

// // array.forEach((element, index, array) => {
// //   // do something with element
// // });

// let arr = [10, 20, 30, 40, 50];

// let sum = 0;

// arr.forEach((ele) => {
//   sum = sum + ele;
// });
// console.log("sum : ", sum);

// arr.forEach((ele, index) => {
//   console.log("ele", ele, "at index", index);
// });

//
//
//

// // for in --> it is used to iterate over keys of an object

// let obj = {
//   name: "rohan",
//   age: 20,
//   height: "5ft 6inch",
//   greet: function () {
//     console.log("Hi");
//   },
// };

// for (const key in obj) {
//   console.log(key, " -- ", obj[key]);
// }

//
//
//

// for of --> it is used with arrays and string

// let arr = [1, 2, 3, 4, 5];

// let sum = 0;

// for (const ele of arr) {
//   sum += ele;
// }
// console.log("sum : ", sum);

// for (const ele of arr) {
//   console.log(ele);
// }

//
//

// let str = "rohan";

// for (const ele of str) {
//   console.log(ele);
// }
