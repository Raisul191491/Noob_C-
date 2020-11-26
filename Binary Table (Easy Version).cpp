#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define last          freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fr            first
#define sc            second
#define lcm(a,b)      (a*b)/__gcd(a,b)
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
#define endl          '\n'
using namespace std;
int main()
{
    int t;
    cin>>t;
    com(i,t)
    {
        int n,m,x=0,cnt=0;
        cin>>n>>m;
        char a[n][m];
        vector<vector<int>>pos(100005);
        com(i,n)
        {
            com(j,m)
            {
                cin>>a[i][j];
            }
        }

        for(int i=0; i<n; i++)
        {
            com(j,m)
            {
                if((a[i][j]-'0')+(a[i+1][j]-'0')+(a[i][j+1]-'0')+(a[i+1][j+1]-'0')==3)
                {
                     cnt++;
                    if(a[i][j]=='0'){
                        pos[x].push_back(i+1);
                        pos[x].push_back(j);
                        pos[x].push_back(i);
                        pos[x].push_back(j+1);
                        pos[x].push_back(i+1);
                        pos[x].push_back(j+1);

                    }
                    else if(a[i+1][j]=='0')
                        {
                        pos[x].push_back(i);
                        pos[x].push_back(j);
                        pos[x].push_back(i);
                        pos[x].push_back(j+1);
                        pos[x].push_back(i+1);
                        pos[x].push_back(j+1);

                    }
                    else if(a[i][j+1]=='0')
                        {
                        pos[x].push_back(i+1);
                        pos[x].push_back(j);
                        pos[x].push_back(i);
                        pos[x].push_back(j);
                        pos[x].push_back(i+1);
                        pos[x].push_back(j+1);

                    }
                    else if(a[i+1][j+1]=='0')
                        {
                        pos[x].push_back(i+1);
                        pos[x].push_back(j);
                        pos[x].push_back(i);
                        pos[x].push_back(j+1);
                        pos[x].push_back(i);
                        pos[x].push_back(j);

                    }
                    else if((a[i][j]-'0')+(a[i+1][j]-'0')+(a[i][j+1]-'0')+(a[i+1][j+1]-'0')==1)
                    {

                    }
                    a[i][j]=a[i+1][j]=a[i][j+1]=a[i+1][j+1]=0;
                    x++;
                }
            }
        }
        cout << cnt << endl;
        com(i,cnt)
        {
             for(int j:pos[i])
               cout << j+1 << " ";
             cout << endl;
        }
    }
}
