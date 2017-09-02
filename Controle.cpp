#include "Controle.h"


Controle::Controle(){

}

Controle::~Controle(){
	
}

void Controle::gerenciarExecucao(void) {
	// Instaciar as Telas
	Emoji::PrimeiraTela firstscreen;

	Application::Run(%firstscreen);

}