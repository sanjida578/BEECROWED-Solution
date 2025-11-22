#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)///for multiple test case
    {
        int large=0,v;///initialize large value is zero(0)
        for(int i=0;i<n;i++)
        {
            scanf("%d",&v);
            if(v>large)///check value is grater than large
            {
                large=v;
            }
        }
        if(large<10)
            printf("1\n");///print level 1
        else if(large<20)
            printf("2\n");///print level 2
        else
            printf("3\n");///print level 3
    }
    return 0;
}
