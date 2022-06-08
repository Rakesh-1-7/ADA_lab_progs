#include <time.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
int lin_search(int arr[],int key,int n)
{
    int i;
    for(i=0;i<1000000000;i++);
    for(i = 0;i<n;i++)
    {
        if(key == arr[i])
            return i+1;
    }

    return 0;
}

int bin_search(int arr[],int key,int n)
{
    int i;
    for(i=0;i<1000000000;i++);
    int l=0,h=n,m=(l+h)/2;
    do
    {
        m=(l+h)/2;
        if(arr[m]>key)
            h = m;
        else if(arr[m]==key)
            return m+1;
        else
            l = m;
    }while(m<=h);

    return 0;
}

int main()
{
    time_t start, end;
    int a[10],n,j,key=0,choice;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(j = 0;j<n;j++)
        arr[j]=rand();
    for(j = 0;j<n;j++)
        printf("%d\t",arr[j]);
    printf("Enter a key : ");
    scanf("%d",&key);
    printf("\n1.Linear Search\n2.Binary Search\n3.Exit\nEnter a choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            start = time(NULL);
            if(key = lin_search(a,key,n))
                printf("Key found at position %d!\n",key);
            else
                printf("Key not found\n");
            end = time(NULL);
            printf("\nTime taken to print sum is %.7f seconds\n",difftime(end, start));
        case 2:
            start = time(NULL);
            if(key = bin_search(a,key,n))
                printf("Key found at position %d!\n",key);
            else
                printf("Key not found\n");
            end=time(NULL);
            printf("\nThe execution time is %0.5f\n",difftime(end,start));
    }

    return 0;
}








