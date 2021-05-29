const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `2
0 0`
).split('\n');

const n = +stdin[0];
let arr = stdin[1].split(' ');

(function (){
    arr.sort( (a, b) => a+b > b+a ? 1 : -1);

    let rst = "";
    for(let i=0; i<n; i++){
        rst += arr.pop()
    }
    console.log(BigInt(rst)+"");
})()