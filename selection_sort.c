#include <stdio.h>

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

int main(void)
{
	int n, arr[10];
	printf("Enter the value of n : ");
	scanf("%d", &n);
	printf("Enter the values into the array :\n");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	sel_sort(arr, n);
	printf("\nThe sorted array is : ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}
