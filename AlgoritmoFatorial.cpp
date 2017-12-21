#include "AlgoritmoFatorial.h"
char  Respostas2[20];

void Emoji::AlgoritmoFatorial::setRespostas(char Resposta, int Posicao)
{
	Respostas2[Posicao] = Resposta;

}

int Emoji::AlgoritmoFatorial::chamarCompilador(int NumeroDoProblema)
{
	int Retorno;
	Compilador comp;
	Retorno = comp.compilarRespostas(Respostas2, NumeroDoProblema);
	return Retorno;
}
