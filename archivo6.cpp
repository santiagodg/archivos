#include <fstream>
using namespace std;

int main()
{
	ifstream ifNumeros;
	ofstream ofNumerosConComas;

	ifNumeros.open("Numeros.txt");
	ofNumerosConComas.open("NumerosConComas.txt");

	while (!ifNumeros.eof())
	{
		string sNumero;
		ifNumeros >> sNumero;

		int iResiduo = 0;
		if (sNumero.length() > 3)
		{
			iResiduo = sNumero.length() % 3;
			for (int i = 0; i < iResiduo; i++)
			{
				ofNumerosConComas << sNumero[i];
				if (i == iResiduo - 1)
				{
					ofNumerosConComas << ",";
				}
			}
		}

		for (int i = iResiduo, j = 1; i < sNumero.length(); i++, j++)
		{
			ofNumerosConComas << sNumero[i];
			if (j == 3 && i < sNumero.length() - 1)
			{
				ofNumerosConComas << ",";
				j = 0;
			}
		}
		ofNumerosConComas << endl;
	}

	ifNumeros.close();
	ofNumerosConComas.close();

	return 0;
}
