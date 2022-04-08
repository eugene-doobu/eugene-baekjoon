const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `0001100
`
).split('\n');

let str = stdin[0];
let num = 1;
let prev = str[0];

for(let i=1; i<str.length; i++){
    if(str[i] !== prev){
        num++;
        prev = str[i];
    }
}
console.log(Math.floor(num/2));