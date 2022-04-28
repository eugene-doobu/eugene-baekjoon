const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `4
1 3 5 7`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

let a = [];
let inVal = parseInt(input());
let objVal = input().split(' ').map(Number);
let maxNUm = 1001;

for(let i=0; i<=maxNUm; i++){
    a.push(i);
}
a[1]=0;

function answer(){
    for(let i=2; i<=maxNUm; i++){
        if(a[i] == 0) continue;
        for(let j= i+i; j<=maxNUm; j += i){
            a[j] = 0;
        }
    }
}

answer();

let count = 0;
objVal.forEach(function (num){
    if(a[num] != 0) count +=1;
})

console.log(count);