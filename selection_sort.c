#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void sel_sort(int *arr, int n)
{
	int least, pos, temp;
	for(int j = 0;j<10000;j++)
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

int main(void)
{
	int n, arr[10000];
	clock_t start, end;
	printf("Enter the value of n : ");
	scanf("%d", &n);
	printf("The values in the array  are :\n");
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
		printf("%d, ", arr[i]);
	}

	start = clock();
	sel_sort(arr, n);
	end = clock();

	printf("\nThe sorted array is : ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\nTime taken : %f\n", (double)(end - start) / CLOCKS_PER_SEC);
	return 0;
}