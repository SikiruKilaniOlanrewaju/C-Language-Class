#include <stdio.h>
#define pi 3.142

int main() 
{
    float radius;
    float area_of_cirlcle;

    printf("Enter the radius\n");
    scanf("%f", &radius);

    area_of_cirlcle = pi * radius *radius;
 
    printf("The area of Circle calculated is %f \n",area_of_cirlcle);

    return 0;
}
