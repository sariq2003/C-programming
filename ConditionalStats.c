#include<stdio.h>
int main(){

float basic_Salary, HRA, DA, Gross_Salary;

printf("Enter Basic Salary\n");
scanf("%f",&basic_Salary);

if(basic_Salary < 1500)
{
    HRA = basic_Salary*(10.0/100);
    DA = basic_Salary*(90.0/100);
}
else
{
   HRA = 500.0;
   DA = basic_Salary*(98.0/100);
}

Gross_Salary = basic_Salary + HRA+ DA;

printf("Gross Salary of Employee = %.2f",Gross_Salary);

return 0;
}