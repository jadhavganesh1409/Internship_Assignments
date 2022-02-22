let input = [3, 7, 3, 2, 1, 5, 1, 2, 2, -2, 2];


function boomerangs(input){
    let output = [];
    for(let i = 0;i < input.length-2 ;){
        let attachToOutput = []
        if(input[i] == input[i+2] && input[i+1] != input[i]){
            attachToOutput=[input[i],input[i+1],input[i+2]];
            output.push(attachToOutput);
            i++;
        }
        else{
            i++;
        }
    }
    return output;
}

let printOutput = boomerangs(input);
console.log(`Total No. of Boomerangs: ${printOutput.length}`);
// Bommerangs
for(let out = 0; out < printOutput.length ; out++){
    console.log(printOutput[out]);
}

