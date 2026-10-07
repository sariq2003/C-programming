#include<Stdio.h>
#include<math.h>

int main(){
float arr[6],a,b,angle;

printf("Enter two sides (a,b) and angle between them for 6 plots :\n");
for (int i = 0; i < 6; i++)
{
    scanf("%f %f %f",&a,&b,&angle);
    arr[i]= 0.5*((a*b)*sin(angle));

}
printf("Area of 6 plots are:\n");
for (int i = 0; i < 6; i++)
{
   printf("%f\n",arr[i]);
}

float largest = arr[0],temp;
printf("Just after largest=arr[0] = %f\n",largest);

for (int j = 1; j < 6; j++)
{
    if(largest < arr[j]){
       temp =  largest;
       largest = arr[j];
       arr[j] = temp;
    }
}

printf("Largest Area of plot among 6 plots is %f",largest);

return 0;
}

