// implementation of insertion sort
#include<stdio.h>

void insertionSort(int arr [], int n){
    int key;
    
    for(int i =1; i<n; i++)
    {
       key = arr[i];

       int j =i-1;
         while(j>=0 && arr[j]>key)
       {
                arr[j+1] = arr[j];
                j=j-1;
       }

        arr[j+1]=key;
    }
}

void printArray(int arr[],int n){

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

int main()
{
    int arr[] = {5,7,2,12,1,6};

    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,n);
        printArray(arr,n);


    return 0;
}