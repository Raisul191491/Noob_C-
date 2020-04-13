#include <bits/stdc++.h>

using namespace std;
int main()
{
    int d1,d2,d3,dis1,dis2,dis3,dis4;
    scanf("%d%d%d",&d1,&d2,&d3);
    dis1=d1+d2+d3;
    dis2=2*(d1+d2);
    dis3=d1+d3+d3+d1;
    dis4=d2+d3+d3+d2;
    printf("%d\n",min(dis1,min(dis2,min(dis3,dis4))));
    return 0;
}
