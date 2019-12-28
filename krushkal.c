#include<stdio.h>
#include<conio.h>

int i,j,k,a,b,c,v,n,ne=1,u;
int min,mincost=0,cost[9][9],parent[9];
int find(int);
int uni(int,int);

void main()
{
    printf("implementation of kruskal's algorithm \n");
    printf("enter the no. of vertices n");
    scanf("%d",&n);
    printf("\n enter the cost adjacency matrix");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
                cost[i][j]=20;
        }
    }
    printf("the edges of minimum cost spanning tree are ");
    while(ne<n)
    {
        for(i=1,min=20;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]<min)
                {
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        u=find(u);
        v=find(v);
        if(uni(u,v))
        {
            printf("%d edge (%d,%d)=%d",ne++,a,b,min);
            mincost+=min;
        }
        cost[a][b]=cost[b][a]=20;
    }
    printf("minimum cost= %d",mincost);
    getch();
}

int find(int i)
{
    while(parent[i])
        i=parent[i];
    return i;
}

int uni(int i, int j)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}
