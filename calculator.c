#include<stdio.h>

int main()
{
    int a,b,ch;
    int result;

    printf("1.To add\n");
    printf("2.To subtract\n");
    printf("3.To multiply\n");
    printf("4.To divide\n");

    printf("Enter your choice=");
    scanf("%d",&ch);

    printf("Enter two numbers..\n");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);


    switch(ch)
    {
        case 1:
        result=a+b;
        printf("sum=%d",result);
        break;

        case 2:
        result=a-b;
        printf("subtraction=%d",result);
        break;

        case 3:
        result=a*b;
        printf("multiplication=%d",result);
        break;

        case 4:
        result=a/b;
        printf("division=%d",result);
        break;

        default:
        break;
    }


    return 0;
}