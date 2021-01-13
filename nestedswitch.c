#include<stdio.h>
int main()
{
    int i=10;
    int j=7;
    switch(i){
case 10:
    printf("the value i is evaluated in outer switch:%d\n",i);
case 7:
    switch(j)
    {
  case 7:
    printf("the value i is evaluated in inner switch:%d\n",j);
    }

    }
    printf("the exact value of i is :%d\n",i);
    printf("the exact value of j is :%d\n",j);
    return 0;
}
