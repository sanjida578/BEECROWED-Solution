//S Sequence

#include<stdio.h>
int main()
{
    double s=0;
    for(int i=1;i<=100;i++)
    {
        s=s+(1.0/i);
    }
    printf("%.4lf\n",s);
}
