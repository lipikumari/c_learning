#include<stdio.h>
int main()
{
    int a=0, b=0, result=0;
    printf("enter the first number");
    scanf("%d", &a);
    printf("enter the second number:");
    scanf("%d",&b);
    result=a*b+b-a;
    printf("multiply two numbers %d",result);
    return 0;
}
