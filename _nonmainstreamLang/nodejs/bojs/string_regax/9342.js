const fs = require('fs');
const stdin = (process.platform === 'linux'
        ? fs.readFileSync('/dev/stdin').toString()
        : `15
AFC
AAFC
AAAFFCC
AAFCC
BAFC
QWEDFGHJMNB
DFAFCB
ABCDEFC
DADC
SDFGHJKLQWERTYU
AAAAAAAAAAAAABBBBBBBBBBBBBBCCCCCCCCCCCCCCCCCCDDDDDDDDDDDEEEEEEEEEEEEEEEFFFFFFFFC
AAAFFFFFBBBBCCCAAAFFFF
ABCDEFAAAFFFCCCABCDEF
AFCP
AAFFCPP`
).split('\n');

const input = (() => {
    let line = 0;
    return () => stdin[line++];
})();

let n = parseInt(input());
for(let i=0; i<n; i++){
    let infec = /^(A|B|C|D|E|F)?A+F+C+(A|B|C|D|E|F)?$/.test(input());
    if(infec) console.log("Infected!")
    else console.log("Good");
}