//dijkstra

#include <stdio.h>  
int main()  
{  
    int e[10][10],dis[10],book[10],i,j,n,m,t1,t2,t3,u,v,min;  
    int inf=99999999; //用inf(infinity的缩写)存储一个我们认为的正无穷值  
    //读入n和m，n表示顶点个数，m表示边的条数  
    puts("give the locations'number and distances' number");
    scanf("%d %d",&n,&m);  
                                                             
    //初始化  
    for(i=1;i<=n;i++)  
        for(j=1;j<=n;j++)  
            if(i==j) e[i][j]=0;  
              else e[i][j]=inf;  
                                                                       
    //读入边  
    for(i=1;i<=m;i++)  
    {  
        puts("give the locations and distance");
        scanf("%d %d %d",&t1,&t2,&t3);  
        e[t1][t2]=t3;  
    }  
    //初始化dis数组，这里是1号顶点到其余各个顶点的初始路程  
    for(i=1;i<=n;i++)  
        dis[i]=e[1][i];  
    //book数组初始化  
    for(i=1;i<=n;i++)  
        book[i]=0;  
    book[1]=1;  
                                                             
    //Dijkstra算法核心语句  
    for(i=1;i<=n-1;i++) //这里是由于以1号为基准点，找到距离其他所有节点最近点，所以只需要n-1次。
    {  
        //找到离1号顶点最近的顶点  
        min=inf;  
        for(j=1;j<=n;j++)  
        {  
            if(book[j]==0 && dis[j]<min)  
            {  
                min=dis[j];  
                u=j;  
            }  
        }  
        book[u]=1;  
        for(v=1;v<=n;v++)  
        {  
            if(e[u][v]<inf)  
            {  
                if(dis[v]>dis[u]+e[u][v])  
                    dis[v]=dis[u]+e[u][v];  
            }  
        }  
    }  
                                                             
    //输出最终的结果  
    for(i=1;i<=n;i++)  
        printf("%d ",dis[i]);  
                                                                 
    getchar();  
    getchar();  
    return 0;  
} 