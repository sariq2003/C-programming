#include <stdio.h>

int main()
{
    int arr[25];
   
    printf("Enter 25 Intergers in Array: ");
    for (int i = 0; i < 25; i++)
        scanf("%d ",&arr[i]);
   

    printf("\nArray of 25 Intergers as: ");

    for(int i = 0;i<25;i++)
        printf(" %d ",arr[i]);
       
    
        int  oddCount=0,evenCount=0,posCount=0,negCount=0, i=0;
    while(i<25)
    {
        if(arr[i]%2!=0)
            oddCount++;

        if(arr[i]%2==0)
            evenCount++;

        if(arr[i]<0)
            negCount++;

        if(arr[i]>=0)
            posCount++;

    i++;
        
    }
    
    printf(  "Odd = %d \n"
             "Even = %d\n" 
             "Positive = %d\n" 
            "Negative = %d\n",oddCount,evenCount,posCount,negCount);

    // printf(" Total Odd Even Positive Negative Elements in Given Array as:\n odd_Element = %d 
    //     even_Element = %d positive_Element = %d negative_Element = %d")

    
    return 0 ;

}