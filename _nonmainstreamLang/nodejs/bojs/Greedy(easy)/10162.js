const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `189`
).split('\n');

const n = +stdin[0];
if(n%10) console.log(-1);
else console.log(`${Math.floor(n/300)} ${Math.floor((n%300)/60)} ${Math.floor((n%60)/10)}`);