// class --> it is a blueprint and object is an instance of a class

// class Human {
//   //properties
//   name = "Rohan";
//   age = 20;
//   ht = 180;

//   // behaviour or functionalty
//   running() {
//     console.log("Human can run");
//   }
//   sleeping() {
//     console.log("Human need sleep");
//   }
//   quality(q) {
//     console.log("Human have quality like ", q);
//   }
// }

// let obj = new Human();

// console.log("name : ", obj.name);
// console.log("age : ", obj.age);
// console.log("height : ", obj.ht);
// obj.running();
// obj.sleeping();
// obj.quality("Honesty");

//
//
//
//
//
//
//
//

// class Human {
//   name = "Rohan"; // public

//   #age = 20; // private  --> use #  --> can`t access outside of class

//   ht = 180;

//   running() {
//     console.log("Human can run");
//   }
//   quality(q) {
//     console.log("Human have quality like ", q);
//   }

//   // we can access a private member using any function but we use specially get and set for private members

//   // for access any data members in same class use this.varName  ,, this refers to current object

//   print() {
//     console.log("age using any fn print : ", this.#age);
//     console.log("height using print : ", this.ht);
//   }

//   // getter -->
//   get getAgeVal() {
//     console.log("age using getter : ", this.#age);
//   }

//   // setter -->
//   set setAgeVal(v) {
//     console.log("setting age value to : ", v);
//     this.#age = v;
//   }
// }

// let obj = new Human();

// console.log("name : ", obj.name);
// // console.log("age : ", obj.#age); // error
// console.log("height : ", obj.ht);
// obj.running();
// obj.quality("Honesty");

// obj.print();

// // using getter

// // obj.getAgeVal(); // error here it is not a function it is a getter

// obj.getAgeVal;

// // using setter

// // obj.setAgeVal(23); // error here it is not a function it is a setter

// obj.setAgeVal = 23;

// obj.getAgeVal;

//
//
//
//
//
//
//
//

//  constructor  --->

class Student {
  name = "Rohan";

  age;

  marks;

  constructor(markVal, ageVal) {
    this.marks = markVal;
    this.age = ageVal;
  }

  print() {
    console.log("name : ", this.name);
    console.log("marks : ", this.marks);
    console.log("age : ", this.age);
  }
}

let obj = new Student(80, 22);

obj.print();

// change marks to 90

obj.marks = 90;

console.log("changing marks to 90 ");

obj.print();
