#include<stdio.h>
int count = 0;
void TOH(int n,char S, char T,char D )
{
    count++;
    if(n == 1)
    {
        printf("Move %c to %c\n",S,D);
        return;
    }
    TOH(n-1,S,D,T);
    printf("Move %c to %c\n",S,D);
    TOH(n-1,T,D,S);

}

int main()
{
    int n;
    printf("Enter the number of disks : ");
    scanf("%d",&n);
    TOH(n,'S','T','D');
    printf("Total moves : %d",count);
    return 0;
}
