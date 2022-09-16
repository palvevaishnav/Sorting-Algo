#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return;
}

void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
    return;
}

void quicksort(int *a,int start,int len){
    int end=len -1;
    printf("%d %d ",end ,len);

    if( end<= 1){
        return;
    } 
    int m = (end+start)/2;

    while(start<end){
        while(a[m] > a[start]){
            start++;
        }
        while(a[m] < a[end]){
            end--;
        }

        if(start<end){
            swap(&a[end],&a[start]);
        }
        printarray(a,5);
    }

    quicksort(a,start,m-1);
    quicksort(a,m+1,end);
    return;


}


int main()
{
    int a[] = {5,6,3, 7,4};
    int l = sizeof(a) / sizeof(a[0]);
    printf("Before sorting\n");
    printarray(a, l);
    quicksort(a, 0, l);
    printf("\nAfter Sorting \n");
    printarray(a, l);
    return 0;
}


/*
void Quicksort(int number[25],int first,int last){
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
         i++;
         while(number[j]>number[pivot])
         j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);
   }
}
*/
