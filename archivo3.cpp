#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	string sNombre, sNombreMax, sNombreMin;
	double dCal1, dCal2, dCal3, dContador = 0, dSuma = 0, dPromIndiv, dPromGen;
	double dCalifMax = -1, dCalifMin = 1000;
	ifstream ifCalifs;

	ifCalifs.open("Califs.txt");

	while (!ifCalifs.eof())
	{
		ifCalifs >> sNombre >> dCal1 >> dCal2 >> dCal3;

		dPromIndiv = dCal1 * 0.1 + dCal2 * 0.3 + dCal3 * 0.6;
		cout << sNombre << " " << dPromIndiv << endl;

		dSuma += dPromIndiv;

		if (dPromIndiv > dCalifMax)
		{
			dCalifMax = dPromIndiv;
			sNombreMax = sNombre;
		}
		if (dPromIndiv < dCalifMin)
		{
			dCalifMin = dPromIndiv;
			sNombreMin = sNombre;
		}

		dContador++;
	}

	dPromGen = dSuma / dContador;

	cout << endl;
	cout << "Promedio del grupo: " << dPromGen << endl;
	cout << "Calificacion mas alta: " << sNombreMax << " " << dCalifMax << endl;
	cout << "Calificacion mas baja: " << sNombreMin << " " << dCalifMin << endl;

	ifCalifs.close();

	return 0;
}