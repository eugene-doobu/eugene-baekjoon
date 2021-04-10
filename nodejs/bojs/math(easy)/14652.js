const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `6 4 14`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

let q = input().split(' ').map(Number);
console.log(Math.floor(q[2]/q[1]) + " " + q[2]%q[1]);