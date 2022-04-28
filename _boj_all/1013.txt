const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `3
10010111
011000100110001
0110001011001`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

let n = parseInt(input());
for(let i=0; i<n; i++){
    let elec = /^(100+1+|01)+$/.test(input());
    if(elec) console.log("YES")
    else console.log("NO");
}