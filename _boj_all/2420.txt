const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `-2 5`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

let a = input().split(' ').map(Number);
console.log(Math.abs(a[0] - a[1]));