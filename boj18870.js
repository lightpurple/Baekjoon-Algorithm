var input = require("fs").readFileSync("/dev/stdin").toString().split("\n");

var loc = input[1].split(" ");
var sort = new Set(loc);
sort = [...sort].sort((a, b) => a - b);
var res = "";
var dic = {};
sort.forEach((v, i) => {
  dic[v] = i;
});
for (i of loc) {
  res += dic[i] + " ";
}
console.log(res);
