#include<stdio.h>
# define SIZE 9

int main()
{

    int arr[SIZE] = { 1,2,3,4,5,4,78,2,1 };

    int mid=SIZE/2;
    int is_Symmetrical = 1;
    for (int i = 0; i <= mid; i++)
    {
        if(arr[i]!=arr[SIZE-i-1]){
            is_Symmetrical=0;
            break;
        }
    
    }

    printf("ARRAY:-> ");
    for (int j = 0; j <= SIZE-1; j++)
    {
       printf("%d ",arr[j]);
    }
    

        if (is_Symmetrical)
                printf("\nArray is Symmetrical");
        else
         printf("\nArray is not Symmetrical");


        
    

    return 0;
}