#include<stdio.h>

int partition(int a[],int low, int high)
{
    int i,j,temp,pivot;
    pivot = a[low];
    i=low+1;
    j=high;

    while(i <= j)
    {
        while(a[i] <= pivot)
            i++;
        while(a[j] > pivot)
            j--;
    }

    if(i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    temp = a[j];
    a[j] = a[low];
    a[low] = temp;
    return j;
}

void quicksort(int a[], int low, int high)
{
    int mid = (low+high)/2;
    if(low < high)
    {
        mid = partition(a,low,high);

        quicksort(a,low,mid-1);
        quicksort(a,mid+1,high);
    }
}

int main()
{
    int a[10],n;

    printf("Enter number of elements : ");
    scanf("%d",&n);

    printf("Enter array elements : ");
    for(int i = 0;i < n; i ++)
        scanf("%d",&a[i]);

    quicksort(a,0,n-1);

    printf("The sorted array is : ");
    for(int i = 0;i < n; i ++)
        printf("%d ",a[i]);

    return 0;
}
