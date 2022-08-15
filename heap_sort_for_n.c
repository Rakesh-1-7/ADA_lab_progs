#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
void swap(int *,int *);
void heapify(int [],int,int);
void heapSort(int[], int);

int main()
{
    int a[15000],n,i,j,ch,temp;
    clock_t start,end;
    n = 1;
    for(int x = 50;x < 75; x++)
    {
        n = x*x*2;
        // printf("\n The array elements are:");
        // for(i=0;i<n;i++)
        // {
        //     a[i] = (rand()%100)+1;
        //     printf("%d ",a[i]);
        // }
        start=clock();
        for(int temp = 0; temp < 1000000;temp++);
        heapSort(a, n);
        end=clock();
        // printf("\nSorted array is: ");
        // for(i=0;i<n;i++)
        // {
        //     printf("%d ",a[i]);
        // }
        printf("\nTime taken to sort %d numbers is %f ms",n,((double)(end-start)/CLOCKS_PER_SEC)*1000);
    }
            
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}
void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}
