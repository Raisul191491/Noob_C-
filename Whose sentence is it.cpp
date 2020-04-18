#include<bits/stdc++.h>
#define com(i,n)    for(int i=0;i<n;i++)
#define dom(i,n)    for(int i=1;i<=n;i++)
#define mom(i,n)    for(int i=n;i>=0;i--)
#define sortI(a,n)  sort(a,a+n)
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    cin.ignore();
    com(i,n)
    {
        getline(cin,s);
        if (s.length() >= 5)
        {
            if (s.substr(s.length() - 5, 5) == "lala.")
            {
                if (s.substr(0, 5) == "miao.")
                {
                    cout << "OMG>.< I don't know!" << endl;
                }
                else
                {
                    cout << "Freda's" << endl;
                }
            }
            else
            {
                if (s.substr(0, 5) == "miao.")
                {
                    cout << "Rainbow's" << endl;
                }
                else
                {
                    cout << "OMG>.< I don't know!" << endl;
                }
            }
        }
        else
        {
            cout << "OMG>.< I don't know!" << endl;
        }
    }
}
