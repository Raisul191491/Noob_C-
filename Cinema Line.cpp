#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
#define sortvi(a)   sort(a.begin(),a.end())
#define sortvd(a)   sort(a.begin(),a.end(),greater<int>())

using namespace std;
int main()
{
    int n;
    cin>>n;
    int fif=0,tf=0,x;
    com(i,n)
    {
        cin>>x;
        if(x==25)
            tf++;
        else if(x==50)
        {
            if(tf>0)
            {
                fif++;
                tf--;
            }
            else if(tf==0)
            {
                cout << "NO\n";
                return 0;
            }
        }
        else if(x==100)
        {
            if(fif>=1&&tf>=1)
            {
                fif--;
                tf--;
            }
            else if(tf>=3)
            {
                tf-=3;
            }
            else
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
}
