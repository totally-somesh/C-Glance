#include<stdio.h>

void main()
{
    int a,b,c, sum;
    
    printf("Enter 3 Angles Of A Triangle.\n");
    scanf("%d %d %d",&a, &b, &c);
    
    sum = a+b+c;
    
    if((a > 0) && (b > 0) && (c > 0) && (sum == 180))
    {
        printf("It Is A Valid Triangle.");
    }  
    else
    {
        printf("It Is Not A Valid Triangle.");
    }
    
}
   


