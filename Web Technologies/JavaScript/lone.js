const readline = require('readline').createInterface({
  input: process.stdin,
  output: process.stdout
});

function countLoneOnes(number){
	let count = 0;
	for(let i= 0 ; i < number.length;){
		if(number[i] === "1" && number[i+1]!= number[i]){
			count++;
			i++;
		}
		else{
			i++;
		}
	}
	return count;
	
}
readline.question('Enter the number?', (number) => {
  console.log(`"Lone One's count:" ${countLoneOnes(number)}`);
  readline.close();
});
