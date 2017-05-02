#include <iostream>

using namespace std;

int main()
{
	int a[10],n,i,j,aux;
	cin>>n;//citesc nr. de elemente
	for(i=0;i<n;i++)
		cin>>a[i];//citesc vectorul
	for(i=1;i<n;i++)//parcurgand vectorul
	{
		aux=a[i];//aux = copie a a[i]
		j=i-1;
		while(aux<a[j]&&j>=0)//compar elem. curent cu cele anterioare
		{
			a[j+1]=a[j];// mutam  la DREAPTA elementele
			j--;// decrementam
		}//gasesc pozitia de inlocuit
		a[j+1]=aux; // inlocuim, terminand interschimbarea
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";// afisare
	return 0;
}
/* 
 * Se compara elementul curent cu toate de dinaintea lui pentru a-i gasi 
 * pozitia curenta.
 * Daca elementul cu care se compara este mai mare decat elementul curent 
 * se va deplasa cu o pozitie la dreapta.
 */
