#include <stdio.h>

int main()
{

    char operator;
    double first, second, result;
    printf("Enter the operator ( + , - , * , / ) you will use:");
    scanf("%c", &operator);

    printf("Enter the numbers you will use\n");
    printf("First:");
    scanf("%lf", &first);   
    printf("Second:");
    scanf("%lf", &second);

    switch (operator)
    {
    case '+':
        printf("%lf + %lf = %lf", first, second, first + second);
        break;
    case '-':
        printf("%lf - %lf = %lf", first, second, first - second);
        break;
    case '*':
        printf("%lf * %lf = %lf", first, second, first * second);
        break;
    case '/':
        printf("%lf / %lf = %lf", first, second, first / second);
        break;
    
    default:
        printf("Enter the specified operators!!!");
        break;
    }
}