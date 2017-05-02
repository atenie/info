#include <iostream>

using namespace std;

int main()
{
	int v[10]={0},w[100],i,j,n,x,nr;
	cin>>n;//citesc nr. de elemente
	for(i=0;i<n;i++)
	{
		cin>>x;//citesc elementul matricei
		v[x]++;//incrementez in vectorul de frecventa
	}
	for(nr=i=0;i<10;i++)
		for(j=0;j<v[i];j++)
			w[nr++]=i;//aranjez in vectorul w
	for(i=0;i<n;i++)
		cout<<w[i]<<" ";//afisez
	return 0;
}
/*
 * Caz particular: Folosim un vector de frecventa pentru valorile citite, parcurge
 * vectorul de frecventa si copiem in vectorul w elementele care au aparut de cate
 * ori au aparut.
*/
