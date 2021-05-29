const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `4
1 2
2 4
2 3
3 5
`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

const n = +input();
let arr = [];
for(let i=0; i<n; i++){
    arr.push(input().split(' ').map(Number));
}
arr.sort((a,b)=>{
    if(a[1] == b[1]) return a[0] - b[0];
    else return a[1] - b[1];
});

console.log(arr);

(()=>{
    let rst = 0;
    let preEnd = -1;
    arr.forEach((e)=>{
        if(e[0] >= preEnd){
            preEnd = e[1];
            rst++;
        }
    })
    console.log(rst);
})()