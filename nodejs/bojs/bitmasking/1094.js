const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `48`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

let a = parseInt(input());
let sum = 0;
while(a){
    if(a%2 == 1) sum += 1;
    a = a>>1;
}
console.log(sum);
