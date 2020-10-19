#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cnt = 0, n, sum = 0;
	cin >> n;
	int b[n], a[6]={0};
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
		a[b[i]]++;
		sum += b[i];

	}
	while (double(sum) < 4.50*double(n) && a[2]>0)
	{
		sum = (sum + 3);
		cnt++;
		a[2]--;
	}
	while (double(sum) < 4.50*double(n) && a[3]>0)
	{
		sum = (sum + 2);
		cnt++;
		a[3]--;
	}
	while (double(sum) < 4.50*double(n) && a[4]>0)
	{
		sum = (sum + 1);
		cnt++;
		a[4]--;
	}
	cout << cnt << endl;
}
