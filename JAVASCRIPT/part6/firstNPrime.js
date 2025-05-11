// first 10 prime number

let N = 10;

function checkPrime(x) {
  if (x == 1 || x == 2) return false;

  for (let i = 2; i <= x / 2; i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

let count = 0;

let num = 1;

while (count != N) {
  if (checkPrime(num)) {
    console.log(num);
    count++;
  }
  num++;
}
