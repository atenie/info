#include <iostream>

// Se da un numar par n. Sa se scrie ca suma de numere prime.

using namespace std;

int main()
{
	int n,x,ok,okp,d;
	cin>>n; // citire
	while(n!=0) // cata vreme nu s-a terminat numarul
	{
		x=n; // x = copie recursiva a n
		ok=1; // initializam ok cu 1
		while(ok==1) // cata vreme ok-ul e 1
		{
			okp=1; // Initializam un al doilea ok pentru scadere.
			for(d=2;d<=x/2;d++)
				if(x%d==0) // Daca numarul are divizor...
					okp=0; // ...ramanem in bucla.
			if(okp==1) // Daca poate fi impartit cu acest numar...
				ok=0; // ...se iese din while.
			else x--; // Altfel se scade pana la cel mai mare divizor apropriat.
		}
		n=n-x; // se scade divizorul
		cout<<x<<" "; // si se afiseaza
	}
	return 0;
}
