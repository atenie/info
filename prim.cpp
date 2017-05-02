#include <iostream>

using namespace std;

int main()
{
	int n,i;
	cin>>n;
	if(n==1)
		cout<<"Nu";
	for(i=2;i*i<=n;i++)
		if(n%i==0)
			cout<<"Nu";
	return 1;
}
