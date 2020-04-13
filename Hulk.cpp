#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,two;
    cin>>n;
    two=n/2;
    if(n%2==0)
    {
        while(two--)
        {
            cout << "I hate that I love ";
            if(two>0)
                cout << "that ";
            }
    }
    else if(n%2==1)
    {
        while(two--)
        {
            cout << "I hate that I love ";
            cout << "that ";
        }
        cout<< "I hate ";
    }
    cout<< "it" <<endl;
}
