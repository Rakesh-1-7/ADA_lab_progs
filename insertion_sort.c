#include <stdio.h>
#include <string.h>
void inserion_sort(int a[], int n)
{
    int y, j;
    for (int i = 1; i < n; i++)
    {
        y = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > y)
        {
            a[j + 1] = a[j];
            j -= 1;
        }
        a[j + 1] = y;
    }
}

int main()
{
    int a[10], n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    inserion_sort(a, n);
    printf("Start");
    for (int i = 0; i < n; i++)
        printf(" -> %d", a[i]);

    return 0;
}