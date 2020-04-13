#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,flag,lag,amaz=0;
    cin>>n;
    vector<int>point;
    while(n--)
    {
        cin>>a;
        point.push_back(a);
    }
    for(int i=1; i<point.size(); i++)
    {
        for(int j=0; j<i; j++)
        {
            if(point[i]<point[j])
            {
                flag=0;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            amaz++;
        }
        for(int j=0; j<i; j++)
        {
            if(point[i]>point[j])
            {
                lag=0;
            }
            else
            {
                lag=1;
                break;
            }
        }
        if(lag==0)
        {
            amaz++;
        }
    }
    cout << amaz << endl;
}
