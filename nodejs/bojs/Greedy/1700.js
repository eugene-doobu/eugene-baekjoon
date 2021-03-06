const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `3 6
1 1 1 1 2 3`
).split('\n');

const fLine = stdin[0].split(' ').map(Number);
const sLine = stdin[1].split(' ').map(Number);

const N = fLine[0];
const K = fLine[1];
let tap = [];
let rst = 0;

let count = 0;
for(let i=0; count<N; i++){
    if(tap.indexOf(sLine[i]) == -1){
        tap.push(sLine[i]);
        count++;
    }
}

for(let i=N; i<K; i++){
    if(tap.includes(sLine[i])) continue;

    // 후에 사용순서 탐색
    let tmp = [];
    tap.forEach((e)=>{
        let idx = sLine.indexOf(e, i+1);
        tmp.push(idx==-1?10001:idx);
    })
    let maxVal = Math.max.apply(null, tmp);
    tap[tmp.indexOf(maxVal)] = sLine[i];
    rst++;
}
console.log(rst);