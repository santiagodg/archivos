#include <fstream>  // 1
#include <iostream>
using namespace std;

int main()
{
	ofstream ofSalida;  // 2
	int iNum1, iNum2, iX;

	ofSalida.open("Sumas.txt", ofstream::app);  // 3

	for (iX = 0; iX < 3; iX++)  // 4
	{
		cout << "Numero 1: ";
		cin >> iNum1;
		cout << "Numero 2: ";
		cin >> iNum2;
		ofSalida << iNum1 << " + " << iNum2 << " = " << (iNum1 + iNum2) << endl;
	}

	ofSalida.close();  // 5

	return 0;
}
