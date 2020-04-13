#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,sum=0;
    vector<int>all;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        all.push_back(a);
    }
    for(int i=0; i<all.size(); i++)
    {
        for(int j=i+1; j<all.size(); j++)
        {
            if(all[i]==all[j])
            {
                all[i]=0;
                break;
            }
            else
                continue;
        }
    }
    for(int i=0; i<all.size(); i++)
    {
         if(all[i]!=0)
          sum++;
    }
    cout << sum <<endl;
    for(int i=0; i<all.size(); i++)
    {
        if(all[i]!=0)
            cout << all[i] << " ";
    }
}
