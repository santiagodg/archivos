#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	ofstream ofTablas;
	int iNumero, iLimiteI, iLimiteS;
	char cOtra;

	ofTablas.open("Tablas.txt", ofstream::app);

	do
	{
		cout << "iNumero: ";
		cin >> iNumero;
		cout << "iLimiteI: ";
		cin >> iLimiteI;
		cout << "iLimiteS: ";
		cin >> iLimiteS;

		for (int i = iLimiteI; i <= iLimiteS; ++i)
		{
			ofTablas << iNumero << " * " << i << " = " << iNumero * i << endl;
		}
		ofTablas << endl;

		cout << endl;
		cout << "Otra tabla? (s/n): ";
		cin >> cOtra;
		cout << endl;

	} while (cOtra == 's' || cOtra == 'S');

	ofTablas.close();

	return 0;
}