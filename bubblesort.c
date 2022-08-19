    // https://www.geeksforgeeks.org/bubble-sort/
	    // when we use a single for loop the greatest element in the array is tracked 
		// and is positioned at the end ! dont know why ?
		// but to sort the whole array we will have to repeat this process as much as (size-1-i) times 
		// ie every time the greatest element will be swapped in the end of the array 
		// and we will reduce the last position every time by using "-i" in the condition.
		// and when we reach the length we will return the array.

#include<stdio.h>
#include<stdlib.h>

//Function to generate a random array
void generate(int *a,int n){
	for(int i=0;i<n;i++){
		a[i]=rand()%100;
	}
	return;
}

void swap(int *big,int *small){
    // using pointers so that we can call by referance and it will be easy to return the values as \
    our return type is void for both the functions.
    int temp = *big;
    *big=*small;
    *small=temp;
    return;
}

void bubble(int *arr,int arrlen){
    // the function will use a simple swap technique
    // the array need to be traveled twice
    for(int i=0 ; i < arrlen-1 ; i++){
        // we are subtracting 1 from the  termination condition so that when the loop is working on the last position it stops there and \
        we can avoid the out of bount error 
        for(int j=0 ; j < (arrlen-i) -1 ;j++){
            // here in the condition of this loop by subtracting the i from the length we are ignoring the last element \
            and our loop will end before unnecessarily  processing the sorted region again 
            if(arr[j] > arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
            // every time this loop (j) ends the loop processing region is reducced  by one..
        }
    }

    return;

}

int main(){
    // an array which has to be sorted 
    //int array[]={12,5,0,6,9,48,1,2,36,4,8,6};
    // instead of passing an array manually let us create a random array;
	int *array;
	int arrlen=0;
	printf("Enter the length of array to be generated randomly:");
	scanf("%d",&arrlen);
	generate(array,arrlen);
	printf("The random array created is: \n");
	for(int i=0;i<arrlen;i++){
		printf(" %d",array[i]);
	}
	  
    // we will need te lenngth of that array to perrform sortinng so
    //arrlen= sizeof(array) / sizeof(array[0]);

    // will pass this array and its length to a sorting function
    bubble(array,arrlen);

    // now we have  a sorted array ,so we will print it,
	printf("the sorted array is:\n");
    for(int i=0;i<arrlen;i++){
        printf(" %d ",array[i]);

    }

	return 0;
}

