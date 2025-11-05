#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Enter two numbers :");
    scanf("%d%d",&num1,&num2);

    for(int i=num1;i>0;i--)
    {
       if(num1%i==0 && num2%i==0)
       {
        printf("HCF is %d\n",i);
        break;
       }
    }
    return 0;
}