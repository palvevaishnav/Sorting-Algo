#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  int n=0;
  printf("\nEnter thje number of elements you want to add in the array:");
  scanf("%d",&n);
  int a[n];
  int i=0;
  printf("\nEnter the numbers:");
  while(i< n){
    printf("Enter the %d th number:",i+1);
    scanf("%d",&a[i]);
    i++;
  }
  




}
