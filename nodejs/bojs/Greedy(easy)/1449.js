const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `4 1
1 2 3 101
`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

let fline = input().split(' ').map(Number);
let sline = input().split(' ').map(Number);
sline.sort(function (a,b){return a-b});

let prevHole = 0;
let rst = 0;

for(let i=0; i<fline[0]; i++){
    if(sline[i] > prevHole){
        rst++;
        prevHole = sline[i] + fline[1] -1;
    }
}
console.log(rst);