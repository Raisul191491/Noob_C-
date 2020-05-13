#include<bits/stdc++.h>
typedef long long     ll;
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
using namespace std;
int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        int n;
        cin>>n;
        vector<int>per;
        if(n<4)
            cout << "-1\n";
        else
        {
            per.push_back(3);
            per.push_back(1);
            per.push_back(4);
            per.push_back(2);
            if(n>4)
            {
                 for(int i=5;i<=n;i++)
                 {
                      if(i%2==0)
                         per.push_back(i);
                      else
                         per.insert(per.begin(),i);
                 }
            }
            com(i,per.size())
            {
                 cout << per[i] << " ";
            }
        }
        cout << endl;
    }
}
