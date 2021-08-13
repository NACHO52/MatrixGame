#ifndef FUNCIONES_HE_INCLUDED
#define FUNCIONES_HE_INCLUDED

const int matrixX = 6;
const int matrixY = 6;


void showStatistics(char userScores[10][13]);
void showCredits();
void renderHeader(char *, int, char *, int, int);
void fillMatrix(char matrix[matrixX][matrixY], int, int);
void showMatrix(char matrix[matrixX][matrixY], int, int);
//void inputValues(int, int, char, int, char matrix[matrixX][matrixY], int *, int *);
bool validateInput(int row, int column, char operation, int  direction, char matrix[matrixX][matrixY]);
float doAccount(int, int, char);
void replaceValueInMatrix(char matrix[matrixX][matrixY], int, int, int);
void inputValues(int row, int column, char operation, int direction, char matrix[matrixX][matrixY], int &lifes, int &score, int &round);
void addScore(int score, char *userName, char userScores[10][13]);
void fillStandarScores(char userScores[10][13]);
void overwriteArray(char *cadenaBase, char *cadenaNueva, int size, int position1, int position2);

#endif
