#include <iostream>

using namespace std;

int main()
{
	int n,v[10]={0};
	cin>>n;
	while(n!=0)
	{
		v[n%10]++;
		n/=10;
	}
	for(n=0;n<10;n++)
	{
		while(v[n]!=0)
		{
			cout<<n;
			v[n]--;
		}
	}
	return 0;
}
