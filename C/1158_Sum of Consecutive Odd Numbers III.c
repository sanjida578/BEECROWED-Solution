// Sum of Consecutive Odd Numbers III

#include<stdio.h>
int main()
{
    int n,x,y,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        for(int j=0;j<y;)
        {
            if(x%2!=0){

            sum+=x;
            j++;
            }
            x++;

        }
        printf("%d\n",sum);
        sum=0;

    }
    return 0;
}
