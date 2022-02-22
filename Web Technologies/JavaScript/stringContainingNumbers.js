let input = ["Aud1i", "BMW2", "Mercedes","Volvo","Nissan","Renault","Suzuki","Kia","Ford"]
const pattern = /\d/;


function checkNumber(input){
    let output = []
    for(let i in input){
        if(pattern.test(input[i])){
            output.push(input[i]);
        }
    }
    return output;
}


console.log(checkNumber(input));