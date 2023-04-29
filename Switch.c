#include <stdio.h>

void main()
{
    
    int a,b;
    char operator;
    int result;
    
    printf("Please Enter The Numbers & A Character ( + - * / ).\n");
    scanf("%d %d %c",&a,&b,&operator);
    
    switch (operator)
    {
        case '+' :
        result = a+b; 
        printf("Addition : %d",result);
        break;
        
        case '-' :
        result = a-b; 
        printf("Subtraction : %d",result);
        break;
        
        case '*' :
        result = a*b; 
        printf("Multiplication : %d",result);
        break;
        
        case '/' :
        result = a/b; 
        printf("Division : %d",result);
        break;
        
        default :
        printf("Invalid Choice.");
        break;
        
    }
}
