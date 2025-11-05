#include <stdio.h>
#define PI 3.142

int main()
{
    double num,degree;
    float numerator,denomerator=1,radian,sum=0;

    printf("Enter the number of times the value must predited :\n");
    scanf("%lf",&num);
    printf("Enter the degree of sin function :\n");
    scanf("%lf",&degree);

    radian = degree*PI/180;
    numerator = radian;

    for(int i= 1;i<=num;i++)
    {
        sum += numerator/denomerator;
        denomerator *= (i*2)*(i*2+1);
        numerator *= -radian*radian;
    }
    printf("%lf",sum);
    return 0;

}