#include<stdio.h>
int a[20][20],q[20],visited[20],n,i,j,f=0,r=-1;
void bfs(int v);
void main()
{
    //starting vertex
    int v;
    printf("enter the number of vertex");
    scanf("%d",&n);
    printf("enter the adjacency matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the value of starting vertex");
    scanf("%d",&v);
    for(i=0;i<n;i++)
    {
        q[i]=0;
        visited[i]=0;
    }
    bfs(v);
    printf("the visited vertices are:");
    for(i=0;i<n;i++)
    {
        if(visited[i])
        {
            printf("%d\t",i);
        }
    }
}
void bfs(int v)
{
    for(i=0;i<n;i++)
    {
        if(a[v][i] && !visited[i])
        {
            q[++r]=i;
        }
        if(f<=r){
            visited[q[f]]=1;
            bfs(q[++f]);
        }
    }
}