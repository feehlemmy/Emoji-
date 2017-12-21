#pragma once
class Compilador
{
public:
	Compilador();
	~Compilador();
	char Gabarito[20];
	char Respostas[20];
	int compilarRespostas(char[], int);
	void getGabarito(int, char[]);
	private:
};

