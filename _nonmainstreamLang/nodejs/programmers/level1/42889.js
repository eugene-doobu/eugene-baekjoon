// not yet
function solution(N, stages) {
    let answer = [];
    let failper = [];
    let currN = stages.length;

    for(let i=1; i<=N; i++){
        let failN = stages.reduce((acc, cur)=>{
            if(cur == i) acc+=1;
            return acc;
        }, 0);
        failper.push(failN/currN);
        currN -=failN;
    }
    let sortedFailPer = [...failper].sort((a,b)=>b-a);
    sortedFailPer.forEach((e)=>{
        if(answer.includes(failper.indexOf(e)+1)){
            let n = 1;
            while(answer.includes(failper.indexOf(e)+n)){
                n +=1;
            }
            answer.push(failper.indexOf(e)+n);
        }
        else answer.push(failper.indexOf(e)+1);
    })
    return answer;
}

console.log(solution(4, [4, 4, 4, 4]	));
