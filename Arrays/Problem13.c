#include<stdio.h>
#include<math.h>

int main()
{
 
    float arr_of_x[10];
    float arr_of_y[10];

    float distance =0;

    printf("Enter Coordinates  values of x and y for 10 points\n");
    for(int i=0; i<10; i++)
        scanf("%f %f",&arr_of_x[i],&arr_of_y[i]);

    printf("Values of x and y coordinates for 10 points are: \nx  y\n");
    
    for (int i = 0; i < 10; i++)
        printf("%.1f , %.1f\n",arr_of_x[i],arr_of_y[i]);

    
    for (int i = 0; i < 9; i++)
    {
        float dx= arr_of_x[i+1] - arr_of_x[i];
         float dy= arr_of_y[i+1] - arr_of_y[i];

        distance += sqrt(( dx*dx + dy*dy));
    }
    printf("Sum of distances of all consective points is %.1f",distance);
    

   
    return 0;
}