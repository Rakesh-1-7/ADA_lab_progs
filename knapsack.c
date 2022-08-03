#include<stdio.h>

int knapsack(int, int);
void object_selected(int , int);
int max(int , int);
int W[10], P[10], V[10][10], X[10], i, j;
int max(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main()
{
    int n, m, solution;
    printf("Enter number of objects : ");
    scanf("%d", &n);

    printf("Enter capacity of Knapsack : ");
    scanf("%d", &m);

    printf("Enter objects weight : ");
    for(i = 1; i <= n; i++)
        scanf("%d",&W[i]);

    printf("Enter profit of objects : ");
    for(i = 1; i <= n; i++)
        scanf("%d", &P[i]);

    solution = knapsack(n,m);

    printf("Optimal solution = %d", solution);

    object_selected(n,m);
    // getch();
    return 0;
    
}

int knapsack(int n, int m)
{
    for(i = 1; i <= n; i++)
    {
        for(j = 0; j <= n; j++)
        {
            if(i == 0 || j == 0)
                V[i][j] = 0;
            else if(W[i] > j)
                V[i][j] = V[i-1][j];
            else
                V[i][j] = max(V[i-1][j],V[i-1][j-W[i]]+P[i]);
        }
    }
    return V[n][m];
}

void object_selected(int n, int m)
{
    i = n;
    j = m;
    while(i != 0 && j != 0)
    {
        if(V[i][j] != V[i-1][j])
        {
            X[i] = 1;
        }
        j = j - W[i];
        i--;
    }

    printf("Object selected : ");
    for(i = 1; i <= n; i++)
    {
        if(X[i] == 1)
        printf("%d", i);
    }
}
