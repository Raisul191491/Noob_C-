#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string num;
    cin>>num;
    if(n==3)
    {
         for(int i=0; i<n; i++)
         {
              cout<< num[i];
         }
    }
    else if(n==5)
    {
        for(int i=0; i<n; i++)
        {
            cout<< num[i];
            if(i==1)
            {
                cout<< "-";
            }
        }
    }
    else if(n==6 || n==2 || n==4)
    {
        for(int i=0; i<n; i++)
        {
            cout<< num[i];
            if(i==1 && i<n-1 || i==n-3 && i<n-1)
            {
                cout<< "-";
            }
        }
    }
    else if(n%3==0)
    {
        for(int i=0; i<n; i++)
        {
            cout<< num[i];
            if((i+1)%3==0 && i<n-1)
                cout<< "-";
        }
    }
    else if(n%3==1)
    {
        for(int i=0; i<n; i++)
        {
            cout<< num[i];
            if(i==1 || i==n-3)
            {
                cout<< "-";
            }
            if((i-1)%3==0 && i>1 && i< n-3)
            {
                cout<< "-";
            }
        }
    }
    else if(n%3==2)
    {
        for(int i=0; i<n; i++)
        {
            cout<< num[i];
            if(i==1)
            {
                cout<< "-";
            }
            if((i-1)%3==0 && i>1 && i<n-1)
            {
                cout<< "-";
            }
        }
    }
}
