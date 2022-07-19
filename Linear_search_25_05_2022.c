#include <time.h>
#include <stdio.h>
#include <string.h>
int lin_search(int arr[], int key, int n)
{
    int i;
    for (i = 0; i < 1000000000; i++)
        ;
    for (i = 0; i < n; i++)
    {
        if (key == arr[i])
            return i + 1;
    }
    return 0;
}

int main()
{
    time_t start, end;
    int a[10], n, j, key = 0;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter %d elements to insert into the array : ", n);
    for (j = 0; j < n; j++)
        scanf("%d", &a[j]);
    printf("Enter a key : ");
    scanf("%d", &key);
    start = time(NULL);
    if (key = lin_search(a, key, n))
        printf("Key found at position %d!\n", key);
    else
        printf("Key not found\n");
    end = time(NULL);
    printf("\nTime taken to print sum is %.7f seconds\n", difftime(end, start));
    return 0;
}
