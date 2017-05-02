#include <iostream>

using namespace std;

int main()
{
	int k[10]={0},a[10],b[10],n,i,j;

	cin>>n;//citesc nr. elemente
	for(i=0;i<n;i++)
		cin>>a[i];//citesc vectorul
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)//parcurgem vectorul cu i si j
			if(a[i]>a[j])
				k[i]++;
			else k[j]++;//aranjez prin k in b
	for(i=0;i<n;i++)
		b[k[i]]=a[i];//se stabileste valoarea a[i] in poz data de k in b
	for(i=0;i<n;i++)
		cout<<b[i]<<" ";//afisare
	return 0;
}
/*
 * Se compara elementul curent cu toate de dupa el si in vectorul k se stabileste 
 * pozitia in care trebuie sa ajunga elementul curent in vectorul sortat.
 *
 */
