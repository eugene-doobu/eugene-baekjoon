const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `3 14
1 4 3 2 5 4 3 2 5 3 4 2 3 4
`
).split('\n');

const fLine = stdin[0].split(' ').map(Number);
const sLine = stdin[1].split(' ').map(Number);

const N = fLine[0];
const K = fLine[1];
let tap = [];
let rst = 0;

for(let i=0; i<N; i++){
    tap.push(sLine[i]);
}
tap.sort(function (a, b){
    return a-b;
})

for(let i=N; i<K; i++){
    if(!tap.includes(sLine[i])){
        tap.pop()
        tap.push(sLine[i])
        tap.sort(function (a, b){
            return a-b;
        })
        rst++;
    }
}
console.log(rst);