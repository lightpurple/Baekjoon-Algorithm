var input = require("fs").readFileSync("/dev/stdin").toString().split("\n");
const vps = [];
for (let i = 1; i <= parseInt(input[0]); i++) {
    const str = input[i].split("");
	const temp = [];
	let bk = 0;
    for (let ch of str) {
        if (ch === "(") {
            temp.push("(");
        } else {
            if (temp.pop() !== "(") {
				bk++;
				break;
            }
        }
    }
	if (bk !== 0 || temp.pop() !== undefined) {
		vps.push("NO");
	} else {
		vps.push("YES");
	}
}
for (let output of vps) {
    console.log(output);
}

