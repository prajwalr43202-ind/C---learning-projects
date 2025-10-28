#include <stdio.h>

int main()
{
    int num1 , num2 , result;
    char operator;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Select operator (+ , - , * , / ) : ");
    scanf(" %c",&operator); 

    switch (operator)
    {
        case '+':
            result = num1 + num2;
            printf("The sum is : %d",result);
            break;
        case '-':
            result = num1 - num2;
            printf("The difference is : %d",result);
            break;
        case '*':
            result = num1 * num2;
            printf("The product is : %d",result);
            break;
        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("The quotient is : %d",result);
            }
            else
            {
                printf("Error: Division by zero is not allowed.");
            }
            break;
        default:
            printf("Invalid operator selected.");
            
       
    }

    return 0;
}