
#include<stdio.h>

void modify (int arr[], int size){

for(int i=0; i<size; i++){

    arr[i] = arr[i]*3;
}

}



int main()
{

    int arr[] = {10,25,20,2,6,50,30,90,80,40};
    int size = sizeof(arr)/sizeof(arr[0]);
    modify(arr, size);
    printf("Array after multiplying 3 with each element:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    



    return 0;
}