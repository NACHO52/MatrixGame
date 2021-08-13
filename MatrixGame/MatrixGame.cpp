#include "stdafx.h"


using namespace std;



int main()
{
	int option = 0;
	char name[10];
	char calculator[10];
	int score = 0;
	int lifes = 3;
	int round = 1;
	int column, row, direction;
	char operation;
	char matrix[matrixX][matrixY];
	char userScores[10][13];
	fillStandarScores(userScores);

	rlutil::setBackgroundColor(rlutil::BLACK);
	do
	{
		rlutil::cls();
		cout << endl;
		rlutil::locate(36, 3);
		cout << "Bienvenido a" << endl;
		rlutil::locate(36, 4);
		cout << "MATHRIX GAME" << endl;
		cout << endl;

		rlutil::setColor(rlutil::WHITE);

		rlutil::locate(25, 8);
		rlutil::locate(25, 9);
		cout << "  1 - JUGAR" << endl;
		rlutil::locate(25, 10);
		cout << "  2 - ESTADISTICAS" << endl;
		rlutil::locate(25, 12);
		cout << "                                 " << endl;
		rlutil::locate(25, 13);
		cout << "  0 - SALIR" << endl;
		rlutil::locate(25, 14);
		rlutil::locate(25, 8);
		drawMenuBox();
		rlutil::locate(25, 16);

		cout << "OPCION: ";

		rlutil::setColor(rlutil::WHITE);
		cin >> option;
		switch (option)
		{
		case 0:
			rlutil::cls();
			rlutil::locate(28, 13);
			cout << "NOS VEMOS LA PROXIMA..." << endl;
			Sleep(1000);
			return 0;
			break; 
		case 1:
			rlutil::cls();
			rlutil::setColor(rlutil::LIGHTGREEN);
			rlutil::locate(5, 5);
			cout << "NOMBRE: ";
			rlutil::locate(5, 7);
			cout << "MODELO DE CALCULADORA: ";

			rlutil::setColor(rlutil::WHITE);
			rlutil::locate(29, 5);
			cin >> name;
			rlutil::locate(29, 7);
			cin >> calculator;

			rlutil::cls();
			fillMatrix(matrix, matrixX, matrixY);
			lifes = 3;
			round = 0;
			score = 0;

			do
			{
				renderHeader(name, lifes, calculator, score, round);
				showMatrix(matrix, matrixX, matrixY);

				rlutil::setColor(rlutil::LIGHTGREEN);
				rlutil::locate(41, 8);
				cout << "FILA: ";
				rlutil::locate(41, 10);
				cout << "COLUMNA: ";
				rlutil::locate(41, 12);
				cout << "OPERACION: ";
				rlutil::locate(41, 14);
				cout << "DIRECCION: ";

				rlutil::setColor(rlutil::WHITE);
				rlutil::locate(55, 8);
				cin >> row;
				rlutil::locate(55, 10);
				cin >> column;
				rlutil::locate(55, 12);

				if (row == 99 && column == 99)
				{
					score = 100;
					break;
				}

				if (row == 0 && column == 0)
				{
					lifes--;
					fillMatrix(matrix, matrixX, matrixY);
					rlutil::cls();
					continue;
				}
				cin >> operation;
				rlutil::locate(55, 14);
				cin >> direction;
				
				if (!validateInput(row, column, operation, direction, matrix))
				{
					inputValues(row, column, operation, direction, matrix, lifes, score, round);
				}
				else
				{
					lifes--;
				}

				rlutil::anykey();
				rlutil::cls();
				
			} while (lifes > 0);

			drawGameOver();
			Sleep(2500);
			option = 4;
			rlutil::locate(25, 16);
			addScore(score, name, userScores);
			break;
		case 2:
			showStatistics(userScores);
			option = 4;
			break;
		default:
			rlutil::locate(25, 20);
			rlutil::setColor(rlutil::LIGHTRED);
			cout << "OPCION INCORRECTA" << endl;
			cout << "\a";
			break;
		}

	} while (option != 0 && option != 1 && option != 2 && option != 3);

	return 0;
}
