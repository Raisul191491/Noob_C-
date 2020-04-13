#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2,step1=0,step2=0;
    cin>>x1>>y1>>x2>>y2;

    while(x1<x2)
    {
        step1++;
        x1++;
    }

    while(x2<x1)
    {
        step1++;
        x2++;
    }


    while(y1<y2)
    {
        step2++;
        y1++;
    }

    while(y2<y1)
    {
        step2++;
        y2++;
    }

    cout<< max(step1,step2) <<endl;
}
