#include <stdio.h>
int add_two_numbers(int a, int b){
return a+b;
}

int main(){
    int num1;
    int num2;
    printf("Enter the first number");
    scanf("%d", &num1);
    printf("Enter the second number");
    scanf("%d", &num2);
    printf("The Sum is: %d", add_two_numbers(num1, num2));
return 0;
}