#include <stdio.h>

void main()
{
    
    int a,b,c;
    int result, choice;
    float quo, rem;
    
    printf("Please Enter The Numbers.\n");
    scanf("%d %d",&a,&b);
    
    printf("Please Enter The Valid Choice - 1: Equality Check  2: Less Than Check  3: Quotient & Remainder  4: Range  5: Swapping\n");
    scanf("%d",&choice);
    
    switch (choice)
    {
        case 1 :
        if(a == b)
        { 
            printf("Here, Entered Numbers : %d %d Are Equal.",a,b);
        }
        else
        {
            printf("Here, Entered Numbers : %d %d Are Not Equal.",a,b);
        }
        break;
        
        case 2 :
        if(a < b)
        {
            printf("Here, %d Is Less Than %d.",a,b);
        }
        else if (a > b)
        {
            printf("Here, %d Is Less Than %d.",b,a);
        }
        break;
        
        case 3 :
        quo = a/b;
        rem = a%b;
        printf("Here, Quotient : %f & Remainder : %f",quo,rem);
        break;
        
        case 4 :
        printf("Please Enter A Number.\n");
        scanf("%d",&c);
        if(a <= c && c <= b)
        {
            printf("The Number %d Is In The Range Of %d & %d.",c,a,b);
        }
        else 
        {
            printf("The Number %d Is Not In The Range Of %d & %d.",c,a,b);
        }
        break;
        
        case 5 :
        a = a+b;
        b = a-b;
        a = a-b;
        printf("Here, Swapped Numbers Are : %d %d",a,b);
        break;
        
        default :
        printf("Invalid Choice.");
        break;
        
    }
}
