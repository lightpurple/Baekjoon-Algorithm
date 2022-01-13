var input = require("fs").readFileSync('/dev/stdin').toString().split('\n');
let sumArr = [];
let sum = 0;
for (let i = 1; i <= parseInt(input[0]); i++) {
    let tmp = parseInt(input[i]);
    if (tmp === 0) {
        sumArr.pop();
    } else {
        sumArr.push(tmp);
    }
}
for (num of sumArr) {
    sum += num;
}
console.log(sum);
