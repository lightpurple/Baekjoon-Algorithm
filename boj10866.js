var input = require("fs").readFileSync("/dev/stdin").toString().split("\n");
var arr = [];

function push_front(x) {
  arr.unshift(x);
}

function push_back(x) {
  arr.push(x);
}

function pop_front() {
  const res = arr.shift();
  console.log(res === undefined ? -1 : res);
}

function pop_back() {
  const res = arr.pop();
  console.log(res === undefined ? -1 : res);
}

function size() {
  console.log(arr.length);
}

function empty() {
  console.log(arr.length === 0 ? 1 : 0);
}

function front() {
  console.log(arr[0] === undefined ? -1 : arr[0]);
}

function back() {
  console.log(arr[arr.length - 1] === undefined ? -1 : arr[arr.length - 1]);
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

