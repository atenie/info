#include <iostream>

using namespace std;

int main()
{
	int n,i,j,poz,mini,aux,v[10];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>v[i];//citire vector
	for(i=0;i<n-1;i++)
	{
		mini=v[i];//se retine elementul curent
		poz=i;//se retine pozitia lui
		for(j=i+1;j<n;j++)//aflam minimul
			if(v[j]<mini)
			{
				mini=v[j];//mini se actualizeaza
				poz=j;//la fel si pozitia lui
			}
		aux=v[i];//	se
		v[i]=v[poz];//	interschimba
		v[poz]=aux;//	numerele
	}
	for(i=0;i<n;i++)
		cout<<v[i]<<" ";//afisare
	return 0;
}
/* 
 * Se cauta elementul minim de la pozitia curenta pana la sfarsitul
 * vectorului. Elementul minim se interschimba cu elementul curent.
 *
 */
