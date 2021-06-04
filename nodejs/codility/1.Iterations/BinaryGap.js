function solution(N) {
    // write your code in JavaScript (Node.js 8.9.4)
    let gap = -1;
    let count = 0;
    while(N>0){
        if(N%2 == 1){
            gap = Math.max(gap, count);
            count = 0;
        }
        else if(gap>=0){
            count++;
        }
        N>>=1;
    }
    return gap;
}

console.log(solution(32));