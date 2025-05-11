// concatination of strings

// let str1 = "Rohan ";
// let str2 = "Singh";

// let str3 = str1 + str2;

// console.log(str3);

//
//

// let str1 = "Ram ";
// let str2 = "Shyaam";

// let str4 = `${str1} and ${str2}`;
// let str4 = `${str1}${str2}`;

// console.log(str4);

//
//
//
//
//

// let str = "Rohan Singh";

// let strLen = str.length;
// console.log(strLen);

// let strUpper = str.toUpperCase();
// console.log(strUpper);

// let strLower = str.toLowerCase();
// console.log(strLower);

// // substring --> str.substring(startIndex,endIndex); --> print from start to end-1 --> endIndex char is not included

// // substring --> str.substring(startIndex); --> print from start index to end of string

// let substring1 = str.substring(0, 5);
// console.log(substring1);

// let substring2 = str.substring(3);
// console.log(substring2);

//
//
//
//
//

// how to print " " or in ' ' in our string --> use \ it treats next charecter as normal char not special;

// let phrase = "Hi my name is \"Rohan Singh\" and I am a student";

// console.log(phrase);

//
//
//
//
//

// stringVar.split("saperator"); --> store into a array

// let sentence = "Hi my name is Rohan Singh";

// let words = sentence.split(" "); // here after split string parts store into words array

// console.log(words);

//
//
//
//
//

// arrayVar.join("joiner"); --> we can also join array elements into string with join

let words = ["Ram", "is", "a", "good", "boy"];

let newSentence = words.join("-");

console.log(newSentence);
