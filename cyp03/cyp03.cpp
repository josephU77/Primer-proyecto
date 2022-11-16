#include<stdio.h>
void main(void)
{
	//Declaramos variables
	int dia, mes, anio;

	//Leemos variables
	scanf_s("%i", &dia);
	scanf_s("%i", &mes);
	scanf_s("%i", &anio);

	//Calculamos variables
	if (mes == 1 || mes == 3 || mes == 5 || mes == 8 || mes == 7 || mes == 10)
	{   //pasamos de 4 de octubre de 1852 a 15 de octubre de 1852
		if (anio == 1582 && mes == 10 && dia == 4)
		{
			dia = 15;
		}
		//calculamos dias como cualquier otro pero en meses con31 dias
		else
		{
			if (dia < 31)
			{
				dia = ++dia;
			}
			else
			{
				if (dia == 31)
				{
					dia = 1;
					mes = ++mes;
				}

			}
		}
	}
	//calculamos dias con meses con 30 dias
	else
	{
		if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
		{
			if (dia < 30)
			{
				dia = ++dia;
			}
			else
			{
				if (dia == 30)
				{
					dia = 1;
					mes = ++mes;
				}
			}
		}
		//verificamos que no estemos dentro de un año bisiesto en febrero
		else
		{
			if (mes == 2)
			{
				if ((anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 )&& dia == 28 )
				{
					dia = ++dia;
				}
				else
				{
					if (dia < 28)
					{
						dia = ++dia;
					}
					else
					{
						if (dia == 28)
						{
							dia = 1;
							mes = ++mes;
						}
					}
				}
			}
			//verificamos que no estemos pasando a un mes 13 inexistente y si pasemos de año
			else
			{
				if (mes == 12)
				{
					if (dia < 31)
					{
						dia = ++dia;
					}
					else
					{
						if (dia == 31)
						{
							dia = 1;
							mes = 1;
							anio = ++anio;
						}
					}
				}
			}
		}
	}
	//imprimimos resultados
	printf("%2i %2i %4i", dia, mes, anio);
}