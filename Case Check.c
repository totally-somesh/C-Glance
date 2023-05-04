#include<stdio.h>

void main()
{
    char ch;
    
    printf("Enter A Character.\n");
    scanf("%c",&ch);
    
    if(65 <= ch && ch <= 90)
    {
        printf("It Is An Uppercase Character");
    }  
    else if (97 <= ch && ch <= 122)
    {
        printf("It Is A Lowercase Character.");
    }
    
}
   



