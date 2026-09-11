// Insertion sort for set of 25 numbers

#include<stdio.h>

void insertionSort(int arr[], int n){

    int key;
    for (int i = 1; i < n; i++)
    {
       key =arr[i];
       int j=i-1;
       while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
       }
        arr[j+1]=key;
        
    }
    
}

void printArray(int arr[], int n){

    printf("Array after sorting: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}



int main()
{
    int arr[]={ 15,25,36,45,11,
                23,54,78,96,99,
                45,100,110,125,130,
                200,230,450,20,2,
                151,900,980,700,450
    };

    int n = sizeof(arr)/sizeof(arr[0]);
   insertionSort(arr,n);
   printArray(arr, n);


    return 0;
}