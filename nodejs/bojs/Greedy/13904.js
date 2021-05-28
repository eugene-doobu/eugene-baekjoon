const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `7
4 60
4 40
1 20
2 50
3 30
4 10
6 5
`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

let n = Number(input());
let arr = [];
let removed = [];
let rst = 0;
for(let i=0; i<n; i++){
    arr.push(input().split(' ').map(Number));
}
arr.sort(function (a, b){
    return b[1] - a[1];
})

arr.forEach(function (e){
    for(let i=e[0]; i>0; i--){
        if(removed[i] !== 1){
            removed[i] = 1;
            rst += +[e[1]];
            break;
        }
    }
})
console.log(rst);