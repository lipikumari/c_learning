#include<stdio.h>
int main()
{
    int age;
    printf("enter your age =");
    scanf("%d",&age);
    if (age>18)
    {
        printf("you are eligible for vote");
    }
    else{
        printf("sorry , you are not eligible for vote");
    }
    return 0;
}
