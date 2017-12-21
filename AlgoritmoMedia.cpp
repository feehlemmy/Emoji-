#include "AlgoritmoMedia.h"
char  Respostas[20];

void  Emoji::AlgoritmoMedia::setRespostas(char Resposta, int Posicao) {
	Respostas[Posicao] = Resposta;
}

int Emoji::AlgoritmoMedia::chamarCompilador(int NumeroDoAlgoritmo) {
	int Retorno;
	Compilador comp;
	Retorno = comp.compilarRespostas(Respostas,NumeroDoAlgoritmo);
	return Retorno;
}

