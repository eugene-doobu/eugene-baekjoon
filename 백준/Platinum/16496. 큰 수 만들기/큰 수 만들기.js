const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `2
0 0`
).split('\n');

const n = +stdin[0];
let arr = stdin[1].split(' ');
let zeroCheck = true;
for(let i=0; i<n; i++){
    if(arr[i] != 0){
        zeroCheck = false;
        break;
    }
}

(function (){
    arr.sort(function (a, b){
        if(a+b > b+a) return 1;
        else return -1;
    });

    let rst = "";
    for(let i=0; i<n; i++){
        rst += arr.pop()
    }
    console.log(BigInt(rst)+"");
})()