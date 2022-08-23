// Inseretion Sorting.....
/*
-> for every index i , put a[i] at the correct index 
-> On every i'th pass the array will be sorted till that i'th  index.
*/


#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;

    return;
}

void InsertionSort(int *a,int l){

    /*
        in this method we check adjacent elements ,if the are greater or small and then replace them accordingly.
        first run a for loop to.
    */
   if(l==0){
    printf("No array ! enter an array please\n");
    // main();
   }
   else{

   for(int i=0;i<l-1;i++){
        for(int j=i+1;j>0;j--){
            if(a[j]<a[j-1]){
                swap(&a[j],&a[j-1]);
            }
            else{
                break;
            }
        }
    }
    }
    printf("The sorted array is: \n");
    for(int i=0;i<l;i++){
        printf(" %d",a[i]);
    }



    return;
}

void random(int *array,int l){
    for(int i=0;i<l;i++){
        array[i]=rand()%100;
    }
}

int main(){
    int array[]={1,-23,-4,56,-890,432804,85,0,-17,3};
    int l=10;
    // printf("Enter the length of array :");
    // scanf("%d", &l);
    // random(array,l);

    InsertionSort(array,l);

}