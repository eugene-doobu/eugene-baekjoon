function solution(a, b) {
    let rst = 0;
    for(let i=0; i<a.length; i++){
        rst += a[i] * b[i];
    }
    return rst;
}