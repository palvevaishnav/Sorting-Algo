#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
    linear search
    binary search
    bubble sort
    INSERTION SORT
    SELECTION SORT
    MERGE SORT
    QUICK SORT
*/


void rando(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%10;
    }
    return;
}
void printa(int *a,int n){
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
    printf("\n");
    return ;
}
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    return;
}
void bubble(int *a,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }

    }
    printa(a,n);
}
int linearsearch(int *a,int n,int t){
    for(int i=0;i<n;i++){
        if(a[i]==t){
            return i;
        }
    }

    return -1;
}
int binary(int *a,int s,int e,int t){
    if(e>=1){
        int m=(s+e)/2;
        if(a[m]==t){
            return m;
        }
        else if(a[m]>t){
            return binary(a,s,m-1,t);
        }
        else{
            return binary(a,m+1,e,t);
        }
    }

    return -1;
}
void insertion(int *a,int n){
    if(n==0){
        return ;
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j>0;j--){
            if(a[j]<a[j-1]){
                swap(&a[j],&a[j-1]);
            }
            else{
                break;
            }
        }
    }
    return;

}
void selection(int *a,int n){
    //Find minimum element swap with first element inn the array
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(a[mini]>a[j]){
                mini=j;
            }
            if(mini != i){
            swap(&a[i],&a[mini]);
        }
        }
        
    }
    return;
}
void merge(int *a,int s,int m,int e){
    int n1=m-s+1;
    int n2=e-m;

    int l[n1],r[n2];
    for(int i=0;i<n1;i++){
        l[i]=a[s+i];
    }
    for(int i=0;i<n2;i++){
        r[i]=a[m+1+i];
    }
    int i=0,j=0,k=s;
    while(i<n1 && j<n2){
        if(l[i]<r[j]){
            a[k]=l[i];
            i++;
        }
        else{
            a[k]=r[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        a[k]=l[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=r[j];
        j++;
        k++;
    }

    return;

}
void mergesort(int *a,int s,int e){
    if(s<e){
        int m=(s+e)/2;
        mergesort(a,s,m);
        mergesort(a,m+1,e);

        merge(a,s,m,e);
    }
}
int partition(int array[], int low, int high) {
  
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}
void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high);
    
    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);
    
    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

int main(){
    int a[]={7,6,5,4,3,2,1};
    int n=7;
    // int n=0;
    printf("Enter the length of array:");
    // scanf("%d",&n);
    // int a[n];
    // rando(a,n);
    printf("\nThe Array inputed is :\n");
    printa(a,n);
    // x=linearsearch(a,n,t);
    // bubble(a,n);
    // binary(a,0,n,t);
    // insertion(a,n);
    // selection(a,n);
    // mergesort(a,0,n-1);
    // quickSort(a,0,n);
    printf("The sorted array is:\n");
    printa(a,n);
    
    return 0;
}



