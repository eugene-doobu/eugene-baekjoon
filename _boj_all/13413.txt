const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `3
5
WBBWW
WBWBW
7
BBBBBBB
BWBWBWB
4
WWBB
BBWB`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

const n = +input();

for(let i=0; i<n; i++){
    let num = +input();
    let curr = input();
    let goal = input();
    let defW = 0;
    let defB = 0;
    for(let j=0; j<num; j++){
        if(goal[j] == 'W' && curr[j] == 'B') defW++;
        if(goal[j] == 'B' && curr[j] == 'W') defB++;
    }
    console.log(Math.min(defW, defB) + Math.abs(defB-defW));
}