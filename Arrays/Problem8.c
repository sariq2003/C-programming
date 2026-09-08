#include <stdio.h>
void modify(int *p, int n);
int main(){

    int arr[]={5,6,10,20,25,15,12,11,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    modify(arr,n);

    printf("Array after multiplying each element with 3: ");
    for(int i =0; i<=n-1; i++)
        printf("%d ",arr[i]);

    return 0;
}

void modify(int *p, int n){
    for(int i=0; i<=n-1; i++)
    {
        *(p+i) =  (*(p+i))*3;
    }

}