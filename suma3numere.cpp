#include <iostream>

using namespace std;

int main()
{
	int n, i, v[10], k[3]={0}, s=0, smax=-1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>v[i];
		s=s-k[i%3];
		s+=v[i];
		if(s>smax)
		{
			smax=s;
			k[i%3]=v[i];
		}
	}
	for(i=0;i<3;i++)
	{
		cout<<k[i]<<" ";
	}
	cout<<endl<<smax;
	return 0;
}
