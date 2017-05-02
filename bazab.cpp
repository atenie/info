#include <iostream>

using namespace std;

// Din baza b in baza 10

int main()
{
	int n,x,b,p;
	cin>>n>>b;
	x=0;
	p=1;
	while(n>0)
	{
		x+=p*(n%10);
		p*=b;
		n/=10;
	}
	cout<<x;
	return 0;
}
