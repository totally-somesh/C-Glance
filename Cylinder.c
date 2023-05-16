#include<stdio.h>

#define PI 3.14

void main()
{
    float radius, height, area, volume;
    
    printf("Please Radius & Height Of The Cylinder.\n");
    scanf("%f %f",&radius, &height);

    area = 2*PI*radius*radius + 2*PI*radius*height;
    
    volume = PI*radius*radius*height;
    
    printf("Surface Area :%f\n",area);
    
    printf("Volume :%f\n",volume);
    
}
   


