#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void sel_sort(int *arr, int n)
{
    int least, pos, temp;
    for (int i = 0; i < n; i++)
    {
        least = arr[i];
        pos = i;
        for (int j = i; j < n; j++)
        {
            if (least > arr[j])
            {
                pos = j;
                least = arr[j];
            }
        }
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
}

int lin_search(int arr[], int n, int key)
{
    for(int i = 0; i < 100000;i++);
    if (n >= 0)
    {
        if (arr[n] == key)
            return n + 1;
        return lin_search(arr, n - 1, key);
    }
    return -1;
}
int bin_search(int arr[], int l, int r, int key)
{
    for(int i = 0; i < 10000;i++);

    int mid = (l + r) / 2;
    if (arr[mid] > key)
        return bin_search(arr, l, mid - 1, key);
    else if (arr[mid] < key)
        return bin_search(arr, mid + 1, r, key);
    else if (arr[mid] == key)
        return mid;
    return -1;
}
int main()
{
    int n, i, arr[100000], key, choice, res;
    clock_t start, end;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("The elements in the array are: \n", n);
    for (i = 0; i < n; i++)
    {
        arr[i] = rand();
        printf("%d\t", arr[i]);
    }
    printf("\nEnter the key : ");
    scanf("%d", &key);

    start = clock();
    res = lin_search(arr, n - 1, key);
    end = clock();

    if (res != -1)
        printf("The element %d is found at position %d.\n", key, res);
    else
        printf("Element no found.\n");

    printf("The time taken by linear search is %f seconds.\n", (double)(end - start) / CLOCKS_PER_SEC);

    sel_sort(arr, n);
    printf("The elements in the array are: \n");
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    start = clock();
    res = bin_search(arr, 0, n - 1, key);
    end = clock();

    if (res == -1)
        printf("\nElement not found.\n");
    else
        printf("\nThe element %d is found at position %d.\n", key, res);

    printf("The time taken by binary search is %f seconds.\n", (double)(end - start) / CLOCKS_PER_SEC);
}
