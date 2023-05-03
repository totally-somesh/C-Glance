#include<stdio.h>

void main()
{
    int salary;
    float pf, tax, hra, da;
    
    printf("Please Enter The Salary.\n");
    scanf("%d",&salary);

    pf = 2*salary/100;
    tax = 3*salary/100;
    hra = 5*salary/100;
    da = 8*salary/100;
    
    float netSalary;
    
    netSalary = salary - pf - tax - hra - da; 
    
    printf("Net Salary :%lf\n",netSalary);
    
}
   


