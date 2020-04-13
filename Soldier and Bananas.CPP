#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,price=0,lend;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++)
        price+=(i*k);

     if(price-n<=0)
          cout << "0\n";
     else
          cout << price-n << endl;
}
