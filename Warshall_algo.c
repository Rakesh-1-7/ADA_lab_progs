#include <stdio.h>
#include <stdlib.h>

int n;
int a[100][100],p[100][100];

void warshall()
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            p[i][j] = a[i][j];
    }

    for(int k = 1; k <= n; k++)
    {
        for(int j = 1; j <= n; j++)
        {
            for(int i = 1; i <= n; i++)
            {
                if(p[i][j] != 1 && p[i][k] == 1 && p[k][j] == 1)
                    p[i][j] = 1;
            }
        }
    }
}

int main()
{
    printf("Enter the number of vertices: ");
    scanf("%d",&n);
    printf("Enter the adjacency matrix: \n");
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    warshall();

    printf("The path matrix is: \n");
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            printf("%d ",p[i][j]);
        printf("\n");
    }
    return 0;
}