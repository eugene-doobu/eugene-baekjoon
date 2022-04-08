function solution(array, commands) {
    var answer = [];
    for(let t=0; t<commands.length; t++){
        let [i, j, k] = commands[t];
        answer.push(array.slice(i-1,j).sort((a,b)=>a-b)[k-1]);
    }
    return answer;
}

console.log(solution([1, 5, 2, 6, 3, 7, 4], [[2, 5, 3], [4, 4, 1], [1, 7, 3]]));