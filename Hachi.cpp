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
    string s;
    cin>>s;
    int sum=0;
    if(s.length()==1)
    {
        if(s[0]=='8')
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else if(s.length()==2)
    {
        int num1,num2;
        num1=s[0]-'0'+(s[1]-'0')*10;
        num2=(s[1]-'0')+(s[0]-'0')*10;
        if(num1%8==0 || num2%8==0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else
    {
        vector<int>num;
        int cou[10]={0};
        com(i,s.length())
        {
             sum=s[i]-'0';
            if(cou[sum]<3)
            {
                cou[sum]++;
            }
        }
        dom(i,9)
        {
             com(j,cou[i])
             {
                  num.push_back(i);
             }
        }
        com(i,num.size())
        {
            com(j,num.size())
            {
                 if(i==j) continue;
                com(k,num.size())
                {
                    if(i==k || j==k)
                        continue;
                    sum=num[i]*100+num[j]*10+num[k];
                    if(sum%8==0)
                    {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
        cout << "No" << endl;
    }
}
