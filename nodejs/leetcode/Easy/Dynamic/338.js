/**
 * @param {number} n
 * @return {number[]}
 */
var countBits = function(n) {
    let rst = [0];
    for(let i=1; i<=n; i++){
        let tmpI = i;
        let count = 0;
        while(tmpI>0){
            if(tmpI%2 ==1){
                count++;
            }
            tmpI>>=1;
        }
        rst.push(count);
    }
    return rst;
};

console.log(countBits(5));