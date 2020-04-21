#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
bool ispal (string x)
{
    string y;
    y=x;
    reverse(y.begin(),y.end());
    if(y==x)
        return true;
    else
        return false;
}
int main()
{
    int len,l=0;
    string sx,a;
    cin>>sx;

    com(i,sx.size()+1)
    {
        com(j,sx.size()+1)
        {
            a=sx.substr(i,j);
            if(!ispal(a))
            {
                len=a.size();
                l=max(len,l);
            }
        }
    }
    cout << l << endl;

}
