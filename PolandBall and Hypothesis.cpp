#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
#define sortD(a,n)  sort(a,a+n,greater<int>())
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n == 1)
    {
        cout << "3\n";
    }
    else if(n == 2)
    {
        cout << "4\n";
    }
    else if(n % 2 == 1)
    {
        cout << "1\n";
    }
    else
        cout << n-2 << endl;

     //I think too much :''')
}
