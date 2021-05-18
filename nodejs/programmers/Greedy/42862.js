function solution(n, lost, reserve) {
    n -= lost.length;
    let _lost = [];

    lost.forEach((lst) => _lost.push(lst));
    _lost.forEach(function (lst){
        if(reserve.includes(lst)){
            reserve.splice(reserve.indexOf(lst),1);
            lost.splice(lost.indexOf(lst),1);
            n+=1;
        }
    })

    lost.forEach(function(lst){
        let removed;
        if(reserve.includes(lst)) removed = lst;
        else if(reserve.includes(lst-1)) removed = lst-1;
        else if(reserve.includes(lst+1)) removed = lst+1;
        if(removed){
            reserve.splice(reserve.indexOf(removed),1);
            n+=1;
        }
    })
    return n;
}

console.log(
    solution(5, [1, 2, 3], [2, 3, 4])
);
