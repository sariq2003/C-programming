#include<stdio.h>

int main()
{   

 int arr[25] = { 15,89,36,46,522,556,3,56,48,49,77,45,8,785,56,58,6,8,17,
                100,45,79,88,79,26 };

    int *p;
     p=arr;

     int min=*p;
    for(int i=1; i < 25; i++)
    {
        if(min > *(p+i))
            min=*(p+i);
    
    }
   printf("Smallest number in array is %d",min);

    return 0;
}