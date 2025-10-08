#include <stdio.h>

int fibonacci(int n){
    if (n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    // fibonacci series
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",fibonacci(i));
    }
    printf("\n");
    // without recursion

    // int a = 1,b = 1;
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ",a);
    //     int next = a + b;
    //     a = b;
    //     b = next;
    // }
    return 0;
}