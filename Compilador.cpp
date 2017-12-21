#include"Compilador.h"
Compilador::Compilador()
{
}

Compilador::~Compilador()
{
}


void Compilador::getGabarito(int Numero, char Gabarito[]) {
	switch (Numero) {
	case 1:
		Gabarito[0] = 'M';
		Gabarito[1] = 'S';
		Gabarito[2] = 'F';
		Gabarito[3] = 'E';
		Gabarito[4] = 'E';
		Gabarito[5] = 'E';
		Gabarito[6] = 'E';
		Gabarito[7] = 'E';
		Gabarito[8] = 'L';
		Gabarito[9] = 'L';
		Gabarito[10] = 'L';
		Gabarito[11] = 'Z';
		Gabarito[12] = 'X';
		break;
	case 2:
		Gabarito[0] = 'M';
		Gabarito[1] = 'I';
		Gabarito[2] = 'E';
		Gabarito[3] = 'L';
		Gabarito[4] = 'P';
		Gabarito[5] = 'E';
		Gabarito[6] = 'R';
		break;
	case 3:
		Gabarito[0] = 'M';
		Gabarito[1] = 'I';
		Gabarito[2] = 'E';
		Gabarito[3] = 'L';
		Gabarito[4] = 'W';
		Gabarito[5] = 'E';
		break;

	case 4:
		Gabarito[0] = 'M';
		Gabarito[1] = 'S';
		Gabarito[2] = 'F';
		Gabarito[3] = 'E';
		Gabarito[4] = 'E';
		Gabarito[5] = 'E';
		Gabarito[6] = 'E';
		Gabarito[7] = 'E';
		Gabarito[8] = 'L';
		Gabarito[9] = 'L';
		Gabarito[10] = 'L';
		Gabarito[11] = 'I';
		Gabarito[12] = 'X';
		Gabarito[13] = 'R';
		break;
	}
}


int Compilador::compilarRespostas(char Respostas[], int NumeroDoProblema) {

	int Retorno = 0;
	getGabarito(NumeroDoProblema, Gabarito);

	switch (NumeroDoProblema) {
	case 1:
		for (int I = 0; I <= 12; I++) {
			if (Gabarito[I] == Respostas[I]) {
				Retorno = 1;
			}
			else {
				Retorno = -1;
				I = 13;
			}
		}
		break;
	case 2:
		for (int I = 0; I <= 6; I++) {
			if (Gabarito[I] == Respostas[I]) {
				Retorno = 1;
			}
			else {
				Retorno = -1;
				I = 6;
			}
		}
		break;
	case 3:
		for (int I = 0; I <= 5; I++) {
			if (Gabarito[I] == Respostas[I]) {
				Retorno = 1;
			}
			else {
				Retorno = -1;
				I = 6;
			}
		}
		break;
	case 4:
		for (int I = 0; I <= 13; I++) {
			if (Gabarito[I] == Respostas[I]) {
				Retorno = 1;
			}
			else {
				Retorno = -1;
				I = 14;
			}
		}
		break;
		
	}
	return Retorno;
}