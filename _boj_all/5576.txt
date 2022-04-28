const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `23
23
20
15
15
14
13
9
7
6
25
19
17
17
16
13
12
11
9
5`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

let ws = [];
let ks = [];

for(let i=0; i<10; i++){
    ws.push(parseInt(input()));
}
for(let i=0; i<10; i++){
    ks.push(parseInt(input()));
}
ws.sort((a,b) => b-a);
ks.sort((a,b) => b-a);
let wssum = ws[0] + ws[1] + ws[2];
let kssum = ks[0] + ks[1] + ks[2];
console.log(wssum + " " + kssum);
