#include <stdio.h>
int main ()
{
    int num,a, r, result=0 ;
    printf("enter a three digit integer: ");
    scanf("%d",&num);
    a=num;
    while (a!=0)
    {
        r=a % 10;
        result += r * r * r ;
        a/=10;
    }
    if (result==num)
        printf("%d is an armstrong number.",num);
    else
    printf("%d is  not an Armstrong number.", num);

    return 0;
}