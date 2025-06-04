var arr = [10, 21, 30, 40, 54];

var brr = arr.map((ele) => {
   if(ele % 3 == 0){
    return ele;
   }
});

console.log("brr : ", brr);
