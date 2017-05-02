#include <iostream>

using namespace std;

int main()
{
	int v[1000]={0},i,j;
	for(i=2;i<999;i++)	//incepand cu 2
		for(j=i+1;j<1000;j++)	//toate numerele multiple i
			if(j%i==0 && v[j]==0)	//daca se impart si nu sunt marcate
				v[j]=1;		//sunt marcate cu 1
	for(i=2;i<1000;i++)
		if(v[i]==0)	//daca numerele nu sunt marcate
			cout<<i<<" ";	//afiseaza
	return 0;
}
