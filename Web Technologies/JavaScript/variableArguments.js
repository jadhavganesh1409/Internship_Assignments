const values = [1,22,32,441,57];

function multiply(number){
	let product =1;
	while(number != 0){
		product = product*(number%10);
		number = Math.floor(number/10);
	}
	return product;
}
function operations(...inputs){
	let sum =  0;
	inputs.forEach(input => {
		sum+=input;
	});
	let res = multiply(sum);
	while(res.toString().length !=1){
		res = multiply(res);
	}
	return res;
}

//operations(...values);
console.log(`Final Product: ${operations(...values)}`);
