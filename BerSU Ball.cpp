#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,pairs=0;
    cin>>n;
    vector<int>boy,girl;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        boy.push_back(x);
    }
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>x;
        girl.push_back(x);
    }
    sort(boy.begin(),boy.end());
    sort(girl.begin(),girl.end());
    for(int i=0; i<boy.size(); i++)
    {
        for(int j=0; j<girl.size(); j++)
        {
            if(abs(boy[i]-girl[j])<=1)
            {
                 pairs++;
                 girl[j]=103;
                 break;
            }
        }
    }
    cout << pairs <<endl;;
}
