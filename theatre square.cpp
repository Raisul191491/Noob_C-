#include<stdio.h>
int main()
{
    long long int x,y,z,i,j;
    scanf("%lld%lld%lld",&x,&y,&z);
    if(x%z==0)
    {
        i = x/z;
    }
    else if(x%z!=0)
    {
        i = x/z+1;
    }
    if(y%z==0)
    {
        j = y/z;
    }
    else if(y%z!=0)
    {
        j = y/z+1;
    }
    printf("%lld",i*j);
    return 0;
}
