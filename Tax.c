#include<stdio.h>

void main()
{
    int salary;
    
    printf("Enter The Salary :\n");
    scanf("%d",&salary);
    
    if(salary <= 150000)
    {
        float tax;
        tax = 0;
        printf("For The Salary : %d, Tax : %f \n",salary,tax);
    }
    else if(150000 > salary < 300000)
    {
        float tax;
        tax = 20*salary/100;
        printf("For The Salary : %d, Tax : %f \n",salary,tax);
    }
    else if(salary >= 300000)
    {
        float tax;
        tax = 30*salary/100;
        printf("For The Salary : %d, Tax : %f \n",salary,tax);
    }
    
}
   


