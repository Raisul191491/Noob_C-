#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,row=0,col=102,x,y;
    cin>>n;
    vector<int>army;
    while(n--)
    {
        cin>>a;
        army.push_back(a);
    }

    for(int i=0; i<n; i++)
    {
        if(army[i]<col)
        {
            col=army[i];
            x=i;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(army[i]>row)
        {
            row=army[i];
            y=i;
        }
    }
    if(x<y)
    {
        x++;
    }
    a=y+n-x-1;
    cout<< a << endl;


}
