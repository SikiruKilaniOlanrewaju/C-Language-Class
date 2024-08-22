#include <stdio.h>

int main()
{

    int num;
    printf("Enter the Student Score");
    scanf("%d", &num);

    if (num >= 75 && num <= 100)
    {
        printf("The grade is A\n");
    }
    else if (num >= 70 && num <= 74)
    {
        printf("The grade is AB \n");
    }
     else if (num >= 65 && num <= 69)
    {
        printf("The grade is B \n");
    }
        else if (num >= 60 && num <= 64)
    {
        printf("The grade is BC \n");
    }
        else if (num >= 55 && num <= 59)
    {
        printf("The grade is C \n");
    }
        else if (num >= 50 && num <= 54)
    {
        printf("The grade is CD \n");
    }
        else if (num >= 45 && num <= 49)
    {
        printf("The grade is D \n");
    }
        else if (num >= 40 && num <= 44)
    {
        printf("The grade is E \n");
    }
    
    else
    {
        printf("The grade is F \n");
    }

    return 0;
}