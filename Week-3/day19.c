#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter Number of Elements:\n");
    scanf("%d",&n);
    printf("Enter %d Elements:\n",n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            arr[i]=0;
        }
    }
    printf("Modified array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
