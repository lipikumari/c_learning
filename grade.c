#include<stdio.h>
int main()
{
    int marks;
printf("enter your marks");
scanf("%d",&marks);
if (marks>90)
{
    printf("you have got grade A");
}
else if (marks>70&&marks<90)
{
    printf("you are scored grade B");
}
else if(marks>30&&marks<70)
{

printf("you have scored grade C");
}
else
{
    printf("you are fail");
}
return 0;

}


