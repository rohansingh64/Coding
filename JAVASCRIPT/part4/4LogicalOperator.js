// Logical operator ( and && , or || , not ! )

// falsi values -->  false , null , ''(empty string) , undefined , NAN(not a number) , 0(zero)
// truly values --> all other than falsy values

// AND --> all true then true otherwise false

// let exp1 = true;
// let exp2 = false;
// let exp3 = true;
// let exp4 = exp1 && exp2;
// let exp5 = exp1 && exp3;

// console.log(exp4); // false
// console.log(exp5); // true

//
//
//

// OR --> all false then false otherwise true

// let exp1 = true;
// let exp2 = false;
// let exp3 = false;
// let exp4 = exp1 || exp2;
// let exp5 = exp1 || exp3;

// console.log(exp4); // true
// console.log(exp5); // false

//
//
//

// NOT --> true ko false , false ko true

// console.log(!true);
// console.log(!false);

//
//
//

// logical operator with non boolean expressions

// use truly and falsy concept

let a = true;
let b;
let c = a && b;
console.log(c); // falsey value --> undefined

let d = false;
let e = "";
let f = d || e;
console.log(f); // falsey value --> empty string

let g = "ram";
let h = null;
let i = 5;
let j = g && h && i;
console.log(j); // falsey value --> null