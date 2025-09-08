#include<stdio.h>
int main()
{
    int num;
    int i=1;
    printf("Enter a Number:");
    scanf("%d",&num);
    while(i<=10)
    {
        printf("Multiplication Table:\n");
        printf("%d x %d = %d\n",i,num,i*num);
        i++;
    }
    return 0;
}
