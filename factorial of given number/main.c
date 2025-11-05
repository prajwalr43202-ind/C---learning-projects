#include <stdio.h>

int main()
{
    int number,factorial=1.0;
    printf("Enter th number :");
    scanf("%d",&number);


    for(int i =1;i<=number;i++)
    {
        factorial = factorial*i;
    }
    printf("%d",factorial);
    return 0;
}