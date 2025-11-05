#include <stdio.h>

int factorial(int num);

int main()
{
    int num,result;

    printf("Enter the number :");
    scanf("%d",&num);

    result = factorial(num);

    printf("The factorial of %d is %d.",num,result);

    return 0;
}

int factorial(int num)
{
    if(num==0)
    {
        return 1;
    }
    else
    {
        return num*factorial(num-1);
    }
    
}