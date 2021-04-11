const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `100 99 1000000000`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

let nums = input().split(" ").map(Number);
let lastup = nums[0];
let down = nums[1];
let goal = nums[2] - lastup;

if(goal <= 0){
    console.log(1);
} else{
    let up = lastup - down;
    console.log(Math.ceil(goal/up) + 1);
}


