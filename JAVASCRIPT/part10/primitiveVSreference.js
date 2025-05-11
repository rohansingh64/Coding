// when a variable declare then some memory assign to it

// for   primitive data type --> stack memory  & for reference type --> heap memory(varname in stack and it refers to heap memory)

// // primitive data type --> (number , boolean , undefine , null , string , NAN , bigint, and symbol)
// let a = 5;

// let b = a;

// // both are created differnt in stack memory means both are independent to each other

// console.log("a : ", a);
// console.log("b : ", b);

// a = 10;

// console.log("after a=10  --> a : ", a);
// console.log("after a=10  --> b : ", b);

//
//
//
//
//

// reference data type --> (array , object , function)
let arr = [1, 2, 3];

let brr = arr;

// here arr and brr variable name both are created stack and refers to same array in heap memory

console.log("arr : ", arr);
console.log("brr : ", brr);

arr[0] = 10;

console.log("after change in arr  --> arr : ", arr);
console.log("after change in arr  --> brr : ", brr);
