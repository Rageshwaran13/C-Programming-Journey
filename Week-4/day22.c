#include <stdio.h>
int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
        {
        if(arr[i] == key)
            return i;
        }
    return -1;
}
int main()
{
    int n, i, key, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++)
        {
        scanf("%d", &arr[i]);
        }
    printf("Enter element to search: ");
    scanf("%d", &key);
    pos = linearSearch(arr, n, key);
    if(pos == -1)
        {
        printf("Element %d not found.\n", key);
        }
    else
        {
        printf("Element %d found at index %d.\n", key, pos);
        }
    return 0;
}
