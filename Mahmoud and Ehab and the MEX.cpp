#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,x,a,counter;
    cin>>n>>x;
    counter=x;
    while(n--)
    {
        cin>>a;
        if(a<x)
          counter--;
        else if(a==x)
          counter++;
    }

    cout << counter << endl;
}
