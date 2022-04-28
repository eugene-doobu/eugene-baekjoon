const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `5 8 20
5 8 17
10 20 28
0 0 0
`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();
let i = 1;
while(true){
    let inStr = input();
    if (inStr === "0 0 0") break;
    let rst = 0;
    let inVal = inStr.split(' ').map(Number);

    let remainder = inVal[2] % inVal[1];
    rst += Math.min(remainder, inVal[0]);
    let quotient = Math.floor(inVal[2] / inVal[1]);
    rst += quotient * inVal[0];

    console.log(`Case ${i++}: ${rst}`);
}