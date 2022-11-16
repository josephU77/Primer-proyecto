#include <stdio.h>
void main(void)
{
	//Declarar variables
	int AnchoDeLaPantalla, AltoDeLaPantalla, CoordenadaXIzquierda, CoordenadaYIzquierda, CoordenadaXDerecha, CoordenadaYDerecha;
	float PorcentajeCoordenadaX, PorcentajeCoordenadaY, PorcentajeAncho, PorcentajeAlto;

	//Leer variables
	scanf_s("%i", &AnchoDeLaPantalla);
	scanf_s("%i", &AltoDeLaPantalla);
	scanf_s("%f", &PorcentajeCoordenadaX);
	scanf_s("%f", &PorcentajeCoordenadaY);
	scanf_s("%f", &PorcentajeAncho);
	scanf_s("%f", &PorcentajeAlto);

	//Calcular variables
	CoordenadaXIzquierda = AnchoDeLaPantalla * PorcentajeCoordenadaX;
	CoordenadaYIzquierda = AltoDeLaPantalla * PorcentajeCoordenadaY; 
	CoordenadaXDerecha = AnchoDeLaPantalla * PorcentajeAncho + CoordenadaXIzquierda;
	CoordenadaYDerecha = AltoDeLaPantalla * PorcentajeAlto + CoordenadaYIzquierda;

	//Mostrar resultado
	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", AnchoDeLaPantalla, AltoDeLaPantalla, PorcentajeCoordenadaX, PorcentajeCoordenadaY, PorcentajeAncho, PorcentajeAlto, CoordenadaXIzquierda, CoordenadaYIzquierda, CoordenadaXDerecha, CoordenadaYDerecha);

}