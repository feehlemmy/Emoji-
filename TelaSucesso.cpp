#include "TelaSucesso.h"

int Numero;

void Emoji::TelaSucesso::receberNumero(int NumeroDoProblema)
{
	
	Numero = NumeroDoProblema;
}

int Emoji::TelaSucesso::coletarNumero(int NumAlg) {

	NumAlg = Numero;
	return NumAlg;
}

void Emoji::TelaSucesso::executarCodigo(int NumAlg){
	
	switch (NumAlg) {
	case 1:
		System::Diagnostics::Process::Start("media.exe");
		break;
	case 2:
		System::Diagnostics::Process::Start("fatorial.exe");
		break;
	
	case 3:
		System::Diagnostics::Process::Start("fatorial.exe");
		break;
	case 4:
		System::Diagnostics::Process::Start("media.exe");
		break;
	}
}