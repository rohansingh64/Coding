// number

let a = 10;
console.log(a);
console.log(typeof a);

let b = 12.982;
console.log(b);
console.log(typeof b);

// string

let nameOfPerson = "Rohan Singh";
console.log(nameOfPerson);
console.log(typeof nameOfPerson);

// parseInt and parseFloat  -->

let strInt = "50.247";
let parseInteger = parseInt(strInt);
console.log("parseInt : ", parseInteger, " type : ", typeof parseInteger);

let n = parseInt('hi');

console.log('n : ', n);
console.log('type of n : ',typeof n);


let strFloat = "50.247";
let parseFloatval = parseFloat(strFloat);
console.log("parseFloatval : ", parseFloatval, " type : ", typeof parseFloatval);

// boolean

let value = true;
console.log(value);
console.log(typeof value);

// undefined

let m;
console.log(m);
console.log(typeof m);

// null  --> datatype object

let money = null;
console.log(money);
console.log(typeof money);

// Big Int

let paisa = 987654321234566778776544876654444445665n;
console.log(paisa);
console.log(typeof paisa);

// Symbol

let val1 = Symbol("rohan");
let val2 = Symbol("rohan");

console.log(val1 === val2);
