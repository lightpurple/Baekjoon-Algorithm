var input = require("fs").readFileSync("/dev/stdin").toString().split(" ");
var 최대공약수 = 0;
var 최소공배수 = 0;

for (i in input) {
  input[i] = parseInt(input[i]);
}

for (i = 1; i <= input[0]; i++) {
  if (input[0] % i === 0 && input[1] % i === 0) {
    최대공약수 = i;
  }
  if (최소공배수 === 0 && (input[1] * i) % input[0] === 0) {
    최소공배수 = input[1] * i;
  }
}

console.log(최대공약수);
console.log(최소공배수);
