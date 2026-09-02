#include<stdio.h>

int main()
{


 int arr[6] = {10,12,16,18,19,59};
    int temp=0;
    printf("Array elements Before  positions: ");
    
    for(int k= 0; k<=5 ;k++)
    {
        printf("%d ",arr[k]);
    }
    
    for(int i=0; i<5 ; i=i+2){
      
      temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
    }
    
    printf("\nArray elements after changing positions: ");   
    
     for(int j= 0; j<=5 ;j++)
    {
       printf("%d ",arr[j]) ;
    }
   
    return 0;

}