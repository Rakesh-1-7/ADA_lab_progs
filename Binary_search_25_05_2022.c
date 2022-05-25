#include<stdio.h>


int bin_search(int arr[],int key,int n)
{
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
}



int main()
{
    int a[10],n,j,key=0;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter %d elements in ordered fashion to insert into the array : \n",n);
    for(j = 0;j<n;j++)
        scanf("%d",&a[j]);
    printf("Enter a key : ");
    scanf("%d",&key);
    if(key = bin_search(a,key,n))
        printf("Key found at position %d!",key);
    else
        printf("Key not found");
    return 0;
}
