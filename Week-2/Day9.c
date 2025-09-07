#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("Enter the 1st Number:\n");
    scanf("%d",&a);
    printf("Enter the 2nd Number:\n");
    scanf("%d",&b);
    printf("Enter your choice:\n1.Addition\n2.Subtraction\n3.Multiplication\n4. Division\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Result:%d",a+b);
        break;
    case 2:
        printf("Result:%d",a-b);
        break;
    case 3:
        printf("Result:%d",a*b);
        break;
    case 4:
        printf("Result:%d",a/b);
        break;
    default:
        printf("Invalid Choice.");
    }

}
