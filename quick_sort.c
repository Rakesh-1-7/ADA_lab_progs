#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int a[100],n;

int partition(int a[],int low,int high)
{
    int pivot,i,j,temp;
    pivot=a[low];
    i=low+1;
    j=high;
    while(i<=j)
    {
        while(a[i]<=pivot)
            i++;

        while(a[j]>pivot)
            j--;

        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
}

void quicksort(int a[],int low,int high)
{
    int mid;
    for(int i = 0; i < 10000;i++);
    if(low<high)
    {
        mid=partition(a,low,high);
        quicksort(a,low,mid-1);
        quicksort(a,mid+1,high);
    }
}



int main()
{
    int i, j;
    clock_t start, end;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter the array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    start = clock();
    quicksort(a,0,n-1);
    end = clock();

    printf("The sorted array is : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nTime taken : %f\n", (double)(end-start)/CLOCKS_PER_SEC);
    return 0;
}