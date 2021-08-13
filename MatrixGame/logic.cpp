
#include "stdafx.h"

using namespace std;



void overwriteArray(char *cadenaBase, char *cadenaNueva, int size, int position1, int position2)
{
	for (int i = 0; i < size; i++)
	{
		cadenaBase[i + position1] = cadenaNueva[i + position2];
	}
}

void addScore(int newScore, char *userName, char userScores[10][13])
{
	char newRow[13] = "";
	int tenth;
	int unity;
	if (newScore < 100)
	{
		newRow[0] = ' ';
		tenth = (int)(newScore / 10);
		unity = (int)(newScore - (newScore / 10) * 10);
	}
	else
	{
		int centen = (int)(newScore / 100) + '0';
		newRow[0] = centen;
		tenth = (int)(newScore / 10) / 10;
		unity = (int)(newScore - (newScore / 10) * 10);
	}

	newRow[1] = (char)tenth + '0';
	newRow[2] = (char)unity + '0';
	overwriteArray(newRow, userName, 13, 3,0);
	for (int i = 0; i < 10; i++)
	{
		int hundred = userScores[i][0] != ' ' ? userScores[i][0] - '0' : 0;
		int ten = userScores[i][1] != ' ' ? userScores[i][1] - '0' : 0;
		int unit = userScores[i][2] != ' ' ? userScores[i][2] - '0': 0;
		
		int currentScore = hundred * 100 + ten * 10 + unit;
		
		if (currentScore < newScore)
		{
			char currentRow[13] = "";
			overwriteArray(currentRow, userScores[i], 13, 0,0);
			overwriteArray(userScores[i], newRow, 13,0,0);
			
			int a = currentRow[0] != ' ' ? currentRow[0] - '0' : 0;
			int b = currentRow[1] != ' ' ? currentRow[1] - '0' : 0;
			int c = currentRow[2] != ' ' ? currentRow[2] - '0' : 0;
			newScore = a * 100 + b * 10 + c;
			overwriteArray(userName, currentRow, 10, 0,3);
			if (newScore < 100)
			{
				newRow[0] = ' ';
			}
			else
			{
				char centen = char(newScore / 100);
				newRow[0] = centen;
			}
			newRow[1] = (int)(newScore / 10) + '0';
			newRow[2] = (int)(newScore - (newScore / 10) * 10) + '0';

			overwriteArray(newRow, userName, 13, 3, 0);
		}
	}
}

void fillStandarScores(char userScores[10][13])
{
	overwriteArray(userScores[0], " 50PLAYER1", 13,0,0);
	overwriteArray(userScores[1], " 45PLAYER2", 13, 0,0);
	overwriteArray(userScores[2], " 43PLAYER3", 13, 0,0);
	overwriteArray(userScores[3], " 38PLAYER4", 13, 0, 0);
	overwriteArray(userScores[4], " 23PLAYER5", 13, 0, 0);
	overwriteArray(userScores[5], " 21PLAYER6", 13, 0, 0);
	overwriteArray(userScores[6], " 14PLAYER7", 13, 0, 0);
}

void showStatistics(char userScores[10][13])
{
	rlutil::setBackgroundColor(rlutil::BLACK);
	rlutil::cls();

	for (int i = 0; i < 7; i++)
	{
		rlutil::locate(9, 3 + i * 2);
		cout << i + 1;

		rlutil::locate(14, 3 + i * 2);
		for (int j = 3; j < 13; j++)
		{
			if (userScores[i][j] == '\0') break;

			cout << userScores[i][j];
		}

		rlutil::locate(28, 3 + i * 2);
		cout << userScores[i][0];
		cout << userScores[i][1];
		cout << userScores[i][2];
		cout << endl;
	}

	rlutil::locate(20, 20);
	rlutil::setColor(rlutil::WHITE);
	cout << "PULSE UNA TECLA PARA VOLVER.";
	rlutil::anykey();
	rlutil::setBackgroundColor(rlutil::BLACK);
}


void fillMatrix(char matrix[matrixX][matrixY], int matrixX, int matrixY)
{
	srand(time(0));
	for (int i = 0; i < matrixX; i++)
	{
		for (int j = 0; j < matrixY; j++)
		{
			matrix[i][j] = (rand() % 10);
		}
	}
}

void showMatrix(char matrix[matrixX][matrixY], int matrixX, int matrixY)
{
	drawMatrixBox();
	for (int i = 0; i < matrixX; i++)
	{
		for (int j = 0; j < matrixY; j++)
		{
			rlutil::locate(8 + j * 4, 8 + i * 2);
			//rlutil::locate(29 + j*4, 8 + i * 2);
			if ((int)matrix[i][j] > 10)
			{
				rlutil::setColor(rlutil::LIGHTRED);
				cout << (char)matrix[i][j];
			}
			else
			{
				rlutil::setColor(rlutil::WHITE);
				cout << (int)matrix[i][j];
			}
		}
	}
}

void renderHeader(char *name, int lifes, char *calculator, int score, int round)
{

	rlutil::setColor(rlutil::LIGHTGREEN);

	rlutil::locate(5, 3);
	cout << "JUGADOR:     ";
	rlutil::setColor(rlutil::LIGHTCYAN);
	cout << name;

	rlutil::setColor(rlutil::LIGHTGREEN);
	rlutil::locate(34, 3);
	cout << "PUNTAJE:  ";
	rlutil::setColor(rlutil::WHITE);
	cout << score;

	rlutil::setColor(rlutil::LIGHTGREEN);
	rlutil::locate(60, 3);
	cout << "PILAS: ";
	rlutil::setColor(rlutil::LIGHTRED);
	for (int i = 1; i <= lifes; i++)
	{
		rlutil::locate(67 + i * 2, 2);
		cout << char(242) << " ";

		rlutil::locate(67 + i * 2, 3);
		cout << char(219) << " ";
	}

	rlutil::setColor(rlutil::LIGHTGREEN);
	rlutil::locate(5, 4);
	cout << "CALCULADORA: ";
	rlutil::setColor(rlutil::LIGHTCYAN);
	cout << calculator;

	rlutil::setColor(rlutil::LIGHTGREEN);
	rlutil::locate(34, 4);
	cout << "RONDA:    ";

	rlutil::setColor(rlutil::WHITE);
	cout << round;

	cout << endl;

	rlutil::setColor(rlutil::LIGHTGREEN);
	rlutil::locate(0, 7);
	for (int i = 0; i < 80; i++)
	{
		cout << (char)196;
	}
	cout << endl;
}

bool validateInput(int row, int column, char operation, int  direction, char matrix[matrixX][matrixY])
{
	bool error = false;
	rlutil::locate(41, 16);
	rlutil::setColor(rlutil::LIGHTRED);
	if (row > 6 || row < 1)
	{
		error = true;
		cout << "FILA INCORRECTA";
		rlutil::locate(41, 17);
	}
	if (column > 6 || column < 1)
	{
		error = true;
		cout << "COLUMNA INCORRECTA";
		rlutil::locate(41, 18);
	}
	if (operation != '+' && operation != '-' && operation != '*' && operation != '/' && operation != '%')
	{
		error = true;
		cout << "OPERACION INCORRECTA" << endl;
		rlutil::locate(41, 19);
	}
	if (direction != 8 && direction != 6 && direction != 4 && direction != 2)
	{
		error = true;
		cout << "DIRECCION INCORRECTA" << endl;
		rlutil::locate(41, 20);
	}

	if (error)
	{
		return error;
	}

	int firstValue = 0;
	int secondValue = 0;
	int result = 0;
	int target = 0;
	row = row - 1;
	column = column - 1;
	firstValue = (int)matrix[row][column];

	switch (direction)
	{
	case 2:
		if (row < 4)
		{
			secondValue = (int)matrix[row + 1][column];
			target = (int)matrix[row + 2][column];

		}
		else
		{
			error = true;
			cout << "DIRECCION INCORRECTA" << endl;
		}
		break;
	case 4:
		if (column > 1)
		{
			secondValue = (int)matrix[row][column - 1];
			target = (int)matrix[row][column - 2];
		}
		else
		{
			error = true;
			cout << "DIRECCION INCORRECTA" << endl;
		}
		break;
	case 8:
		if (row > 1)
		{
			secondValue = (int)matrix[row - 1][column];
			target = (int)matrix[row - 2][column];
		}
		else
		{
			error = true;
			cout << "DIRECCION INCORRECTA" << endl;
		}
		break;
	case 6:
		if (column < 4)
		{
			secondValue = (int)matrix[row][column + 1];
			target = (int)matrix[row][column + 2];
		}
		else
		{
			error = true;
			cout << "DIRECCION INCORRECTA" << endl;
		}
		break;
	default:
		break;
	}

	if (target > 9 || firstValue > 9 || secondValue > 9)
	{
		cout << "CELDA INCORRECTA" << endl;
		error = true;
	}

	if (operation == '/' && secondValue == 0)
	{
		cout << "NO SE PUEDE DIVIR POR CERO" << endl;
		error = true;
	}

	rlutil::locate(55, 8);
	return error;
}

float doAccount(int firstValue, int secondValue, char operation)
{
	float result = 0;
	switch (operation)
	{
	case '+':
		result = firstValue + secondValue;
		break;
	case '-':
		result = firstValue - secondValue;
		break;
	case '/':
		result = firstValue / secondValue;
		break;
	case '*':
		result = firstValue * secondValue;
		break;
	case '%':
		result = firstValue % secondValue;
		break;
	default:
		break;
	}
	return result;
}

void replaceValueInMatrix(char matrix[matrixX][matrixY], int row, int column, int direction)
{
	matrix[row][column] = 'X';
	switch (direction)
	{
	case 2:
		matrix[row + 1][column] = 'X';
		matrix[row + 2][column] = 'X';
		break;
	case 4:
		matrix[row][column - 1] = 'X';
		matrix[row][column - 2] = 'X';
		break;
	case 8:
		matrix[row - 1][column] = 'X';
		matrix[row - 2][column] = 'X';
		break;
	case 6:
		matrix[row][column + 1] = 'X';
		matrix[row][column + 2] = 'X';
		break;
	default:
		break;
	}
}


void inputValues(int row, int column, char operation, int direction, char matrix[matrixX][matrixY], int &lifes, int &score, int &round)
{
	int firstValue, secondValue, target;
	row = row - 1;
	column = column - 1;
	firstValue = (int)matrix[row][column];
	switch (direction)
	{
	case 2:
		secondValue = (int)matrix[row + 1][column];
		target = (int)matrix[row + 2][column];
		break;
	case 4:
		secondValue = (int)matrix[row][column - 1];
		target = (int)matrix[row][column - 2];
		break;
	case 8:
		secondValue = (int)matrix[row - 1][column];
		target = (int)matrix[row - 2][column];
		break;
	case 6:
		secondValue = (int)matrix[row][column + 1];
		target = (int)matrix[row][column + 2];
		break;
	default:
		break;
	}

	rlutil::locate(41, 17);
	rlutil::setColor(rlutil::LIGHTCYAN);
	cout << firstValue << " " << operation << " " << secondValue << " = " << target;
	float result = doAccount(firstValue, secondValue, operation);
	rlutil::locate(41, 19);
	if (result == (float)target)
	{
		cout << "CORRECTO";
		score += (int)result + firstValue + secondValue;

		matrix[row][column] = 'X';
		round++;

		replaceValueInMatrix(matrix, row, column, direction);
	}
	else
	{
		rlutil::setColor(rlutil::LIGHTRED);
		cout << "RESULTADO ERRONEO";
		lifes--;
	}

}
