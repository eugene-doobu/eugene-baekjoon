const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `7 54
7
5
5
4
2
2
1`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

const fL = input().split(' ').map(Number);
const n = fL[0];
let w = fL[1];
let coin = 0;
let isUp = false;

const price = [];
for(let i=0; i<n; i++){
    price.push(+input());
}

for(let i=0; i<n-1; i++){
    // 구매
    if(!isUp && price[i] < price[i+1]){
        coin = Math.floor(w/price[i]);
        w -= price[i] * Math.floor(w/price[i]);
        isUp = true;
    }
    // 판매
    else if(isUp && price[i] > price[i+1]){
        w += coin * price[i];
        coin = 0;
        isUp = false;
    }
}

console.log(w + coin*price[n-1]);