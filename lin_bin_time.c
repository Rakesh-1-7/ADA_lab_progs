#include <time.h>
#include <stdio.h>
#include<stdlib.h>

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

int lin_search(int arr[], int key, int n)
{
    int i;
    for (i = 0; i < 1000000000; i++);
    for (i = 0; i < n; i++)
    {
        if (key == arr[i])
            return i + 1;
    }

    return 0;
}

int bin_search(int arr[], int l, int r,int key)
{
    int mid = (l+r)/2;
    if(arr[mid]>key)
        return bin_search(arr,l,mid-1,key);
    else if(arr[mid]<key)
        return bin_search(arr,mid+1,r,key);
    else if(arr[mid] == key)
        return mid;
    return -1;
}

int main()
{
    time_t start, end;
    int a[10], n, j, key = 0;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    for (j = 0; j < n; j++)
        a[j] = rand();
    for (j = 0; j < n; j++)
        printf("%d\t", a[j]);
    printf("\nEnter a key : ");
    scanf("%d", &key);

    start = time(NULL);
    if (key = lin_search(a, key, n))
        printf("Key found at position %d!\n", key);
    else
        printf("Key not found\n");
    end = time(NULL);
    printf("\nThe execution time is %.7f seconds for linear search\n", difftime(end, start));

    printf("Enter the array elements for binary search : ");
    for (j = 0; j < n; j++)
        scanf("%d", &a[j]);
    start = time(NULL);
    if (key = bin_search(a, 0, n, key))
        printf("Key found at position %d!\n", key);
    else
        printf("Key not found\n");
    end = time(NULL);
    printf("\nThe execution time is %.7f seconds for binary search\n", difftime(end, start));

    return 0;
}
