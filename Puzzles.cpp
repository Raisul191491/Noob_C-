#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,qua1,qua2=0;
    cin>>n>>m;
    vector<int>puz;
    while(m--)
    {
        cin>>qua1;
        puz.push_back(qua1);
    }
    sort(puz.begin(),puz.end());
    qua2=puz[n-1]-puz[0];
    for(int i=0;i<puz.size()-n+1;i++)
    {
         qua1=puz[i+n-1]-puz[i];
         qua2=min(qua1,qua2);
    }
    cout<< qua2 <<endl;
}
