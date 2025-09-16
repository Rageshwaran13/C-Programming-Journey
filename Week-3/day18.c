#include <stdio.h>

int main()
{
    int marks[5];
    float average;
    int total=0;
    int i;
    printf("Enter the Marks for 5 Subjects:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        total+=marks[i];
    }
    average=total/5;
    printf("The Total Mark is: %d\n",total);
    printf("The Average is: %.2f\n",average);
    return 0;
}
