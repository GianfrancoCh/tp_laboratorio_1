
#include <stdio.h>
#include <stdlib.h>

float PrecioDebito(float precio)
{
	float resultado;
	resultado=precio-(precio *0.10);
	return resultado;
}
float PrecioCredito(float precio)
{
	float resultado;
	resultado=precio+(precio *0.25);
	return resultado;
}
float PrecioBTC(float precio)
{
	float valorBitcoin=4596394.85;
	float resultado;
	resultado=(precio/valorBitcoin);
	return resultado;
}
float PrecioUnitario(float precio, float km)
{
	float resultado;
	resultado=precio/km;
	return resultado;
}
float DiferenciaDePrecio(float precioLatam, float precioAerolinea)
{
	float resultado;
	if(precioLatam>precioAerolinea)
	{
		resultado=precioLatam-precioAerolinea;
	}else{
		resultado=precioAerolinea-precioLatam;
	}
	return resultado;
}
void DatosHC(void)
{
	float kilometrosHC=7090;
	float precioAerolineasHC=162965;
	float precioLatamHC=159339;
	float debitoAerolineasHC;
	float debitoLatamHC;
	float creditoAerolineasHC;
	float creditoLatamHC;
	float bitcoinAerolineasHC;
	float bitcoinLatamHC;
	float precioUnitarioAerolineasHC;
	float precioUnitarioLatamHC;
	float diferenciaPrecioHC;


	debitoAerolineasHC=PrecioDebito(precioAerolineasHC);
	creditoAerolineasHC=PrecioCredito(precioAerolineasHC);
	debitoLatamHC=PrecioDebito(precioLatamHC);
	creditoLatamHC=PrecioCredito(precioLatamHC);
	bitcoinAerolineasHC=PrecioBTC(precioAerolineasHC);
	bitcoinLatamHC=PrecioBTC(precioLatamHC);
	precioUnitarioAerolineasHC=PrecioUnitario(precioAerolineasHC, kilometrosHC);
	precioUnitarioLatamHC=PrecioUnitario(precioLatamHC, kilometrosHC);
	diferenciaPrecioHC=DiferenciaDePrecio(precioAerolineasHC, precioLatamHC);

	 printf("Kms: Ingresado:%.2f KMs"
			 "\n\nPrecio Latam: $ %.2f"
		 "\na) Precio con tarjeta de débito: $ %.2f"
		 "\nb) Precio con tarjeta de crédito: $ %.2f"
		 "\nc) Precio pagando con bitcoin: %.6f BTC"
		 "\nd) Precio unitario:  %.2f $/KM", kilometrosHC, precioLatamHC, debitoLatamHC, creditoLatamHC, bitcoinLatamHC, precioUnitarioLatamHC);
	 printf("\n\nPrecio Aerolíneas: $ %.2f KMs"
		"\na) Precio con tarjeta de débito: $ %.2f"
		"\nb) Precio con tarjeta de crédito $ %.2f"
		"\nc) Precio pagando con bitcoin: %.6f BTC"
		"\nd) Precio unitario: %.2f $/KM", precioAerolineasHC, debitoAerolineasHC, creditoAerolineasHC, bitcoinAerolineasHC, precioUnitarioAerolineasHC);
	 printf("\n\nLa diferencia de precio es: $ %.2f\n", diferenciaPrecioHC);

}

