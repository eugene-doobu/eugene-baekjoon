const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `380`
).split('\n');

let n = 1000-stdin[0];
const coins = [500, 100, 50, 10, 5, 1];
let rst = 0;
coins.forEach((coin)=>{
    rst += Math.floor(n/coin);
    n %= coin;
});
console.log(rst);