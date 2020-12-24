// ConsoleApplication2.cpp : main project file.

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include <iomanip>
using namespace std;
using namespace System;

void generamonto(int *n, int*monto)
{
	srand(time(NULL));
	for (int i = 0; i < *n; i++)
	{
		monto[i] = 25 + rand() % +500 + 1 - 25;

	}
}

void salidadatos(int *n, int*monto)
{

	for (int i = 0; i < *n; i++)
		cout << "el monto de la persona " << i + 1 << " es " << monto[i] << endl;

}
//
void ordenascendente(int *n, int*monto)
{
	float temp;
	cout << "montos ordenados ascendentemente " << endl;

	for (int i = 0; i < *n - 1; i++)
	{
		for (int j = i + 1; j < *n; j++)
			if (monto[i] > monto[j])
			{
				temp = monto[i];
				monto[i] = monto[j];
				monto[j] = temp;

			}
	}
}

void salidadedatosascendentes(int *n, int*monto)
{
	for (int i = 0; i < *n; i++)
		cout << "el monto de la persona " << i + 1 << " es " << monto[i] << endl;
}

void gasto100y300(int *n, int*monto)
{
	int gasto100y300 = 0;
	for (int i = 0; i < *n; i++)
	{
		if (monto[i] > 100 && monto[i] < 300)
			gasto100y300++;
		
	}
	cout << "el numero de personas que gastaron entre 100 y 300 soles son: " << gasto100y300 << endl;
}
void cantidadimpar(int *n, int*monto)
{
	int impares = 0;
	for (int i = 0; i < *n; i++)
	{
		if (monto[i] % 2!=0)
			impares++;
	}
	cout << "cantidad de montos impares" << impares << endl;
}



int main()
{


	//ingreso de numero de alumnos
	int n;
	cout << "ingresa cantidad de alumnos "; cin >> n;
	while (n <= 0 || n > 200)
	{
		cout << "ingresa cantidad de alumnos "; cin >> n;
	}
	int*monto;
	monto = new int[n];

	//declaracion de va
	generamonto(&n, monto);
	salidadatos(&n, monto);
	ordenascendente(&n, monto);
	salidadedatosascendentes(&n, monto);
	gasto100y300(&n, monto);
	cantidadimpar(&n, monto);
	//ordenascendente(&n, monto);
	/*reporte(&n, monto);*/
	_getch();
}