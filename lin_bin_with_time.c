#include <stdio.h>
#include <time.h>
int lin_search(int *arr, int key, int l)
{

	int i = l, pos;

	if (i > 0)
	{
		if (arr[i] == key)
			return i;
		else
			pos = lin_search(arr, key, l - 1);
	}
	else
		return -1;
	return pos;
}
// 1 2 3 4 5 6 7 8 9 10
int bin_search(int *arr, int key, int h, int l)
{
	int m;
	if (h >= l)
	{
		m = (h + l) / 2;
		if (arr[m] == key)
			return m;
		else if (key > arr[m])
			return bin_search(arr, key, h, m + 1);
		else
			return bin_search(arr, key, m - 1, l);
	}
	return -1;
}

int main()
{
	clock_t s, e;
	int arr[10], n;
	int key, pos;
	int choice;

	printf("Enter the value of n : ");
	scanf("%d", &n);
	printf("Enter the array elements :(Enter sorted array in case of binary search) \n");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("Enter the key : ");
	scanf("%d", &key);
	printf("\n1.Linear search\n2.Binary Search\n3.Exit\n");
	printf("Enter a choice : ");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		s = clock();
		pos = lin_search(arr, key, n - 1);
		e = clock();
		if (pos != -1)
			printf("Element found at position %d.\n", pos + 1);
		else
			printf("Element not found.\n");
		printf("Linear search time taken is %0.9f\n", (float)(e - s) / CLOCKS_PER_SEC);
		break;
	case 2:
		s = clock();
		pos = bin_search(arr, key, n, 0);
		e = clock();
		if (pos != -1)
			printf("Element found at position %d.\n", pos + 1);
		else
			printf("Element not found.\n");
		printf("Linear search time taken is %0.9f\n", (float)(e - s) / CLOCKS_PER_SEC);
		break;
	default:
		return (0);
	}
}
