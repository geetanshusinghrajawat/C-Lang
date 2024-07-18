//WAP: To calculate the average of four numbers using functions.

#include <stdio.h>

void avg(int a, int b, int c, int d)
{
    float result;
    result=(a+b+c+d)/4;
    printf("the average of given 4 numbers is: %f", result);
}
void main()
{
    int a, b, c, d;
    printf("Enter any 4 number: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    avg(a,b,c,d);
}