#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    com(i,t)
    {
        cin>>n;
        if(n<=1)
            cout << "-1\n";
        else
        {
            cout<< "2";
            n--;
            while(n--)
                cout<< "3";
            cout << endl;
        }
    }
}
