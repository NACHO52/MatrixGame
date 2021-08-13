
#include "stdafx.h"

using namespace std;

void drawMenuBox()
{
	rlutil::setColor(rlutil::LIGHTGREEN);
	//esquina superior izquierda
	rlutil::locate(25, 8);
	cout << (char)201;

	//linea superior
	for (int i = 0; i < 31; i++)
	{
		cout << (char)205;
	}

	//esquina inferior izquierda
	rlutil::locate(25, 14);
	cout << (char)200;

	//linea inferior
	for (int i = 0; i < 31; i++)
	{
		cout << (char)205;
	}

	//linea izquierda
	for (int i = 0; i < 5; i++)
	{
		rlutil::locate(25, 9 + i);
		cout << (char)186;
	}
	//linea derecha
	for (int i = 0; i < 5; i++)
	{
		rlutil::locate(57, 9 + i);
		cout << (char)186;
	}
	//esquina superior derecha
	rlutil::locate(57, 8);
	cout << (char)187;

	//esquina inferior derecha
	rlutil::locate(57, 14);
	cout << (char)188;
}

void drawCredits1Box()
{
	rlutil::setColor(rlutil::BLUE);
	//esquina superior izquierda
	rlutil::locate(21, 5);
	cout << (char)201;

	//linea superior
	for (int i = 0; i < 20; i++)
	{
		cout << (char)205;
	}

	//esquina inferior izquierda
	rlutil::locate(21, 9);
	cout << (char)200;

	//linea inferior
	for (int i = 0; i < 20; i++)
	{
		cout << (char)205;
	}

	//linea Derecha
	for (int i = 0; i < 5; i++)
	{
		rlutil::locate(41, 5 + i);
		cout << (char)186;
	}
	//linea Izquierda
	for (int i = 0; i < 3; i++)
	{
		rlutil::locate(21, 6 + i);
		cout << (char)186;
	}
	//esquina superior derecha
	rlutil::locate(41, 5);
	cout << (char)187;

	//esquina inferior derecha
	rlutil::locate(41, 9);
	cout << (char)188;
}

void drawCredits2Box()
{
	rlutil::setColor(rlutil::BLUE);
	//esquina superior izquierda
	rlutil::locate(14, 11);
	cout << (char)201;

	//linea superior
	for (int i = 0; i < 33; i++)
	{
		cout << (char)205;
	}

	//esquina inferior izquierda
	rlutil::locate(14, 15);
	cout << (char)200;

	//linea inferior
	for (int i = 0; i < 33; i++)
	{
		cout << (char)205;
	}

	//linea Derecha
	for (int i = 0; i < 3; i++)
	{
		rlutil::locate(47, 12 + i);
		cout << (char)186;
	}
	//linea Izquierda
	for (int i = 0; i < 3; i++)
	{
		rlutil::locate(14, 12 + i);
		cout << (char)186;
	}
	//esquina superior derecha
	rlutil::locate(47, 11);
	cout << (char)187;

	//esquina inferior derecha
	rlutil::locate(47, 15);
	cout << (char)188;
}

void drawMatrixBox()
{
	rlutil::setColor(rlutil::LIGHTGREEN);
	//esquina superior izquierda
	rlutil::locate(6, 7);
	cout << (char)201;

	//linea superior
	for (int i = 0; i < 24; i++)
	{
		cout << (char)205;
	}

	//esquina inferior izquierda
	rlutil::locate(6, 19);
	cout << (char)200;

	//linea inferior
	for (int i = 0; i < 24; i++)
	{
		cout << (char)205;
	}

	//linea Izquierda
	for (int i = 0; i < 11; i++)
	{
		rlutil::locate(6, 8 + i);
		cout << (char)186;
	}

	//linea Derecha
	for (int i = 0; i < 11; i++)
	{
		rlutil::locate(30, 8 + i);
		cout << (char)186;
	}
	//esquina superior derecha
	rlutil::locate(30, 7);
	cout << (char)187;

	//esquina inferior derecha
	rlutil::locate(30, 19);
	cout << (char)188;


	//Lineas Matriz
	//Lineas Verticales
	rlutil::locate(6, 9);
	cout << (char)204;
	for (int i = 0; i < 24; i++)
	{
		cout << (char)205;
	}
	rlutil::locate(30, 9);
	cout << (char)185;



	rlutil::locate(6, 11);
	cout << (char)204;
	for (int i = 0; i < 24; i++)
	{
		cout << (char)205;
	}
	rlutil::locate(30, 11);
	cout << (char)185;



	rlutil::locate(6, 13);
	cout << (char)204;
	for (int i = 0; i < 24; i++)
	{
		cout << (char)205;
	}
	rlutil::locate(30, 13);
	cout << (char)185;



	rlutil::locate(6, 15);
	cout << (char)204;
	for (int i = 0; i < 24; i++)
	{
		cout << (char)205;
	}
	rlutil::locate(30, 15);
	cout << (char)185;



	rlutil::locate(6, 17);
	cout << (char)204;
	for (int i = 0; i < 24; i++)
	{
		cout << (char)205;
	}
	rlutil::locate(30, 17);
	cout << (char)185;
	//Lineas Horizontales
	for (int i = 0; i < 11; i++)
	{
		rlutil::locate(10, 8 + i);
		cout << (char)186;
	}
	rlutil::locate(10, 19);
	cout << (char)202;
	rlutil::locate(10, 7);
	cout << (char)203;

	for (int i = 0; i < 11; i++)
	{
		rlutil::locate(14, 8 + i);
		cout << (char)186;
	}
	rlutil::locate(14, 19);
	cout << (char)202;
	rlutil::locate(14, 7);
	cout << (char)203;

	for (int i = 0; i < 11; i++)
	{
		rlutil::locate(18, 8 + i);
		cout << (char)186;
	}
	rlutil::locate(18, 19);
	cout << (char)202;
	rlutil::locate(18, 7);
	cout << (char)203;

	for (int i = 0; i < 11; i++)
	{
		rlutil::locate(22, 8 + i);
		cout << (char)186;
	}
	rlutil::locate(22, 19);
	cout << (char)202;
	rlutil::locate(22, 7);
	cout << (char)203;

	for (int i = 0; i < 11; i++)
	{
		rlutil::locate(26, 8 + i);
		cout << (char)186;
	}
	rlutil::locate(26, 19);
	cout << (char)202;
	rlutil::locate(26, 7);
	cout << (char)203;


	//Agregado de + entre lineas

	rlutil::locate(10, 9);
	cout << (char)206;

	rlutil::locate(10, 11);
	cout << (char)206;

	rlutil::locate(10, 13);
	cout << (char)206;

	rlutil::locate(10, 15);
	cout << (char)206;

	rlutil::locate(10, 17);
	cout << (char)206;

	rlutil::locate(14, 9);
	cout << (char)206;

	rlutil::locate(14, 11);
	cout << (char)206;

	rlutil::locate(14, 13);
	cout << (char)206;

	rlutil::locate(14, 15);
	cout << (char)206;

	rlutil::locate(14, 17);
	cout << (char)206;

	rlutil::locate(18, 9);
	cout << (char)206;

	rlutil::locate(18, 11);
	cout << (char)206;

	rlutil::locate(18, 13);
	cout << (char)206;

	rlutil::locate(18, 15);
	cout << (char)206;

	rlutil::locate(18, 17);
	cout << (char)206;

	rlutil::locate(22, 9);
	cout << (char)206;

	rlutil::locate(22, 11);
	cout << (char)206;

	rlutil::locate(22, 13);
	cout << (char)206;

	rlutil::locate(22, 15);
	cout << (char)206;

	rlutil::locate(22, 17);
	cout << (char)206;

	rlutil::locate(26, 9);
	cout << (char)206;

	rlutil::locate(26, 11);
	cout << (char)206;

	rlutil::locate(26, 13);
	cout << (char)206;

	rlutil::locate(26, 15);
	cout << (char)206;

	rlutil::locate(26, 17);
	cout << (char)206;


	rlutil::setColor(rlutil::YELLOW);
	for (int i = 1; i <= 6; i++)
	{
		rlutil::locate(4, 6 + i * 2);
		cout << i;


		rlutil::locate(4 + i * 4, 20);
		cout << i;
	}
}

void drawGameOver()
{
	rlutil::setColor(rlutil::LIGHTRED);
	rlutil::locate(35,13);
	cout << "GAME OVER";
}