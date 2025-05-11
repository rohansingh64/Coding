// variables defined  using var keyword is function-scoped and globle-scoped but not block-scoped //
// and is reassigned and also redefined //

// exa - 1 --> function-scoped //

// function example1() {
//   var a = 10;
//   console.log(a);
// }
// example1();
// console.log(a); // a is not defined error

//
//

// exa - 2 --> not blocked-scoped

// console.log(b);
// if (true) {
//   var b = 13;
//   console.log(b);
// }
// console.log(b);

//
//

//  exa - 3 -->  globally-scoped

// var c = 30;
// console.log(c);
// function example3() {
//   c = 35;
//   console.log(c);
// }
// example3();
// console.log(c);

//
//

// exa - 4 -->  var is re-assigned

// var d = 10;
// console.log(d);
// d = "ram";
// console.log(d);

//
//

// exa - 5 -->  var is re-declare

// var e = 10;
// console.log(e);
// var e = "ram";
// console.log(e);
