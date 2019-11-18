#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	int iID_PRODUCTO, iTOTAL_VENDIDOS;
	double dPRECIO_UNITARIO, dVENTAS;
	double dTOTAL = 0.0, dTOTAL_IMP = 0.0;
	ifstream ifVentas;
	ofstream ofFactura;

	ifVentas.open("Ventas.txt");
	ofFactura.open("Factura.txt");

	ofFactura << "ID_PRODUCTO  PRECIO_UNITARIO  TOTAL_VENDIDOS  VENTAS  VENTAS+IMP" << endl;

	while (!ifVentas.eof())
	{
		ifVentas >> iID_PRODUCTO >> dPRECIO_UNITARIO >> iTOTAL_VENDIDOS;

		dVENTAS = dPRECIO_UNITARIO * iTOTAL_VENDIDOS;
		dTOTAL += dVENTAS;
		dTOTAL_IMP += dVENTAS * 1.16;

		ofFactura << iID_PRODUCTO << " " << dPRECIO_UNITARIO << " " << iTOTAL_VENDIDOS << " " << dVENTAS << " " << dVENTAS * 1.16 << endl;
	}

	ofFactura << endl;
	ofFactura << "TOTAL: " << dTOTAL << endl;
	ofFactura << "TOTAL+IMP: " << dTOTAL_IMP << endl;

	ifVentas.close();
	ofFactura.close();

	return 0;
}