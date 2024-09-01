#include<stdio.h>
int main()
{
    int a,b,c,min=0,max=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        min=a;
        if(a<c) min=a;
        else min=c;
    }
    else
    {
        min=b;
        if(b<c) min=b;
        else min=c;
    }

    if(a<b)
    {
        max=b;
        if(b<c) max=c;
        else max=b;
    }
    else
    {
        max=a;
        if(a<c) max=c;
        else max=a;
    }
    printf("%d %d\n",min,max);
    return 0;
}