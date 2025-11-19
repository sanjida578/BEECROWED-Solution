#include<stdio.h>
int main()
{
    double arr[100];
    int i;
    for(i=0;i<100;i++)//input 100 number
    {
        scanf("%lf",&arr[i]);
    }
    for(i=0;i<100;i++)
    {
        if(arr[i]>10)//check number greater than 10 skip value
            continue;
        printf("A[%d] = %.1lf\n",i,arr[i]);
    }
    return 0;
}
