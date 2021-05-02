const fs = require('fs');
let str = '';

(function(){
    const inputs = (
        process.platform === 'linux'
            ? fs.readFileSync('/dev/stdin').toString().trim()
            : "<a><<a/>/a>"
    ).split('\n');

    for(let i=0; i<inputs.length; i++){
        let input = inputs[i];
        let stack = [];

        // Phase 1
        let rst = /<[^/a-z0-9]/.test(input);
        input = input.replace(/&(lt|gt|amp);/g, '');
        input = input.replace(/&x([a-fA-F0-9]{2})+;/g, '');

        // Phase 2
        input = input.replace(/<[a-z0-9]+\/>/g, '');
        input = input.replace(/<\/?[a-z0-9]+>/g, function (re){
            if(re.startsWith('</')){
                if(!(stack.pop() == re.replace(/[<>/]/g, ''))){
                    return "&";
                }
            } else{
                stack.push(re.replace(/[<>/]/g, ''))
            }
            return "";
        });

        // Phase 3
        rst |= /(<|>|&)/.test(input);

        if(rst || stack.length > 0)
            console.log("invalid");
        else
            console.log("valid");
    }
})();