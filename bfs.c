#include <stdio.h>
int a[10][10], vis[10], n, Q[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int f = 0, r = 0, u;
void bfs(int v)
{
    int  i;
    vis[v] = 1;
    Q[r] = v;
    printf("Start ");
    while (f <= r)
    {
        u = Q[f];
        printf(" -> %d", u+1);
        for (i = 0; i < n; i++)
        {
            if (a[u][i] == 1 && vis[i] == 0)
            {
                vis[i] = 1;
                r += 1;
                Q[r] = i;
            }
        }
        f += 1;
    }
}

int main()
{
    int i, j, src;
    printf("Enter number of vertices : ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix : \n");

    for (i = 0; i < n; i++)
    {
        vis[i] = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the source vertex : ");
    scanf("%d", &src);
    bfs(src-1);
    return 0;
}