#include <iostream>

using namespace std;

int main()
{
	int aux,a,b;
	cin>>a>>b;
	while(a!=b)
	{
		if(a>b)
			a-=b;
		else b-=a;
	}
	cout<<a;
	return 0;
}
