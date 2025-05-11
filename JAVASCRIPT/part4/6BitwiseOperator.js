// Bitwise operator (&,|,~,^,>>,<<)

// & -->  1&1 is 1 all other 0
// | -->  0|0 is 0 all other 1
// ^ -->  same pr 0 diff pr 1

let a = 10; // a = 0 1 0 1 0
let b = 20; // b = 1 0 1 0 0

console.log("a & b : ", a & b); // 0 0 0 0 0 --> 0
console.log("a | b : ", a | b); // 1 1 1 1 0 --> 30
console.log("a ^ b : ", a ^ b); // 1 1 1 0 0 --> 30

let c = 8; // 1 0 0 0

console.log("~c : ", ~c); // -9


console.log(10 >> 1); // 5
console.log(10 << 1); // 20
console.log(10 << 3); // 80
