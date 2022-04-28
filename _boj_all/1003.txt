const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `4
0
1
2
5`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

let memo=[[1,0], [0,1]];
let t = +input();
for(let i=0; i<t; i++){
    let n = +input();
    for(j=2; j<=n; j++){
        memo[j] = [0,0];
        memo[j][0] = memo[j-1][0] + memo[j-2][0];
        memo[j][1] = memo[j-1][1] + memo[j-2][1];
    }
    console.log(memo[n][0]+' '+memo[n][1]);
}