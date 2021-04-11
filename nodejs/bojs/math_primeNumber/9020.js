const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `6
10000
10
16
4
6
12`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

let a = [];
let primes = [];
let inVal = parseInt(input());
let objVal = [];
let goldbach = [];
let maxNUm = 10001;

for(let i=0; i<inVal; i++){
    objVal.push(parseInt(input()));
    goldbach.push([]);
}

for(let i=0; i<=maxNUm; i++){
    a.push(i);
}

function findPrime(){
    for(let i=2; i<=maxNUm; i++){
        if(a[i] == 0) continue;
        for(let j= i+i; j<=maxNUm; j += i){
            a[j] = 0;
        }
    }
    for(let i=2; i<=maxNUm; i++){
        if(a[i] != 0) primes.push(i);
    }
}

findPrime();
//console.log(primes.length); // = 1229
for(let i=0; i<inVal; i++){
    let tmp = [];
    for(let j=0; j<1229; j++){
        if(objVal[i] <= (primes[j] + 1)) break;
        if(a[objVal[i] - primes[j]] != 0){
            tmp.push(primes[j]);
        }
    }
    console.log(tmp);
    if(tmp.length % 2 == 0){
        let ans = tmp.length / 2;
        console.log(tmp[ans-1] + " " + tmp[ans]);
    }
    else{
        let ans = Math.floor(tmp.length / 2);
        console.log(tmp[ans] + " " + tmp[ans]);
    }
}