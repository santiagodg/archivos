#include <fstream>  // 1
#include <iostream>
using namespace std;

int main()
{
	int iNum1, iNum2;
	ifstream ifEntrada;  // 2

	ifEntrada.open("Numeros.txt");  // 3

	while (!ifEntrada.eof())  // 4
	{
		ifEntrada >> iNum1 >> iNum2;
		cout << iNum1 << " " << iNum2 << " ";
	}

	ifEntrada.close();  // 5

	return 0;
}
