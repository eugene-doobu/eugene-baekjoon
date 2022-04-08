function solution(arr) {
    if(arr.length == 1) return [-1];
    let min = Math.min.apply(null, arr);
    let idx = arr.indexOf(min);
    arr.splice(idx,1);
    return arr;
}