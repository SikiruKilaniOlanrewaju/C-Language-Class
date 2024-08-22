#include <stdio.h>

int main() 
{
    float first_num;
    float second_num;
    float ans;

    printf("Enter the first number\n");
    scanf("%f", &first_num);

    printf("Enter the Second number\n");
    scanf("%f", &second_num);

    ans = first_num + second_num;
    printf("Addition of those numbers is %f \n",ans);

    return 0;
}
