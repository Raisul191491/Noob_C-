#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,temp,sum1=0,sum2=0;
	cin>> n;
	int ara[n];
	for(i=0;i<n;i++)
	{
		cin>>ara[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ara[i]<ara[j])
			{
				temp=ara[i];
				ara[i]=ara[j];
				ara[j]=temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		sum2=0;
		sum1=sum1+ara[i];
		for (int j = i+1; j < n; j++)
		{
			sum2=sum2+ara[j];
		}
		if(sum1>sum2)
		{
			cout<< i+1;
			break;
		}
	}

	return 0;
}
