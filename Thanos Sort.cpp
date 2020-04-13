#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,cnt=1000;
    cin>>n;
    int ara[n];
    for(int i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    for(int i=0; i<n-1; i++)
    {
        int sum=0;
        for(int j=0; j<n-1; j++)
        {
            if(ara[j]<=ara[j+1])
            {
                sum++;
            }
        }
        if(sum+1==n)
        {
            cout << n << endl;
            break;
        }
        else if(sum>0 && sum+1<n)
        {
            n/=2;
            i--;
        }
        else{
          cout << "1" <<endl;
        }
    }
}
