
// Using the Bubble sort agorithm to sort the array.

let array=[19,84,2,16,53,24,20,10,67,13,30,64];				
let sorted=bubblesort(array);
console.log(sorted);

function bubblesort(array){
	let size=array.length;
		
	// for sorting we will have to travel the array from 0 th position to the last position
	for(let i=0;i<size;i++){
		// when we use a single for loop the greatest element in the array is tracked 
		// and is positioned at the end ! dont know why ?
		// but to sort the whole array we will have to repeat this process as much as (size-1-i) times 
		// ie every time the greatest element will be swapped in the end of the array 
		// and we will reduce the last position every time by using "-i" in the condition.
		// and when we reach the length we will return the array.
		for(let j=0;j<size-1;j++){
			// now swap applying the greater than condition.
			if(array[j]>array[j+1]){
				let temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}	
	}
	return array;
}
