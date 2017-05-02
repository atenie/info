#include <iostream>

using namespace std;

int main()
{
	int n,x,v[10],i,j,ok;
	cin>>x>>n;
	for(i=0;i<n;i++)
		cin>>v[i];
	i=0;
	j=n-1;
	ok=0;
	while(i<=j && !ok)
	{
		if(x==v[(i+j)/2])
		{
			cout<<"gasit in pozitia "<<(i+j)/2;
			ok=1;
		}
		else if(x>v[(i+j)/2])
			i=((i+j)/2)+1;
		else j=((i+j)/2)-1;
	}
	if(!ok)
		cout<<"nu exista";
	return 0;
}
/* Avem un vector ordonat crescator.
 * Parcurgem vectorul  de la mijloc cu i(0) si j(n). 
 * In functie de termenul din mijloc ((i+j)/2), i sau j iau valoarea din mijloc.
 * Repetam acest proces de injumatatire pana ajungem la numarul final.
 */
