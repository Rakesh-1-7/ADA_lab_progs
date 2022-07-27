#include<stdio.h>
#include<time.h>
#include<conio.h>

void merge(int a[], int low, int mid, int high)
{
    int i, j, k,c[100];
    i = low;
    k = low;
    j = mid+1;
    for(int x = 0; x<10000; x++);
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
            c[k++] = a[i++];
        else
            c[k++] = a[j++];
    }
    while (i <= mid)
        c[k++] = a[i++];

    while (j <= high)
        c[k++] = a[j++];

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
    int i,n,a[100];
    clock_t start, end;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter the array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    start = clock();
    mergesort(a,0,n-1);
    end = clock();

    printf("The sorted array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nTime taken : %f",(double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}