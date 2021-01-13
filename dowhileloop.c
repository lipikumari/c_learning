#include<stdio.h>
int main()
{

    char c;
    int choice ,dummy;
    do{
        printf("\n1.print hello\n2.print javapoint\n3.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case1:
                printf("hello");
                break;
                case2:
                    printf("javapoint");
                    break;
                    case3:
                        printf("lipi");
                        break;
                        case4:
                            exit(0);
                            break;
                        default:
                            printf("please enter valid choice");
        }
        printf("do you want enter one");
        scanf("%d",&dummy);
        scanf("%c",&c);
    }
    while(c=='y');
}
