const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `9 1
9 5 8 1 3 2 7 6 4`
).split('\n');

const fL = stdin[0].split(' ').map(Number);
const arr = stdin[1].split(' ').map(Number);
const N = fL[0];
let len = fL[1];

arr.sort((a,b)=>a-b);
for(let i=0; i<N; i++){
    if(arr[i]>len) break;
    len++;
}
console.log(len);