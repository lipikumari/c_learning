#include<stdio.h>
int main()
{

    int number;
    printf("enter the number");
    scanf("%d",&number);
    if (number==10)
        {
            printf("number is equal to 10");
        }
        else if (number==60)
        {
           printf("number is equal to 60");
        }
        else if(number==90)
        {
            printf("number is equal to 90");
        }
        else
        {
            printf("number is not equal to 10 ,60 and 90");
        }
        return 0;
}
