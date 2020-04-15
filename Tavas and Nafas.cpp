#include<bits/stdc++.h>
#define com(n) for(int i=0;i<n;i++)
#define dom(n) for(int j=0;j<n;j++)
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[10]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
    string l[10]= {"ten", "eleven", "twelve", "thirteen", "fourteen","fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string m[10]= {"", "", "twenty", "thirty", "forty","fifty", "sixty", "seventy", "eighty", "ninety"};
    if (n < 10)
        cout << s[n] << endl;
    else if (n >= 10 and n < 20)
        cout << l[n - 10] << endl;
    else if (n % 10 == 0)
        cout << m[n / 10] << endl;
    else
        cout << m[n / 10] << "-" << s[n % 10] << endl;
}
