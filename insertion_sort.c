#include<stdio.h>
#include<string.h>
void inserion_sort(int a[],int n)
{
    int y,j;
    for(int i = 1;i < n;i++)
    {
        y = a[i];
        j=i-1;
        while(j >= 0 && a[j] > y)
        {
            a[j+1] = a[j];
            j-=1;
        }
        a[j+1] = y;
    }
}

int main()
{
    int a[] = {1,10,4,2,5,-6};
    inserion_sort(a,strlen(a));
    printf("Start");
    for(int i = 0; i<strlen(a);i++)
        printf(" -> %d",a[i]);

    return 0;

}