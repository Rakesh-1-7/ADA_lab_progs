/*#include<stdio.h>
#include<time.h>

int lin_search(int arr[],int n, int key)
{
    if(n>=1)
    {
        if(arr[n]==key)
            return n;
        return lin_search(arr,n-1,key);
    }
    return -1;
}
int bin_search(int arr[],int l, int r, int key)
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
    int n,i,arr[10],key,choice,res;
    while(1)
    {
        printf("Enter the value of n : ");
        scanf("%d",&n);
        printf("Enter %d elements into the array : \n",n);
        for(i=0;i<n;i++)
            scanf("%d",arr[n]);
        printf("Enter the key : ");
        scanf("%d",&key);
        printf("\n1.Linear Search\n2.Binary search\n3.Exit\nEnter a choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                res = lin_search(arr,n,key);
                if(res == -1)
                    printf("Element no found.\n");
                else
                    printf("The element %d is found at position %d.\n",key,res);
            case 2:
                res = bin_search(arr,0,n,key);
                if(res == -1)
                    printf("Element no found.\n");
                else
                    printf("The element %d is found at position %d.\n",key,res);
            default:
                return 0;
        }
    }
} */
