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
          int r,c;
          cin>>r>>c;
          if(r==1 && c==1)
          {
               cout << "19\n";
          }
          else
          {
               cout << "21\n";
               cout << (r+c)/2 << " " << (r+c)/2 << endl;
               cout << "1 1" << endl;
          }
          cout << "2 2" << endl;
          cout << "3 1" << endl;
          cout << "1 3" << endl;
          cout << "2 4" << endl;
          cout << "1 5" << endl;
          cout << "5 1" << endl;
          cout << "6 2" << endl;
          cout << "7 1" << endl;
          cout << "1 7" << endl;
          cout << "2 8" << endl;
          cout << "8 2" << endl;
          cout << "7 3" << endl;
          cout << "8 4" << endl;
          cout << "4 8" << endl;
          cout << "5 7" << endl;
          cout << "6 8" << endl;
          cout << "8 6" << endl;
          cout << "7 7" << endl;
          cout << "8 8" << endl;

     }
}
