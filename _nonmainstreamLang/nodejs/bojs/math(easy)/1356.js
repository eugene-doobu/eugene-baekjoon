const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `6`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

const answer = (() => {
    // 한자리수인경우 NO로 판단하는듯
    if(t.length == 1){
        console.log("NO");
        return;
    }

    var backSum = [parseInt(t[t.length -1])];

    for(var i=t.length-2; i>0; i--){
        backSum.push(parseInt(t[i]) * backSum[t.length -i -2]);

        if(frontSum.pop() == backSum[t.length -i -2]){
            console.log("YES");
            return;
        }
    }
    if(frontSum.pop() == backSum[backSum.length-1]){
        console.log("YES");
        return;
    }
    console.log("NO");
})

let t = input();
var frontSum = [parseInt(t[0])];

for(var i=1; i<t.length-1; i++){
    frontSum.push(parseInt(t[i]) * frontSum[i-1]);
}

answer();