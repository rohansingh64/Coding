// // array.splice(startIndex,noOfdeletion,item1,item2,...)

// let arr = [1.2, 3.4, 2, "hi", false, "apple"];

// console.log("array : ", arr);

// // exa --> at 1st index insert 1.15

// arr.splice(1, 0, 1.15);
// console.log("array after insertion at 1st index : ", arr);

// // exa --> from 4th index delete 2 items then insert "no" then insert "noOne" then insert "everyOne"

// arr.splice(4, 2, "no", "noOne", "everyOne");

// console.log(
//   "from 4th index delete 2 items then insert 'no' then insert 'noOne' then insert 'everyOne' ",
//   arr
// );

// // // deletion at random --> at index 4

// arr.splice(4, 1);
// console.log("array after deletion at 4th index : ", arr);

//
//
//
//
//

// // map function --> syntax --> let brr = array.map(Anyfunction)

// // const newArray = array.map((currentValue, index, array) => {
// //   // Return the transformed value for each element
// // });

// let arr = [1, 2, 3, 4, 5, -1, -2, -3, 9, 10];
// console.log("arr : ", arr);

// let squareArr = arr.map((ele) => {
//   return ele ** 2;
// });
// console.log("squareArr : ", squareArr);

//
//

// let arr = [1, 2, 3, 4, 5, -1, -2, -3, 9, 10];
// console.log("arr : ", arr);

// arr.map((ele, index) => {
//   console.log("element*10 : ", ele * 10);
//   console.log("index : ", index);
// });

// let fruits = ["grapes", "orange", "apple", "banana"];

// let myFruits = fruits.map((fruit) => {
//   return fruit.toUpperCase();
// });

// console.log(myFruits);

//
//
//
//
//

// // filter method on array --> we filter elements from array to another array


// const newArray = array.filter((element, index, array) => {
//   // return true to keep the element, false to discard it
// });

// let arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

// console.log("arr : ", arr);

// // let evenArr = arr.filter((num) => {
// //   if (num % 2 == 0) {
// //     return true;
// //   }
// //   else{
// //     return false;
// //   }
// // });

// // or another small way to write it

// let evenArr = arr.filter((num) => num % 2 == 0);

// console.log("evenArr : ", evenArr);

//
//

// let words = ["hi", "hen", "hell", "greet", "spaces", "javascript"];

// console.log("words : ", words);

// let word = words.filter((item) => {
//   if (item.length > 4) {
//     return true;
//   } else {
//     return false;
//   }
// });

// console.log("word : ", word);

//
//
//

// // filter method on array of object

// let product = [
//   {
//     name: "A",
//     price: 2500,
//   },
//   {
//     name: "B",
//     price: 1600,
//   },
//   {
//     name: "C",
//     price: 800,
//   },
//   {
//     name: "D",
//     price: 2000,
//   },
//   {
//     name: "E",
//     price: 500,
//   },
// ];

// console.log("all products : ", product);

// let expensiveProduct = product.filter((p) => p.price >= 1000);

// console.log("expensive products : ", expensiveProduct);

//
//
//
//
//
//

// array.reduce function

// syntax -->

// array.reduce((accumulator, currentValue) => {
//   // return updated accumulator
// }, initialValue);

// if acc initialise with any value then curr = index 0 value  , if acc not initialise then acc = index 0 value
// and curr = index 1 value

// // exa --> 1

// let arr = [10, 20, 30, 40];

// console.log("arr : ", arr);

// // here we find sum of array element using reduce fn

// // if acc initialise with 0 it stores 0 and curr stores 10

// let sum = arr.reduce((acc, curr) => {
//   return acc + curr;
// }, 0);

// console.log("sum : ", sum);

//
//

// // exa --> 2

// let arr = [10, 20, 30, 40, 25, 18];

// console.log("arr : ", arr);

// // here we find maximum element of array using reduce fn

// // if acc not initialise it stores 10 and curr stores 20

// let max = arr.reduce((acc, curr) => {
//   return Math.max(acc, curr);
// });

// console.log("max : ", max);
