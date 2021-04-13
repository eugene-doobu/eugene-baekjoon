const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `5
44,62
34,69
24,78
42,44
64,10`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

let n = parseInt(input());
let xs = [];
let ys = [];
for(let i=0; i<n; i++){
    let tmp = input().split(',').map(Number);
    xs.push(tmp[0]);
    ys.push(tmp[1]);
}
xs.sort((a,b)=>a-b);
ys.sort((a,b)=>a-b);

console.log((xs[0]-1) + "," + (ys[0]-1));
console.log((xs[n-1]+1) + "," + (ys[n-1]+1));
console.log(5);