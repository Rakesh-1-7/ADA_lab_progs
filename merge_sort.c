#include <stdio.h>

void merge(int a[], int low, int mid, int high)
{
    int i, j, k, c[100];
    i = low;
    k = low;
    j = mid+1;

    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
            c[k] = a[i++];
        else
            c[k] = a[j++];
        k += 1;
    }

    while (i <= mid)
        c[k++] = a[i++];

    while (j <= high)
        c[k++] = a[i++];

    for (i = low; i <= high; i++)
        a[i] = c[i];
}

void mergesort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main()
{
    int n, a[100];
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Enter the values into the array :\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    mergesort(a, 0, n-1);
    printf("\nThe sorted array is : ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}