// logical sequence 2

#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

        for(int i=1;i<=y;i++)
        {
            printf("%d ",i);

        if(i%x==0)
        {
            printf("\n");

        }

        else
            printf(" ");
        }
    return 0;
}
/*Output demo:
//input
3 99      
//output
1 2 3
4 5 6
7 8 9
10 11 12
...*/
