#include <iostream>

using namespace std;

int main()
{
	int n,d,p;
	cin>>n;
	d=2;
	while(n>1)
	{
		p=0;
		while(n%d==0)
		{
			n/=d;
			p++;
		}
	if(p)
		cout<<d<<" la puterea "<<p<<endl;
	d++;
	}
	return 0;
}
