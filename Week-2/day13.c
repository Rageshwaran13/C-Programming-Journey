#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the Number:");
    scanf("%d",&n);
    printf("Multiplication Table up to:%d\n",n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d x %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}
