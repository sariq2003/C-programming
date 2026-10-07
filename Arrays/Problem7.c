#include <stdio.h>

int main()
{
  
   
    int arr[9] = {15,6,9,2,236,56,17,19,-18};
 
        printf("Array before sorting: ");
       for(int i =0; i<=9-1; i++)
          { 
            printf("%d ",arr[i]);
          }

          int temp=0;
    
        for(int i=0 ; i<=9-1-1; i++){

            for (int  j = i+1; j <=9-1; j++)
            {
                    if(arr[i]>arr[j]){
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }

            }
            
        }

        printf("\nArray after sorting  : ");
        for(int i =0; i<=9-1; i++)
            printf("%d ",arr[i]);
     

    return 0 ;

}