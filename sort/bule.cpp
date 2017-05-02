#include <iostream>

using namespace std;

int main()
{
	int n,v[10], gasit, i, aux;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>v[i];//citire
	do
	{
		gasit=0;//initializam un ok
		for(i=0;i<n-1;i++)//parcurgem vectorul
			if(v[i]>v[i+1])//daca gasim un numar mai mare
			{
				aux=v[i];
				v[i]=v[i+1];
				v[i+1]=aux;//interschimbam
				gasit=1;//ok-ul il confirmam
			}
	}while(gasit);//pana ok-ul nu mai este 0
	for(i=0;i<n;i++)
		cout<<v[i]<<" ";//afisare
	return 0;
}
/*
 * Se parcurge variabila i inversand continuturile componentelor alaturate 
 * care nu sunt in ordine crescatoare (/descrescatoare). 
 * Procedeul se repeta pana cand are loc o parcurgere in care nu se fac inversari.
 * (adica gasit are valoarea 1 de doua ori.)
 */
