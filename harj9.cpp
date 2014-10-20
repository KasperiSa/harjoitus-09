#include<iostream>
using namespace std;
int main() {
	
	int luku1, luku2;

	cout << "Anna kaksi kokonaislukua";
	cin >> luku1 >> luku2;

	
	int valinta;

	cout << "\n1. Summa";
	cout << "\n2. Erotus";
	cout << "\n3. Tulo";
	cout << "\n4. Osamaara";
	cout << "\n5. Jakojaannos";

	int Summa = luku1 + luku2;
	int Erotus = luku1 - luku2;
	int Tulo = luku1*luku2;
	int Osamaara = luku1 / luku2;
	int Jakojaannos = luku1 % luku2;

	
	cin >> valinta;
	
	switch (valinta)
	{
	case 1: cout << "\n " << Summa;
				break;
	case 2: cout << "\n " <<  Erotus;
				break;
	case 3: cout << "\n " << Tulo;
				break;
	case 4: cout << "\n " << Osamaara;
				break;
	case 5: cout << "\n " << Jakojaannos;
				break;
			default: cout << "ET VALINNUT MITAAN TOIMINTOA!\n";
				break;
	}
	


}



