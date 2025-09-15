#include<stdio.h>
int largest(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a,b;
    printf("Enter the Two Numbers:");
    scanf("%d %d",&a,&b);
    int result=largest(a,b);
    printf("The Largest Number is %d.",result);
    return 0;
}
