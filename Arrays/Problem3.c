#include<stdio.h>

int findOccurence (int [], int size,int Element);
int main ()
{
    int arr[10] = {5,78,96,15,5,78,69,5,45,530};
    int Key_Element;
    int counter;

    printf("Enter Key_Element for Searching: ");
    scanf("%d",&Key_Element);
   
    counter=findOccurence(arr,10,Key_Element);
        
    if(counter>0)
    printf("Key Element %d occur %d Times in Array",Key_Element,counter);
    else
    printf("Key Element not present in Array");
    
    return 0;
    
}
 
int findOccurence(int arr[], int size, int Element){
    
    int i = 0;
    int counter =0;
    while (i<10)
    {
       if(arr[i]==Element)
          counter++;
          i++;

    }
    return counter;

}