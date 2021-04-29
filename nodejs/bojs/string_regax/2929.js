const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `EaEbFabG`
).split('\n');

let txt = stdin[0];
let mch = txt.split(/[A-Z]/);
let sum = 0;
for(let i=1; i<mch.length-1; i++){
    let div = parseInt(mch[i].length/4);
    sum += ((4 * (div+1))-1-mch[i].length);
}
console.log(sum);