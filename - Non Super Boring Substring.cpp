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
bool check[100009]={false};
int total=0;
int dfs(vector<int> v[],int root)
{
    int m,m1=-1,m2=-1;
    check[root]=1;
    for(int i=0;i<v[root].size();i++)
    {
        if(!check[v[root][i]]){
            m = dfs(v,v[root][i]);
            if(m>=m1)
            {
                m2= m1;
                m1 = m;
            }
            else if(m>m2)
                m2=m;
        }
    }
    total = max(total , m1+m2+2);
    return (m1 + 1);
}
int main()
{
    int n,a,b;
    cin>>n;
    vector<int> v[n+9];
    for(int i=0;i<n-1;i++){
        scanf("%d%d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(v,1);
    cout<<total<<endl;
}
