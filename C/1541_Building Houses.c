#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)
        break;
        scanf("%d%d",&b,&c);
        int area=a*b;
        double land_area= (double)(area*100)/c;
        double land_side= sqrt(land_area);
        printf("%d\n",(int)land_side);

    }
    return 0;
}
