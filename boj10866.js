var input = require("fs").readFileSync("/dev/stdin").toString().split("\n");
var arr = [];
var answer = "";

function push_front(x) {
  arr.unshift(x);
}

function push_back(x) {
  arr.push(x);
}

function pop_front() {
  const res = arr.shift();
  answer += res === undefined ? `-1\n` : `${res}\n`;
}

function pop_back() {
  const res = arr.pop();
  answer += res === undefined ? `-1\n` : `${res}\n`;
}

function size() {
  answer += `${arr.length}\n`;
}

function empty() {
  answer += arr.length === 0 ? `1\n` : `0\n`;
}

function front() {
  answer += arr[0] === undefined ? `-1\n` : `${arr[0]}\n`;
}

function back() {
  answer +=
    arr[arr.length - 1] === undefined ? `-1\n` : `${arr[arr.length - 1]}\n`;
}

for (let i = 1; i < input.length; i++) {
  let order = input[i].split(" ");

  if (order[0] === "push_front") {
    push_front(order[1]);
  } else if (order[0] === "push_back") {
    push_back(order[1]);
  } else if (order[0] === "pop_front") {
    pop_front();
  } else if (order[0] === "pop_back") {
    pop_back();
  } else if (order[0] === "size") {
    size();
  } else if (order[0] === "front") {
    front();
  } else if (order[0] === "back") {
    back();
  } else if (order[0] === "empty") {
    empty();
  }
}
console.log(answer);

