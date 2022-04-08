const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `1
-1
`
).split('\n');

const a = BigInt(stdin[0]);
const b = BigInt(stdin[1]);

console.log(a+b+"");
console.log(a-b+"");
console.log(a*b+"");