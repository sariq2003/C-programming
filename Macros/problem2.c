#include<Stdio.h>
#include"areaperi.h"

int main()
{
   
  float b,h;
  float area;
 printf("Enter three sides/length,breath of triangle for Area and perimeter calculation\n");
 scanf("%f %f",&b,&h);
 area=AREAOFTRIANGLE(b,h);
 printf("Area of triangle of %f and %f is %f",b,h,area);


 
 
    return 0;

}