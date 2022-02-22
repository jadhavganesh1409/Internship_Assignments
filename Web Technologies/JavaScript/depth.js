var depth = 1;

function findDepth(arr){
	for(let i = 1 ;i< arr.length; i++){
		if(typeof arr[i] == "object"){
			depth++;
			findDepth(arr[i]);
		}
		break;
	}
	return depth;
}

inputArr = [1, [2,[3,5]]];
console.log(`Depth: ${findDepth(inputArr)}`);
