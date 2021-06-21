function solution(answers) {
    let supo1 = [1,2,3,4,5];
    let supo2 = [2,1,2,3,2,4,2,5];
    let supo3 = [3,3,1,1,2,2,4,4,5,5];
    let correct= [0, 0, 0, 0];
    let max = 0;
    for(let i=0; i<answers.length; i++){
        if(answers[i] == supo1[i%supo1.length]) correct[1]++;
        if(answers[i] == supo2[i%supo2.length]) correct[2]++;
        if(answers[i] == supo3[i%supo3.length]) correct[3]++;
    }
    max = Math.max(correct[1], correct[2], correct[3]);
    
    let rst = [];
    for(let i=1; i<=3; i++){
        if(correct[i] == max) rst.push(i);
    }
    return rst;
}