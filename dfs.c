#include <stdio.h>
void DFS(int);
int a[10][10],vis[10],n;
int main() 
{
	int i,j,src;
  printf("Enter the number of vertices : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		vis[i] = 0;
	printf("Enter the elements of adjacency matrix : \n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("Enter the soure vertex : ");
	scanf("%d",&src);
	printf("Start");
	DFS(src);
  return 0;
}

void DFS(int v)
{
	vis[v] = 1;
	printf(" -> %d",v);
	for(int i=0;i<n;i++)
	{
		if(a[v][i] == 1 && vis[i] == 0)
			DFS(i);
	}
}
