// creation of array(array is an object that can store elements) (elements can be same or different types)

// // array creation using array literal  []

// let arr = [1, 2, 3, 4, 5];

// console.log(arr);

// let brr = [1, "rohan", "ram", 4, true, null];

// console.log(brr);

// // accessing array element --> using index

// console.log(arr[0]);
// console.log(arr[1]);
// console.log(arr[4]);

// let i = 3;
// console.log(arr[i]);

//
//
//

// // array creation using array contructor

// let arr = new Array(1, 2, 3, 4, 5);

// console.log(arr);

// let brr = new Array(1, 2, "hi", "hello", 5, null, true);

// console.log(brr);

//
//
//

// // insertion in array

// let arr = [1.2, 3.4, 2, "hi", false, "apple"];

// // at last
// console.log("array before insertion : ", arr);

// arr.push("banana");
// console.log("array after insertion at last : ", arr);

// // at start

// arr.unshift(1.1);
// console.log("array after insertion at start : ", arr);

// // at random   ---->  array.splice(startIndex,noOfdeletion,item1,item2,...)

// // exa --> at 1st index insert 1.15

// arr.splice(1, 0, 1.15);
// console.log("array after insertion at 2nd index : ", arr);

// // exa --> from 4th index delete 2 items then insert "no" then insert "noOne" then insert "everyOne"

// arr.splice(4, 2, "no", "noOne", "everyOne");

// console.log(
//   "from 4th index delete 2 items then insert 'no' then insert 'noOne' then insert 'everyOne' ",
//   arr
// );

// // deletion at end

// arr.pop();
// console.log("array after deletion at last : ", arr);

// // deletion at start

// arr.shift();
// console.log("array after deletion at start : ", arr);

// // deletion at random --> at index 4

// arr.splice(4, 1);
// console.log("array after deletion at 4th index : ", arr);

//
//
//
//
//
//

// // slice method --> let barray array.slice(startIndex,endIndex); --> endIndex not include

// let arr = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100];
// console.log("arr : ", arr);

// let brr = arr.slice(4, 8);
// console.log("brr : ", brr);

//
//
//
//
//

// // sort -->

// let arr = [10, 2, 9, 20, 30, 21, 33, 20];

// console.log("arr before sort : ", arr);

// arr.sort(); // arr.sort() sort elements as string

// console.log("arr after sort as strings in ascending : ", arr);

// // for considering as number -->
// // [ascending --> arr.sort((a,b) => a-b )]
// // [descending --> arr.sort((a,b) => b-a )]

// arr.sort((a, b) => a - b);
// console.log("arr after sort in ascending as number : ", arr);

// arr.sort((a, b) => b - a);
// console.log("arr after sort in descending as number : ", arr);

//
//
//

// // arr.reverse();

// let arr = [1, 2, 3, 2, 4, 7, 3];

// console.log("arr : ", arr);

// arr.reverse();

// console.log("arr after reverse : ", arr);

//
//

// array.indexof() -->

// let arr = [2, 4, 6, 8, 10, 6];

// console.log(arr.indexOf(6));
// console.log(arr.indexOf(60));

//
//

// // arry.find() -->  array.find((element) => condition);

// let arr = [2, 4, 11, 18, 10, 6];

// console.log("arr : ", arr);

// let n = arr.find((a) => a > 10);

// console.log("n : ", n);

//
//
//

// passing an array into a function

// let arr = [1, 2, 3, 4, 5];

// console.log("arr : ", arr);

// const sum = (arr) => {
//   let s = 0;
//   for (const n of arr) {
//     s += n;
//   }
//   return s;
// };
// let ans = sum(arr);
// console.log("sum : ", ans);
