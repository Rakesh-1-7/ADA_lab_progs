#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
void inserion_sort(int a[], int n)
{
    int y, j;
    for(int j=0; j < 100000;j++);
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
    int a[10000], n;
    clock_t start, end;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("The values in the array  are :\n");
    for (int i = 0; i < n; i++)
    {
        a[i] = rand();
        printf("%d, ", a[i]);
    }
    start = clock();
    inserion_sort(a, n);
    end = clock();
    printf("\nStart");
    for (int i = 0; i < n; i++)
        printf(" -> %d", a[i]);
    printf("\nTime taken : %f\n", (double)(end - start) / CLOCKS_PER_SEC);
    return 0;
}