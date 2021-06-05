/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
    x = x+"";
    let isNagative = x[0] == '-' ? true : false;
    if(isNagative){
        x=x.slice(1,x.length);
    }
    let y = "";
    for(let i=1; i<=x.length; i++){
        y+= x[x.length-i];
    }
    if(y > 2147483648) return 0;
    return isNagative ? '-'+y : y;
};

/*
const reverse = x => {
    const limit = 2147483648;
    const k = x < 0 ? -1 : 1;
    const n = Number(String(Math.abs(x)).split('').reverse().join(''));
    return n > limit ? 0 : n * k;
};
*/