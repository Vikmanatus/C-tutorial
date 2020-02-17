#include <stdio.h>
#include <stdlib.h>

int main()
{
    double number1;
    double number2;

    printf("Enter the first number: ");
    scanf("%lf", &number1);

    printf("Enter the second number: ");
    scanf("%lf", &number2);

    printf("Answer: %f\n", number1 + number2);
    return 0;
}