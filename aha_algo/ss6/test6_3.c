//数组实现邻接表
//这个方法仅仅起到存储图本身的作用，而没有实现求最近邻方法。
#include <stdio.h>  
int main()  
{  
    int n,m,i,k;
    //u、v和w的数组大小要根据实际情况来设置，要比m的最大值要大1
    int u[m+1],v[m+1],w[m+1];
    //first和next的数组大小要根据实际情况来设置，要比n的最大值要大1
    int first[n+1],next[n+1];
    puts("give the locations'number and distances' number");
    scanf("%d %d",&n,&m);
    
    //初始化first数组下标1~n的值为-1，表示1~n顶点暂时都没有边
    for(i=1;i<=n;i++)
        first[i]=-1;
    for(i=1;i<=m;i++)
    {
        puts("give the locations and distance");
        scanf("%d %d %d",&u[i],&v[i],&w[i]);//读入每一条边
        //下面两句是关键啦
        next[i]=first[u[i]];
        first[u[i]]=i;
        //录入一次边的信息的时候，next存储值-1，没有意义，但是first存储了出发的节点号，
        //以及对应的录入边的编号顺序，下次再有从该点出发的边出现，next记录了下一次的边
        //的编号顺序和这一次的出发点节点号，first纪录下一次的出发点节点号和录入边编号。
        //因为在录入同样是该点出发的不同边，所以出发点节点号相同，所以在first和next中建立联系。
    }

    k=first[1];// 1号顶点其中的一条边的编号（其实也是最后读入的边）
    //这个函数给出了1号节点有关的所有边
    while(k!=-1) //其余的边都可以在next数组中依次找到
    {
        printf("%d %d %d\n",u[k],v[k],w[k]);
        k=next[k];
    }

    //这个函数给出了所有边
    for(i=1;i<=n;i++)
    {
        k=first[i];
        while(k!=-1)
        {
            printf("%d %d %d\n",u[k],v[k],w[k]);
            k=next[k];
        }
    }
}