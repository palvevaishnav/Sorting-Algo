// Cyclic sorting.....
//  for numbers which are in the range from 1 to N .
//  After sorting ->   index=value-1 or value = index +1 


#include<stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return ;
}

void cyclicsort(int* arr,int n){
    //int n;
    // n = sizeof(arr) / sizeof(int);
    int i=0;
    printf("\nThe sorted array is:\n");
    while(i<n){
        if( i != arr[i]-1){
            swap(&arr[i],&arr[(arr[i]-1)]);
        }
        else{
            i = i+1;
        }
    }

    for(int i=0;i<n;i++){
            printf(" %d",arr[i]);
    }

    return ;

}

int main(){
    int arr[]={5,7,3,1,4,6,2};
    int n;
    n = sizeof(arr) / sizeof(int);
    cyclicsort(arr,n);
    
    return 0;


}
