#include<bits/stdc++.h>
#define com(n)    for(int i=0;i<n;i++)
#define dom(n)    for(int j=0;j<n;j++)
#define mom(n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
    int k,x=10;
    cin>>k;
    while(k--)
    {
        int sum=0,y;
        x+=9;
        y=x;
        while(y!=0)
        {
            sum+=y%10;
            y/=10;
        }
        if(sum!=10)
            k++;
    }
    cout << x <<endl;

}
