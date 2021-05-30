const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `7 3`
).split('\n');

const fl = stdin[0].split(' ').map(Number);
const n = fl[0];
const k = fl[1];
let arr = [];
let rst = "";

for(let i=1; i<=n; i++) {
    arr.push(i);
}
let tmpK=0;
for(let i=0; i<n; i++){
    tmpK+=(k-1);
    tmpK %= arr.length;
    rst+=arr[tmpK]+", "
    arr.splice(tmpK, 1);
}
rst = rst.substr(0,rst.length-2);

console.log(`<${rst}>`);