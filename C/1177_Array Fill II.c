#include<stdio.h>
int main()
{
    int t,i,n[1000];
    scanf("%d",&t);//input the number

    for(int s=0;s<1000;s++)
    {
        n[s]=s%t;//remainder value
    }
        for(i=0;i<1000;i++)
        {
            printf("N[%d] = %d\n",i,n[i]);

        }
        return 0;

}
