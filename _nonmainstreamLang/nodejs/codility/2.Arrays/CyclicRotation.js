// you can write to stdout for debugging purposes, e.g.
// console.log('this is a debug message');

function solution(A, K) {
    // write your code in JavaScript (Node.js 8.9.4)
    let rst = [];
    let cnt = A.length;
    for(let i=0; i<cnt; i++){
        rst[(i+K)%cnt] = A[i];
    }
    return rst;
}

console.log(solution([3, 8, 9, 7, 6], 3));