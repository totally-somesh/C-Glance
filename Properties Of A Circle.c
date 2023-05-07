#include <stdio.h>
#define PI 3.14

void main()
{
    
    int radius;
    int choice;
    float area, circumference, volume;
    
    printf("Please Enter Radius Of The Circle.\n");
    scanf("%d",&radius);
    
    printf("Please Enter The Valid Choice - 1: Area Of Circle  2: Circumference Of Circle  3: Volume Of Sphere\n");
    scanf("%d",&choice);
    
    switch (choice)
    {
        case 1 :
        area = PI*radius*radius;
        printf("Area Of Circle : %f",area);
        break;
        
        case 2 :
        circumference = 2*PI*radius;
        printf("Circumference Of Circle : %f",circumference);
        break;
        
        case 3 :
        volume = 4*PI*radius*radius*radius/3;
        printf("Volume Of Sphere : %f",volume);
        break;
        
        default :
        printf("Invalid Choice.");
        break;
        
    }
}
