#include<stdio.h>

int main()
{


 int arr1[5] = {12,16,18,19,59};
   int arr2[5];

 printf("Elements of Array 1: ");
 
 for(int i= 0; i<=4 ; i++){
     printf("%d ",arr1[i]);
 }
   
printf("\nElements in Reverse order: ");

 for(int i = 0; i <= 4; i++)
 {
    arr2[i] = arr1[4-i];
 }
 
 for (int i = 0; i <=4 ; i++)
 {
    printf("%d ",arr2[i] );
 }
 


       return 0;

}