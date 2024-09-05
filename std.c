#include <stdio.h>

int main() 
{
    char first_name[50];
    char second_name[50];
    printf("Enter First Name");
    scanf("%s",first_name );
    
    printf("Enter Second Name");
    scanf("%s",second_name );

    printf("Your First name is %s\n", first_name);
    printf("Your Second name is %s\n", second_name);
    return 0;
}
