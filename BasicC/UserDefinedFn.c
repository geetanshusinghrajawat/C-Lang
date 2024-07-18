#include <stdio.h>

int max(int num1, int num2)
{
    int result;
    if(num1 > num2)
    result= num1;
    else
    result=num2;

    return result;
}

int main()
{
    int a,b;
    printf("Enter two values: ");
    scanf("%d %d", &a, &b);
    int res;
    res=max(a,b);       //Function Call
    printf("Maximum value is: %d\n", res);

    return 0;
}