const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `4 4 3
4 5.0 2 4.0 3 2.0 1 1.0
2 2.0 3 1.0 1 0.5 4 0.3
4 6.0 3 5.0 2 2.0 1 0.0
1 4.0 2 3.0 4 0.6 3 0.3`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

const fL = input().split(' ').map(Number);

let sum=0;
let vals = [];
for(let i=0; i<fL[1]; i++){
    let inValue = input().split(' ').map(Number);
    let maxV = -1;
    for(let j=0; j<fL[0]; j++){
        maxV = Math.max(maxV, inValue[j*2+1])
        console.log(inValue[j*2+1]);
    }
    vals.push(maxV);
}
vals.sort((a,b)=>b-a);
for(let i=0; i<fL[2]; i++){
    sum+=vals[i];
}

console.log(sum.toFixed(1));