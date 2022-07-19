#include <stdio.h>
#include <time.h>

int bin_search(int arr[], int key, int n)
{
    int l = 0, h = n, m = (l + h) / 2;
    do
    {
        m = (l + h) / 2;
        if (arr[m] > key)
            h = m;
        else if (arr[m] == key)
            return m + 1;
        else
            l = m;
    } while (m <= h);
}

int main()
{
    time_t start, end;
    int a[10], n, j, key = 0;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter %d elements in ordered fashion to insert into the array : \n", n);
    for (j = 0; j < n; j++)
        scanf("%d", &a[j]);
    printf("Enter a key : ");
    scanf("%d", &key);
    start = time(NULL);
    if (key = bin_search(a, key, n))
        printf("Key found at position %d!\n", key);
    else
        printf("Key not found\n");
    end = time(NULL);
    printf("\nThe execution time is %0.5f\n", difftime(start, end));
    return 0;
}
