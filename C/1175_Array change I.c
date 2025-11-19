#include<stdio.h>
int main()
{
    int arr[20],i,index=0;
    for(i=0;i<20;i++)//input 20 number
    {
        scanf("%d",&arr[i]);
    }

    for(i=19;i>=0;i--)//revers number
    {

        printf("N[%d] = %d\n",index,arr[i]);
        index++;
    }


    return 0;
}
