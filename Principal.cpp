#include "PrimeiraTela.h"
#include "AlgoritmoMedia.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int main(array<String^>^arg){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Instaciar as Telas
	Emoji::PrimeiraTela firstscreen;

	Application::Run(%firstscreen);

	return 0;
}

