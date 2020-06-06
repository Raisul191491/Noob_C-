#include<bits/stdc++.h>
typedef long long     ll;
#define fr            first
#define sc            second
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
using namespace std;
int con[26];
int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        int n;
        cin>>n;
        vector<int>v[26];
        string a,b;
        cin>>a>>b;
        bool flag=false;
        for(int i=0; i<n; i++)
        {
            if(a[i]!=b[i])
            {
                if(a[i]<b[i])
                {
                    flag=true;
                    break;
                }

                else
                {
                    //  cout<<(int)b[i]-;
                    v[b[i]-'a'].push_back(i);
                }
            }
        }

        if(flag==true)
        {
            cout<<-1<<endl;
        }
        else
        {
            vector<vector<int>>ask;
            com(i,26) con[i]=-1;
            com(i,n)
            {
                if(con[a[i]-'a']==-1)
                    con[a[i]-'a']=i;
            }
            int cnt=0;
            mom(i,25)
            {
                if(v[i].size()!=0)
                {
                    if(con[i]==-1)
                    {
                        flag=true;
                        break;
                    }
                    else
                    {
                        v[i].push_back(con[i]);
                        sort(v[i].begin(),v[i].end());
                        ask.push_back(v[i]);
                        cnt++;
                    }


                }
            }
            if(flag==true)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<cnt<<endl;

                com(i,cnt)
                {
                    cout<<ask[i].size()<<" ";
                    for(int j=0; j<ask[i].size(); j++)
                    {
                        cout<<ask[i][j]<<" ";
                    }
                    cout<<endl;

                }
            }
        }
    }
}
