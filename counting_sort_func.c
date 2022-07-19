int *countingSort(int arr_count, int *arr, int *result_count)
{

    *result_count = 100;
    int *res = malloc(*result_count * sizeof(int));

    int i, j;

    for (i = 0; i < 101; i++)
        res[i] = 0;

    for (i = 0; i < arr_count; i++)
        *(res + *(arr + i)) += 1;

    return res;
}
