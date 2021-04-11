const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `10 7`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

let a = [];
let count = 0;
let inVal = input().split(' ').map(Number);
let maxNUm = inVal[0];
let findNum = inVal[1];

for(let i=0; i<=maxNUm; i++){
    a.push(i);
}

function answer(){
    for(let i=2; i<=maxNUm; i++){
        for(let j= i; j<=maxNUm; j += i){
            if(a[j] == 0) continue;
            a[j] = 0;
            count += 1;
            if(count == findNum){
                console.log(j);
                return;
            }
        }
    }
}
answer();