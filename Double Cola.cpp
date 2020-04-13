#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    t=1;
    while(n!=0)
    {
        if(5*t<n)
        {
            n-=5*t;
        }
        else
        {
            n--;
            n/=t;
            if(n==0)
            {
                cout << "Sheldon" <<endl;
            }
            else if(n==1)
            {
                cout << "Leonard" <<endl;
            }
            else if(n==2)
            {
                cout << "Penny" <<endl;
            }
            else if(n==3)
            {
                cout << "Rajesh" <<endl;
            }
            else
            {
                cout << "Howard" <<endl;
            }
            break;
        }
        t*=2;
    }
}
