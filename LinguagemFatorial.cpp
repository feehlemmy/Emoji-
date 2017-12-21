#include "LinguagemFatorial.h"
char  Respostas10[20];

void  Emoji::LinguagemFatorial::setRespostas(char Resposta, int Posicao) {
	Respostas10[Posicao] = Resposta;
}

int Emoji::LinguagemFatorial::chamarCompilador(int NumeroDoAlgoritmo) {
	int Retorno;
	Compilador comp;
	Retorno = comp.compilarRespostas(Respostas10,NumeroDoAlgoritmo);
	return Retorno;
}