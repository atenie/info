#include <iostream>

using namespace std;

int prim(int n)
{
	int i;
	if(n==1)
	{
		return 0;
	}
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	cin>>n;
	if(prim(n)==1)
	{
		cout<<"da";
	}
	else cout<<"nu";
	return 0;
}
