#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,t,sum=0,books=0,maxi=0;
    cin>>n>>t;
    long int s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]<=(t-sum))
        {
            sum+=s[i];
            books++;
            if(s[i+1]>(t-sum))
            {
                i=i-(books-1);
                maxi=max(books,maxi);
                sum=0;
                books=0;
            }
        }
    }
    cout << maxi <<endl;
}
