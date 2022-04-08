const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `5`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

let numA = [];
let numB = [];
for(let i=0; i<=45; i++){
    numA.push(0);
    numB.push(0);
}

function solutionA(n){
    if(n == 0) return 1;
    if(n == 1) return 0;
    if(numA[n] != 0) return numA[n];
    numA[n] = solutionA(n-1) + solutionA(n-2)
    return numA[n];
}

function solutionB(n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(numB[n] != 0) return numB[n];
    numB[n] = solutionB(n-1) + solutionB(n-2);
    return numB[n];
}

let n = parseInt(input());
console.log(solutionA(n)+ " " + solutionB(n));