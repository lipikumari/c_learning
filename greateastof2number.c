#include<stdio.h>
int main()
{
    int a,b;
    printf("insert two number");
    scanf("%d %d",&a, &b);
    if(a>b)
        printf("a is greatest number ");

    else if(b>a)
     printf("b is the greatest number");

   else
    printf("leave");
    return 0;

}
