//

// Error --> any event by which normal flow of execution of any code disrupted

//  --> compile time error  (during parsing we know error) exa --> syntax error

// console.log("Hi this is syntax error";

// --> run time error  (at running time we know error) exa --> reference error

// console.log(a); // -> reference error

//

//

//

// // Error Handling -->

// try {
//   // in try block we write Code that may throw an error

//   console.log("run successfully  1");

//   console.log("run successfully  2");

//   //   let val = 5;

//   console.log("val ", val, "error not occurs"); // here reference error occurs --> jump to catch block

//   console.log("these code not run if error occurs");
// } catch (err) {
//   // catch block --> if error occurs then only come into catch block
//   // Code to handle the error

//   console.log("reference error occurs in your code", err); // err -> whole error ,, err.message -> only error message
// } finally {
//   // always executes
//   // optional

//   console.log("finally block always execute");
// }

//
//
//
//
//

// // throw keyword  --> used to create custom errors

// function devide(a, b) {
//   if (b == 0) {
//     throw new Error("devide by zero is not possible");
//   }
//   return a / b;
// }

// try {
//   let a = 5;
//   //let b = 4;
//   let b = 0;
//   let ans = devide(a, b);
//   console.log("a/b : ", ans);
// } catch (err) {
//   console.log("err : ", err.message);
// } finally {
//   console.log("finally execute always");
// }
