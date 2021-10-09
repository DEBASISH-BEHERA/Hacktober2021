const readline = require("readline").createInterface({ input: process.stdin, output: process.stdout });

function pascaltriangle (){
    readline.question("Enter Number of rows: \n", function(num){
        x = Number(num);
        if (num == NaN){
            pascaltriangle();
        } else {
            var a = [];
            for (let i=0; i<=x; i++){
                a.push([1]);
                for (let j=0; j<i-1; j++){
                    a[i].push(a[i-1][j] + a[i-1][j+1]);
                }a[i].push(1);
            } s = "";
            for (let i=0; i<x; i++){
                s += "  ".repeat(a.length-i-2);
                for (let j=0; j<i+1; j++){
                    s += a[i][j] + "   ";
                } s += "\n\n";
            } console.log(s);
        }
    });
}
pascaltriangle()