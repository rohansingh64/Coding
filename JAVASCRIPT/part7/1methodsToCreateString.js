// methods to create sting in javascript

// // 1st method -->  using  string literals --> [double qoute " " ]
// // && [single qoute ' ' ] --> type --> string(primitive)

// let str1 = "Rohan Singh";
// console.log(str1);
// console.log(typeof str1);

// let str2 = "Ram Singh";
// console.log(str2);
// console.log(typeof str2);

//
//
//
//
//

// // 2nd method -->  using  template literals --> [backticks ` ` ]
// // type --> string(primitive)
// // Advantage  -->  use ${} for variable value print  And also supports multiple lines

// let str1 = `Rohan
// Singh`;
// console.log(str1);
// console.log(typeof str1);

// let a = 10;
// let b = 20;

// let sum = a + b;

// console.log(`sum of ${a} and ${b} is ${sum}`);

//
//
//
//
//

// // 3rd method --> Using Sting constructor   --> type --> Object

// let str1 = new String("Rohan Singh");
// console.log(str1); // [String: 'Rohan Singh']
// console.log(typeof str1); // object

//
//
//
//
//

// // 4th method --> using function [String(var)]-->(converts all values into string)
// // And using method [var.toString()]--> (not all values converted into string like null etc)
// //  type --> string

let num1 = 122;
let str1 = String(num1);
console.log(str1);
console.log(typeof str1);

let num2 = 158;
let str2 = num2.toString();
console.log(str2);
console.log(typeof str2);
