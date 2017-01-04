//火柴棍算法。
#include <stdio.h> 

int fun(int x)    //用来计算一个数所需要的火柴棍总数  
{  
    int num=0;  //用来计数变量  
    int f[10]={6,2,5,5,4,5,6,3,7,6};   //用一个数组记录0~9数字所需的火柴棍数  
    while(x/10!=0)     // x除以10不等于0的话，说明该数至少有两位  
    {  
        num+=f[x%10];   //加上该位火柴棍数  
        x=x/10;  
    }  
    num+=f[x];     //加上最高位的火柴棍数  
    return num;  
} 

int main()  
{  
    int a,b,c,m,sum=0;  
    puts("give the limit");
    scanf("%d",&m);
    for(a=0;a<=1111;a++)  //开始枚举  
    {  
        for(b=0;b<=1111;b++)  
        {  
            c=a+b;  
            if(fun(a)+fun(b)+fun(c)==m-4)  
            {  
                printf("%d+%d=%d\n",a,b,c);  
                sum++;  
            }  
        }  
    }  
    printf("the total %d\n",sum);
    return 0;  
}