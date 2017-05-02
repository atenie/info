#include <iostream>

using namespace std;

int main()
{
	int aux,a,b;
	cin>>a>>b;
	while(b!=0)
	{
		aux=b;
		b=a%b;
		a=aux;
	}
	cout<<a;
	return 0;
}
