// you can write to stdout for debugging purposes, e.g.
// console.log('this is a debug message');

function solution(A) {
    // write your code in JavaScript (Node.js 8.9.4)
    let tmp = {};
    A.forEach((e)=>tmp[e] = !tmp[e] || false);

    let idx = -1;
    Object.values(tmp).forEach((e)=> {
        if(e===true){
            idx = Object.values(tmp).indexOf(e);
        }
    });
    return +Object.keys(tmp)[idx];
}

console.log(solution([9,3,9,3,9,7,9]));