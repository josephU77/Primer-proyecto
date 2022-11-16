#include<stdio.h>
int main()
{
	//declaarr variables
	int bfSize, bfReserved1, bfReserved2, bfOffBits, bfSizex, bfOffBitsx;

	//Leer variables
	scanf_s("%i", &bfSize);
	scanf_s("%i", &bfOffBits);

	//Calcular variables
	bfSizex = bfSize;
	bfOffBitsx = bfOffBits;
	bfReserved1 = 0000;
	bfReserved2 = 0000;


	//Imprimir resultado
	printf("%c%c%08X%04i%04i%08X", 66, 77, bfSizex, bfReserved1, bfReserved2, bfOffBitsx);
	return 0;

}