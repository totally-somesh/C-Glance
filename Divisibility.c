#include<stdio.h>

void main()
{
    int a;
    
    printf("Enter An Integer :\n");
    scanf("%d",&a);
    
    if((a%5==0) && (a%7==0))
    {
        printf("Entered Integer : %d Is Divisible By 5 & 7.\n",a);
    }
    else
    {
        printf("Entered Integer : %d Is  Not Divisible By 5 & 7.\n",a);
        
    }
    
}
   


