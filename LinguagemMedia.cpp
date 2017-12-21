#include "LinguagemMedia.h"

char  Respostas1[20];

void  Emoji::LinguagemMedia::setRespostas(char Resposta, int Posicao) {
	Respostas1[Posicao] = Resposta;
}

int Emoji::LinguagemMedia::chamarCompilador(int NumeroDoAlgoritmo) {
	int Retorno;
	Compilador comp;
	Retorno = comp.compilarRespostas(Respostas1, NumeroDoAlgoritmo);
	return Retorno;
}