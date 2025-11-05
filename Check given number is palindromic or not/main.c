#include <stdio.h>

int main()
{
    int number,reminder,revers=0;
    printf("Enter the number :");
    scanf("%d",&number);
    int num = number;

    while(number!=0)
    {
        reminder = number%10;
        revers = revers*10 + reminder;
        number = number/10;
    }
    (revers==num)?printf("The number is palindromic"):printf("The number is not a palindromic");
    return 0;
}