#include "AjudaAlgoritmo.h"
#include "Compilador.h"
#include "TelaFinal.h"
#include "TelaSucesso.h"
#include "TelaErro.h"

namespace Emoji {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para AlgoritmoFatorial
	/// </summary>
	public ref class AlgoritmoFatorial : public System::Windows::Forms::Form
	{
	public:
		int NumeroDoProblema = 3;
		int Comparador = 0;
		int Resultado = 0;
		int Posicao = 0;
	private: System::Windows::Forms::Button^  Proximo;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  Errado;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  lbl_Leia;
	private: System::Windows::Forms::Label^  Fatorial;
	private: System::Windows::Forms::Label^  EnquantoInicio;
	private: System::Windows::Forms::Label^  CorpoEnquanto;
	private: System::Windows::Forms::Label^  CorpoEnquanto2;
	private: System::Windows::Forms::Label^  FimEnquanto;
	private: System::Windows::Forms::Label^  lbl_Escreva2;
	private: System::Windows::Forms::Label^  lbl_Fim;
	private: System::Windows::Forms::Label^  lbl_Escreva1;
	private: System::Windows::Forms::Label^  lbl_Inteiro;
	private: System::Windows::Forms::Label^  lbl_Inicio;
	public:

	public:

			 char Resposta;
		void setRespostas(char, int);
		int chamarCompilador(int);
		AlgoritmoFatorial(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~AlgoritmoFatorial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label12;
	protected:
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  EnquantoEnviar;
	private: System::Windows::Forms::PictureBox^  Senao;
	private: System::Windows::Forms::PictureBox^  StringEnviar;
	private: System::Windows::Forms::PictureBox^  Verdadeiro;
	private: System::Windows::Forms::PictureBox^  VoidEnviar;
	private: System::Windows::Forms::PictureBox^  Booleana;
	private: System::Windows::Forms::PictureBox^  LeiaEnviar;
	private: System::Windows::Forms::PictureBox^  EscrevaEnviar;
	private: System::Windows::Forms::PictureBox^  Repita;
	private: System::Windows::Forms::PictureBox^  Double;
	private: System::Windows::Forms::PictureBox^  False;
	private: System::Windows::Forms::PictureBox^  Real;
	private: System::Windows::Forms::PictureBox^  ParaEnviar;
	private: System::Windows::Forms::PictureBox^  InteiroEnviar;
	private: System::Windows::Forms::PictureBox^  Retorno;
	private: System::Windows::Forms::PictureBox^  Se;
	private: System::Windows::Forms::PictureBox^  Inicio;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  lbl_enunciado;
	private: System::Windows::Forms::PictureBox^  Cout2;
	private: System::Windows::Forms::PictureBox^  Enquanto;
	private: System::Windows::Forms::PictureBox^  Cin;
	private: System::Windows::Forms::PictureBox^  Cout;
	private: System::Windows::Forms::PictureBox^  Inteiro;
	private: System::Windows::Forms::PictureBox^  Main;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  Compilar;
	private: System::Windows::Forms::Button^  Sos;

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AlgoritmoFatorial::typeid));
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->EnquantoEnviar = (gcnew System::Windows::Forms::PictureBox());
			this->Senao = (gcnew System::Windows::Forms::PictureBox());
			this->StringEnviar = (gcnew System::Windows::Forms::PictureBox());
			this->Verdadeiro = (gcnew System::Windows::Forms::PictureBox());
			this->VoidEnviar = (gcnew System::Windows::Forms::PictureBox());
			this->Booleana = (gcnew System::Windows::Forms::PictureBox());
			this->LeiaEnviar = (gcnew System::Windows::Forms::PictureBox());
			this->EscrevaEnviar = (gcnew System::Windows::Forms::PictureBox());
			this->Repita = (gcnew System::Windows::Forms::PictureBox());
			this->Double = (gcnew System::Windows::Forms::PictureBox());
			this->False = (gcnew System::Windows::Forms::PictureBox());
			this->Real = (gcnew System::Windows::Forms::PictureBox());
			this->ParaEnviar = (gcnew System::Windows::Forms::PictureBox());
			this->InteiroEnviar = (gcnew System::Windows::Forms::PictureBox());
			this->Retorno = (gcnew System::Windows::Forms::PictureBox());
			this->Se = (gcnew System::Windows::Forms::PictureBox());
			this->Inicio = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->lbl_enunciado = (gcnew System::Windows::Forms::Label());
			this->Cout2 = (gcnew System::Windows::Forms::PictureBox());
			this->Enquanto = (gcnew System::Windows::Forms::PictureBox());
			this->Cin = (gcnew System::Windows::Forms::PictureBox());
			this->Cout = (gcnew System::Windows::Forms::PictureBox());
			this->Inteiro = (gcnew System::Windows::Forms::PictureBox());
			this->Main = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Compilar = (gcnew System::Windows::Forms::Button());
			this->Sos = (gcnew System::Windows::Forms::Button());
			this->Proximo = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Errado = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_Leia = (gcnew System::Windows::Forms::Label());
			this->Fatorial = (gcnew System::Windows::Forms::Label());
			this->EnquantoInicio = (gcnew System::Windows::Forms::Label());
			this->CorpoEnquanto = (gcnew System::Windows::Forms::Label());
			this->CorpoEnquanto2 = (gcnew System::Windows::Forms::Label());
			this->FimEnquanto = (gcnew System::Windows::Forms::Label());
			this->lbl_Escreva2 = (gcnew System::Windows::Forms::Label());
			this->lbl_Fim = (gcnew System::Windows::Forms::Label());
			this->lbl_Escreva1 = (gcnew System::Windows::Forms::Label());
			this->lbl_Inteiro = (gcnew System::Windows::Forms::Label());
			this->lbl_Inicio = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EnquantoEnviar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Senao))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StringEnviar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Verdadeiro))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VoidEnviar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Booleana))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeiaEnviar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EscrevaEnviar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Repita))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Double))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->False))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Real))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ParaEnviar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InteiroEnviar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Retorno))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Se))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Inicio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Enquanto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Inteiro))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Main))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Errado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label12->Location = System::Drawing::Point(250, 458);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(55, 20);
			this->label12->TabIndex = 155;
			this->label12->Text = L"i <- i+1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label10->Location = System::Drawing::Point(250, 429);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(148, 20);
			this->label10->TabIndex = 154;
			this->label10->Text = L"fatorial <- fatorial  * i";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label17->Location = System::Drawing::Point(1059, 640);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(50, 20);
			this->label17->TabIndex = 151;
			this->label17->Text = L"Ajuda";
			this->label17->Click += gcnew System::EventHandler(this, &AlgoritmoFatorial::label17_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label16->Location = System::Drawing::Point(993, 248);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(178, 20);
			this->label16->TabIndex = 150;
			this->label16->Text = L"Utilize os Emojis abaixo:";
			this->label16->Click += gcnew System::EventHandler(this, &AlgoritmoFatorial::label16_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label15->Location = System::Drawing::Point(764, 87);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(410, 20);
			this->label15->TabIndex = 149;
			this->label15->Text = L"E no fim escreva na tela o resultado do fatorial calculado.";
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(1180, 83);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(100, 138);
			this->pictureBox31->TabIndex = 148;
			this->pictureBox31->TabStop = false;
			// 
			// EnquantoEnviar
			// 
			this->EnquantoEnviar->BackColor = System::Drawing::Color::Transparent;
			this->EnquantoEnviar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EnquantoEnviar.Image")));
			this->EnquantoEnviar->Location = System::Drawing::Point(996, 554);
			this->EnquantoEnviar->Name = L"EnquantoEnviar";
			this->EnquantoEnviar->Size = System::Drawing::Size(52, 48);
			this->EnquantoEnviar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->EnquantoEnviar->TabIndex = 147;
			this->EnquantoEnviar->TabStop = false;
			this->EnquantoEnviar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoFatorial::EnquantoEnviar_MouseDown);
			// 
			// Senao
			// 
			this->Senao->BackColor = System::Drawing::Color::Transparent;
			this->Senao->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Senao.Image")));
			this->Senao->Location = System::Drawing::Point(1063, 446);
			this->Senao->Name = L"Senao";
			this->Senao->Size = System::Drawing::Size(52, 48);
			this->Senao->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Senao->TabIndex = 146;
			this->Senao->TabStop = false;
			this->Senao->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoFatorial::Senao_MouseDown);
			// 
			// StringEnviar
			// 
			this->StringEnviar->BackColor = System::Drawing::Color::Transparent;
			this->StringEnviar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"StringEnviar.Image")));
			this->StringEnviar->Location = System::Drawing::Point(996, 392);
			this->StringEnviar->Name = L"StringEnviar";
			this->StringEnviar->Size = System::Drawing::Size(52, 48);
			this->StringEnviar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->StringEnviar->TabIndex = 145;
			this->StringEnviar->TabStop = false;
			this->StringEnviar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoFatorial::StringEnviar_MouseDown);
			// 
			// Verdadeiro
			// 
			this->Verdadeiro->BackColor = System::Drawing::Color::Transparent;
			this->Verdadeiro->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Verdadeiro.Image")));
			this->Verdadeiro->Location = System::Drawing::Point(1063, 392);
			this->Verdadeiro->Name = L"Verdadeiro";
			this->Verdadeiro->Size = System::Drawing::Size(52, 48);
			this->Verdadeiro->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Verdadeiro->TabIndex = 144;
			this->Verdadeiro->TabStop = false;
			this->Verdadeiro->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoFatorial::Verdadeiro_MouseDown);
			// 
			// VoidEnviar
			// 
			this->VoidEnviar->BackColor = System::Drawing::Color::Transparent;
			this->VoidEnviar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"VoidEnviar.Image")));
			this->VoidEnviar->Location = System::Drawing::Point(1134, 392);
			this->VoidEnviar->Name = L"VoidEnviar";
			this->VoidEnviar->Size = System::Drawing::Size(52, 48);
			this->VoidEnviar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->VoidEnviar->TabIndex = 143;
			this->VoidEnviar->TabStop = false;
			this->VoidEnviar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoFatorial::VoidEnviar_MouseDown);
			// 
			// Booleana
			// 
			this->Booleana->BackColor = System::Drawing::Color::Transparent;
			this->Booleana->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Booleana.Image")));
			this->Booleana->Location = System::Drawing::Point(996, 278);
			this->Booleana->Name = L"Booleana";
			this->Booleana->Size = System::Drawing::Size(52, 48);
			this->Booleana->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Booleana->TabIndex = 142;
			this->Booleana->TabStop = false;
			this->Booleana->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoFatorial::Booleana_MouseDown);
			// 
			// LeiaEnviar
			// 
			this->LeiaEnviar->BackColor = System::Drawing::Color::Transparent;
			this->LeiaEnviar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LeiaEnviar.Image")));
			this->LeiaEnviar->Location = System::Drawing::Point(1134, 500);
			this->LeiaEnviar->Name = L"LeiaEnviar";
			this->LeiaEnviar->Size = System::Drawing::Size(52, 48);
			this->LeiaEnviar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->LeiaEnviar->TabIndex = 141;
			this->LeiaEnviar->TabStop = false;
			this->LeiaEnviar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoFatorial::LeiaEnviar_MouseDown);
			// 
			// EscrevaEnviar
			// 
			this->EscrevaEnviar->BackColor = System::Drawing::Color::Transparent;
			this->EscrevaEnviar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EscrevaEnviar.Image")));
			this->EscrevaEnviar->Location = System::Drawing::Point(1063, 500);
			this->EscrevaEnviar->Name = L"EscrevaEnviar";
			this->EscrevaEnviar->Size = System::Drawing::Size(52, 48);
			this->EscrevaEnviar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->EscrevaEnviar->TabIndex = 140;
			this->EscrevaEnviar->TabStop = false;
			this->EscrevaEnviar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoFatorial::EscrevaEnviar_MouseDown);
			// 
			// Repita
			// 
			this->Repita->BackColor = System::Drawing::Color::Transparent;
			this->Repita->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Repita.Image")));
			this->Repita->Location = System::Drawing::Point(996, 446);
			this->Repita->Name = L"Repita";
			this->Repita->Size = System::Drawing::Size(52, 48);
			this->Repita->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Repita->TabIndex = 139;
			this->Repita->TabStop = false;
			this->Repita->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoFatorial::Repita_MouseDown);
			// 
			// Double
			// 
			this->Double->BackColor = System::Drawing::Color::Transparent;
			this->Double->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Double.Image")));
			this->Double->Location = System::Drawing::Point(996, 334);
			this->Double->Name = L"Double";
			this->Double->Size = System::Drawing::Size(52, 48);
			this->Double->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Double->TabIndex = 138;
			this->Double->TabStop = false;
			this->Double->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoFatorial::Double_MouseDown);
			// 
			// False
			// 
			this->False->BackColor = System::Drawing::Color::Transparent;
			this->False->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"False.Image")));
			this->False->Location = System::Drawing::Point(1063, 334);
			this->False->Name = L"False";
			this->False->Size = System::Drawing::Size(52, 48);
			this->False->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->False->TabIndex = 137;
			this->False->TabStop = false;
			this->False->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoFatorial::False_MouseDown);
			// 
			// Real
			// 
			this->Real->BackColor = System::Drawing::Color::Transparent;
			this->Real->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Real.Image")));
			this->Real->Location = System::Drawing::Point(1134, 334);
			this->Real->Name = L"Real";
			this->Real->Size = System::Drawing::Size(52, 48);
			this->Real->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Real->TabIndex = 136;
			this->Real->TabStop = false;
			this->Real->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoFatorial::Real_MouseDown);
			// 
			// ParaEnviar
			// 
			this->ParaEnviar->BackColor = System::Drawing::Color::Transparent;
			this->ParaEnviar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ParaEnviar.Image")));
			this->ParaEnviar->Location = System::Drawing::Point(1063, 554);
			this->ParaEnviar->Name = L"ParaEnviar";
			this->ParaEnviar->Size = System::Drawing::Size(52, 48);
			this->ParaEnviar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ParaEnviar->TabIndex = 135;
			this->ParaEnviar->TabStop = false;
			this->ParaEnviar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoFatorial::ParaEnviar_MouseDown);
			// 
			// InteiroEnviar
			// 
			this->InteiroEnviar->BackColor = System::Drawing::Color::Transparent;
			this->InteiroEnviar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"InteiroEnviar.Image")));
			this->InteiroEnviar->Location = System::Drawing::Point(1134, 278);
			this->InteiroEnviar->Name = L"InteiroEnviar";
			this->InteiroEnviar->Size = System::Drawing::Size(52, 48);
			this->InteiroEnviar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->InteiroEnviar->TabIndex = 134;
			this->InteiroEnviar->TabStop = false;
			this->InteiroEnviar->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoFatorial::InteiroEnviar_MouseDown);
			// 
			// Retorno
			// 
			this->Retorno->BackColor = System::Drawing::Color::Transparent;
			this->Retorno->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Retorno.Image")));
			this->Retorno->Location = System::Drawing::Point(1063, 278);
			this->Retorno->Name = L"Retorno";
			this->Retorno->Size = System::Drawing::Size(52, 48);
			this->Retorno->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Retorno->TabIndex = 133;
			this->Retorno->TabStop = false;
			this->Retorno->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoFatorial::Retorno_MouseDown);
			// 
			// Se
			// 
			this->Se->BackColor = System::Drawing::Color::Transparent;
			this->Se->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Se.Image")));
			this->Se->Location = System::Drawing::Point(996, 500);
			this->Se->Name = L"Se";
			this->Se->Size = System::Drawing::Size(52, 48);
			this->Se->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Se->TabIndex = 132;
			this->Se->TabStop = false;
			this->Se->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoFatorial::Se_MouseDown);
			// 
			// Inicio
			// 
			this->Inicio->BackColor = System::Drawing::Color::Transparent;
			this->Inicio->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Inicio.Image")));
			this->Inicio->Location = System::Drawing::Point(1134, 446);
			this->Inicio->Name = L"Inicio";
			this->Inicio->Size = System::Drawing::Size(52, 48);
			this->Inicio->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Inicio->TabIndex = 131;
			this->Inicio->TabStop = false;
			this->Inicio->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoFatorial::Inicio_MouseDown);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label14->Location = System::Drawing::Point(1118, 640);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(71, 20);
			this->label14->TabIndex = 130;
			this->label14->Text = L"Compilar";
			this->label14->Click += gcnew System::EventHandler(this, &AlgoritmoFatorial::label14_Click);
			// 
			// lbl_enunciado
			// 
			this->lbl_enunciado->AutoSize = true;
			this->lbl_enunciado->BackColor = System::Drawing::Color::Transparent;
			this->lbl_enunciado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_enunciado->Location = System::Drawing::Point(637, 48);
			this->lbl_enunciado->Name = L"lbl_enunciado";
			this->lbl_enunciado->Size = System::Drawing::Size(643, 20);
			this->lbl_enunciado->TabIndex = 129;
			this->lbl_enunciado->Text = L"Complete o algoritmo, para que ele calcule o fatorial de um número fornecido pelo"
				L" usuario,";
			// 
			// Cout2
			// 
			this->Cout2->BackColor = System::Drawing::Color::Transparent;
			this->Cout2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cout2->Location = System::Drawing::Point(196, 526);
			this->Cout2->Name = L"Cout2";
			this->Cout2->Size = System::Drawing::Size(52, 48);
			this->Cout2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Cout2->TabIndex = 127;
			this->Cout2->TabStop = false;
			this->Cout2->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoFatorial::Cout2_DragDrop);
			this->Cout2->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoFatorial::Cout2_DragEnter);
			// 
			// Enquanto
			// 
			this->Enquanto->BackColor = System::Drawing::Color::Transparent;
			this->Enquanto->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Enquanto->Location = System::Drawing::Point(196, 372);
			this->Enquanto->Name = L"Enquanto";
			this->Enquanto->Size = System::Drawing::Size(52, 48);
			this->Enquanto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Enquanto->TabIndex = 126;
			this->Enquanto->TabStop = false;
			this->Enquanto->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoFatorial::Enquanto_DragDrop);
			this->Enquanto->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoFatorial::Enquanto_DragEnter);
			// 
			// Cin
			// 
			this->Cin->BackColor = System::Drawing::Color::Transparent;
			this->Cin->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cin->Location = System::Drawing::Point(196, 268);
			this->Cin->Name = L"Cin";
			this->Cin->Size = System::Drawing::Size(52, 48);
			this->Cin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Cin->TabIndex = 125;
			this->Cin->TabStop = false;
			this->Cin->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoFatorial::Cin_DragDrop);
			this->Cin->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoFatorial::Cin_DragEnter);
			// 
			// Cout
			// 
			this->Cout->BackColor = System::Drawing::Color::Transparent;
			this->Cout->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cout->Location = System::Drawing::Point(196, 203);
			this->Cout->Name = L"Cout";
			this->Cout->Size = System::Drawing::Size(52, 48);
			this->Cout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Cout->TabIndex = 124;
			this->Cout->TabStop = false;
			this->Cout->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoFatorial::Cout_DragDrop);
			this->Cout->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoFatorial::Cout_DragEnter);
			// 
			// Inteiro
			// 
			this->Inteiro->BackColor = System::Drawing::Color::Transparent;
			this->Inteiro->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Inteiro->Location = System::Drawing::Point(276, 141);
			this->Inteiro->Name = L"Inteiro";
			this->Inteiro->Size = System::Drawing::Size(52, 48);
			this->Inteiro->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Inteiro->TabIndex = 123;
			this->Inteiro->TabStop = false;
			this->Inteiro->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoFatorial::Inteiro_DragDrop);
			this->Inteiro->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoFatorial::Inteiro_DragEnter);
			// 
			// Main
			// 
			this->Main->BackColor = System::Drawing::Color::Transparent;
			this->Main->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Main->Location = System::Drawing::Point(192, 59);
			this->Main->Name = L"Main";
			this->Main->Size = System::Drawing::Size(52, 48);
			this->Main->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Main->TabIndex = 122;
			this->Main->TabStop = false;
			this->Main->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoFatorial::Main_DragDrop);
			this->Main->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoFatorial::Main_DragEnter);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->Location = System::Drawing::Point(254, 291);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 20);
			this->label8->TabIndex = 121;
			this->label8->Text = L"(n)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Location = System::Drawing::Point(250, 392);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 20);
			this->label7->TabIndex = 120;
			this->label7->Text = L" ( i <= n)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(193, 334);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 20);
			this->label6->TabIndex = 119;
			this->label6->Text = L"fatorial  <- 1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(188, 602);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 20);
			this->label5->TabIndex = 118;
			this->label5->Text = L"FIM";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(254, 554);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 20);
			this->label4->TabIndex = 117;
			this->label4->Text = L"(\"o Fatorial e\" fatorial)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(250, 231);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 20);
			this->label3->TabIndex = 116;
			this->label3->Text = L"(\"Digite um número\")";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(181, 169);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 20);
			this->label1->TabIndex = 115;
			this->label1->Text = L"n, i, fatorial:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(195, 500);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 20);
			this->label2->TabIndex = 156;
			this->label2->Text = L"Fim-Enquanto";
			// 
			// Compilar
			// 
			this->Compilar->BackColor = System::Drawing::Color::Transparent;
			this->Compilar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Compilar.BackgroundImage")));
			this->Compilar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Compilar->Location = System::Drawing::Point(1134, 663);
			this->Compilar->Name = L"Compilar";
			this->Compilar->Size = System::Drawing::Size(55, 61);
			this->Compilar->TabIndex = 157;
			this->Compilar->UseVisualStyleBackColor = false;
			this->Compilar->Click += gcnew System::EventHandler(this, &AlgoritmoFatorial::Compilar_Click);
			// 
			// Sos
			// 
			this->Sos->BackColor = System::Drawing::Color::Transparent;
			this->Sos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Sos.BackgroundImage")));
			this->Sos->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Sos->Location = System::Drawing::Point(1060, 663);
			this->Sos->Name = L"Sos";
			this->Sos->Size = System::Drawing::Size(55, 61);
			this->Sos->TabIndex = 158;
			this->Sos->UseVisualStyleBackColor = false;
			this->Sos->Click += gcnew System::EventHandler(this, &AlgoritmoFatorial::Sos_Click);
			// 
			// Proximo
			// 
			this->Proximo->BackColor = System::Drawing::Color::Transparent;
			this->Proximo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Proximo.BackgroundImage")));
			this->Proximo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Proximo->Location = System::Drawing::Point(1207, 663);
			this->Proximo->Name = L"Proximo";
			this->Proximo->Size = System::Drawing::Size(53, 61);
			this->Proximo->TabIndex = 159;
			this->Proximo->UseVisualStyleBackColor = false;
			this->Proximo->Click += gcnew System::EventHandler(this, &AlgoritmoFatorial::Proximo_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->Location = System::Drawing::Point(1203, 640);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 20);
			this->label9->TabIndex = 160;
			this->label9->Text = L"Próximo";
			this->label9->Click += gcnew System::EventHandler(this, &AlgoritmoFatorial::label9_Click);
			// 
			// Errado
			// 
			this->Errado->BackColor = System::Drawing::Color::Transparent;
			this->Errado->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Errado.Image")));
			this->Errado->Location = System::Drawing::Point(1147, 570);
			this->Errado->Name = L"Errado";
			this->Errado->Size = System::Drawing::Size(27, 32);
			this->Errado->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Errado->TabIndex = 161;
			this->Errado->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1134, 554);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(52, 48);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 162;
			this->pictureBox1->TabStop = false;
			// 
			// lbl_Leia
			// 
			this->lbl_Leia->AutoSize = true;
			this->lbl_Leia->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Leia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_Leia->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_Leia->Location = System::Drawing::Point(675, 293);
			this->lbl_Leia->Name = L"lbl_Leia";
			this->lbl_Leia->Size = System::Drawing::Size(0, 20);
			this->lbl_Leia->TabIndex = 173;
			// 
			// Fatorial
			// 
			this->Fatorial->AutoSize = true;
			this->Fatorial->BackColor = System::Drawing::Color::Transparent;
			this->Fatorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Fatorial->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Fatorial->Location = System::Drawing::Point(675, 312);
			this->Fatorial->Name = L"Fatorial";
			this->Fatorial->Size = System::Drawing::Size(0, 20);
			this->Fatorial->TabIndex = 172;
			// 
			// EnquantoInicio
			// 
			this->EnquantoInicio->AutoSize = true;
			this->EnquantoInicio->BackColor = System::Drawing::Color::Transparent;
			this->EnquantoInicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->EnquantoInicio->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->EnquantoInicio->Location = System::Drawing::Point(675, 333);
			this->EnquantoInicio->Name = L"EnquantoInicio";
			this->EnquantoInicio->Size = System::Drawing::Size(0, 20);
			this->EnquantoInicio->TabIndex = 171;
			// 
			// CorpoEnquanto
			// 
			this->CorpoEnquanto->AutoSize = true;
			this->CorpoEnquanto->BackColor = System::Drawing::Color::Transparent;
			this->CorpoEnquanto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->CorpoEnquanto->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->CorpoEnquanto->Location = System::Drawing::Point(675, 353);
			this->CorpoEnquanto->Name = L"CorpoEnquanto";
			this->CorpoEnquanto->Size = System::Drawing::Size(0, 20);
			this->CorpoEnquanto->TabIndex = 170;
			// 
			// CorpoEnquanto2
			// 
			this->CorpoEnquanto2->AutoSize = true;
			this->CorpoEnquanto2->BackColor = System::Drawing::Color::Transparent;
			this->CorpoEnquanto2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->CorpoEnquanto2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->CorpoEnquanto2->Location = System::Drawing::Point(675, 373);
			this->CorpoEnquanto2->Name = L"CorpoEnquanto2";
			this->CorpoEnquanto2->Size = System::Drawing::Size(0, 20);
			this->CorpoEnquanto2->TabIndex = 169;
			// 
			// FimEnquanto
			// 
			this->FimEnquanto->AutoSize = true;
			this->FimEnquanto->BackColor = System::Drawing::Color::Transparent;
			this->FimEnquanto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->FimEnquanto->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->FimEnquanto->Location = System::Drawing::Point(675, 393);
			this->FimEnquanto->Name = L"FimEnquanto";
			this->FimEnquanto->Size = System::Drawing::Size(0, 20);
			this->FimEnquanto->TabIndex = 168;
			// 
			// lbl_Escreva2
			// 
			this->lbl_Escreva2->AutoSize = true;
			this->lbl_Escreva2->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Escreva2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_Escreva2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_Escreva2->Location = System::Drawing::Point(675, 413);
			this->lbl_Escreva2->Name = L"lbl_Escreva2";
			this->lbl_Escreva2->Size = System::Drawing::Size(0, 20);
			this->lbl_Escreva2->TabIndex = 167;
			// 
			// lbl_Fim
			// 
			this->lbl_Fim->AutoSize = true;
			this->lbl_Fim->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Fim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_Fim->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_Fim->Location = System::Drawing::Point(675, 433);
			this->lbl_Fim->Name = L"lbl_Fim";
			this->lbl_Fim->Size = System::Drawing::Size(0, 20);
			this->lbl_Fim->TabIndex = 166;
			// 
			// lbl_Escreva1
			// 
			this->lbl_Escreva1->AutoSize = true;
			this->lbl_Escreva1->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Escreva1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_Escreva1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_Escreva1->Location = System::Drawing::Point(675, 273);
			this->lbl_Escreva1->Name = L"lbl_Escreva1";
			this->lbl_Escreva1->Size = System::Drawing::Size(0, 20);
			this->lbl_Escreva1->TabIndex = 165;
			// 
			// lbl_Inteiro
			// 
			this->lbl_Inteiro->AutoSize = true;
			this->lbl_Inteiro->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Inteiro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_Inteiro->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_Inteiro->Location = System::Drawing::Point(675, 256);
			this->lbl_Inteiro->Name = L"lbl_Inteiro";
			this->lbl_Inteiro->Size = System::Drawing::Size(0, 20);
			this->lbl_Inteiro->TabIndex = 164;
			// 
			// lbl_Inicio
			// 
			this->lbl_Inicio->AutoSize = true;
			this->lbl_Inicio->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_Inicio->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_Inicio->Location = System::Drawing::Point(675, 236);
			this->lbl_Inicio->Name = L"lbl_Inicio";
			this->lbl_Inicio->Size = System::Drawing::Size(0, 20);
			this->lbl_Inicio->TabIndex = 163;
			// 
			// AlgoritmoFatorial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1350, 729);
			this->Controls->Add(this->lbl_Leia);
			this->Controls->Add(this->Fatorial);
			this->Controls->Add(this->EnquantoInicio);
			this->Controls->Add(this->CorpoEnquanto);
			this->Controls->Add(this->CorpoEnquanto2);
			this->Controls->Add(this->FimEnquanto);
			this->Controls->Add(this->lbl_Escreva2);
			this->Controls->Add(this->lbl_Fim);
			this->Controls->Add(this->lbl_Escreva1);
			this->Controls->Add(this->lbl_Inteiro);
			this->Controls->Add(this->lbl_Inicio);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Errado);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Proximo);
			this->Controls->Add(this->Sos);
			this->Controls->Add(this->Compilar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->EnquantoEnviar);
			this->Controls->Add(this->Senao);
			this->Controls->Add(this->StringEnviar);
			this->Controls->Add(this->Verdadeiro);
			this->Controls->Add(this->VoidEnviar);
			this->Controls->Add(this->Booleana);
			this->Controls->Add(this->LeiaEnviar);
			this->Controls->Add(this->EscrevaEnviar);
			this->Controls->Add(this->Repita);
			this->Controls->Add(this->Double);
			this->Controls->Add(this->False);
			this->Controls->Add(this->Real);
			this->Controls->Add(this->ParaEnviar);
			this->Controls->Add(this->InteiroEnviar);
			this->Controls->Add(this->Retorno);
			this->Controls->Add(this->Se);
			this->Controls->Add(this->Inicio);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->lbl_enunciado);
			this->Controls->Add(this->Cout2);
			this->Controls->Add(this->Enquanto);
			this->Controls->Add(this->Cin);
			this->Controls->Add(this->Cout);
			this->Controls->Add(this->Inteiro);
			this->Controls->Add(this->Main);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AlgoritmoFatorial";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Emoji++";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AlgoritmoFatorial::AlgoritmoFatorial_FormClosed);
			this->Load += gcnew System::EventHandler(this, &AlgoritmoFatorial::AlgoritmoFatorial_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EnquantoEnviar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Senao))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StringEnviar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Verdadeiro))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VoidEnviar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Booleana))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeiaEnviar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EscrevaEnviar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Repita))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Double))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->False))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Real))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ParaEnviar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InteiroEnviar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Retorno))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Se))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Inicio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Enquanto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Inteiro))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Main))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Errado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Booleana_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		Booleana->DoDragDrop(Booleana->Image, DragDropEffects::Copy);
}
private: System::Void Retorno_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		Retorno->DoDragDrop(Retorno->Image, DragDropEffects::Copy);
}
private: System::Void InteiroEnviar_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		Comparador = 2;
		InteiroEnviar->DoDragDrop(InteiroEnviar->Image, DragDropEffects::Copy);
}
private: System::Void Double_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		Double->DoDragDrop(Double->Image, DragDropEffects::Copy);
}
private: System::Void False_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		False->DoDragDrop(False->Image, DragDropEffects::Copy);
}
private: System::Void Real_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		Real->DoDragDrop(Real->Image, DragDropEffects::Copy);
}
private: System::Void StringEnviar_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		StringEnviar->DoDragDrop(StringEnviar->Image, DragDropEffects::Copy);
}
private: System::Void Verdadeiro_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		Verdadeiro->DoDragDrop(Verdadeiro->Image, DragDropEffects::Copy);
}
private: System::Void VoidEnviar_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		VoidEnviar->DoDragDrop(VoidEnviar->Image, DragDropEffects::Copy);
}
private: System::Void Repita_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		Repita->DoDragDrop(Repita->Image, DragDropEffects::Copy);
}
private: System::Void Senao_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		Senao->DoDragDrop(Senao->Image, DragDropEffects::Copy);
}
private: System::Void Inicio_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		Comparador = 1;
		Inicio->DoDragDrop(Inicio->Image, DragDropEffects::Copy);
}
private: System::Void Se_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		Se->DoDragDrop(Se->Image, DragDropEffects::Copy);
}
private: System::Void EscrevaEnviar_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		Comparador = 3;
		EscrevaEnviar->DoDragDrop(EscrevaEnviar->Image, DragDropEffects::Copy);
}
private: System::Void LeiaEnviar_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		Comparador = 4;
		LeiaEnviar->DoDragDrop(LeiaEnviar->Image, DragDropEffects::Copy);
}
private: System::Void EnquantoEnviar_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		Comparador = 5;
		EnquantoEnviar->DoDragDrop(EnquantoEnviar->Image, DragDropEffects::Copy);
}
private: System::Void ParaEnviar_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		ParaEnviar->DoDragDrop(ParaEnviar->Image, DragDropEffects::Copy);
}
private: System::Void Main_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 1) {
		Main->Image = Inicio->Image;
		Resposta = 'M';
		Posicao = 0;
		setRespostas(Resposta, Posicao);
		this->lbl_Inicio->Text = L"[Inicio]";
	}
	else {
		Main->Image = Errado->Image;
	}
}
private: System::Void Inteiro_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 2) {
		Inteiro->Image = InteiroEnviar->Image;
		Resposta = 'I';
		Posicao = 1;
		setRespostas(Resposta, Posicao);
		this->lbl_Inteiro->Text = L"n, i, fatorial: inteiro";
	}else {
		Inteiro->Image = Errado->Image;
	}
}
private: System::Void Cout_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 3) {
		Cout->Image = EscrevaEnviar->Image;
		Resposta = 'E';
		Posicao = 2;
		setRespostas(Resposta, Posicao);
		this->lbl_Escreva1->Text = L"Escreva('Digite um numero')";
	}
	else {
		Cout->Image = Errado->Image;
	}
}
private: System::Void Cin_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 4) {
		Cin->Image = LeiaEnviar->Image;
		Resposta = 'L';
		Posicao = 3;
		setRespostas(Resposta, Posicao);
		this->lbl_Escreva1->Text = L"leia(n)";
		this->Fatorial->Text = L"fatorial <- 1";


	}
	else {
		Cin->Image = Errado->Image;
	}
}
private: System::Void Enquanto_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 5) {
		Enquanto->Image = EnquantoEnviar->Image;
		Resposta = 'W';
		Posicao = 4;
		setRespostas(Resposta, Posicao);
		this->EnquantoInicio->Text = L"Enquanto(i <= n)";
		this->CorpoEnquanto->Text = L"fatorial<- fatorial * i";
		this->CorpoEnquanto2->Text = L"i<- i+1";
		this->FimEnquanto->Text = L"Fim-Enquanto";

	}
	else {
		Enquanto->Image = Errado->Image;
	}
}
private: System::Void Cout2_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 3) {
		Cout2->Image = EscrevaEnviar->Image;
		Resposta = 'E';
		Posicao = 5;
		setRespostas(Resposta, Posicao);
		this->lbl_Escreva2->Text = L"Escreva('O fatorial e' fatorial)";
		this->lbl_Fim->Text = L"FIM";
	}
	else {
		Cout2->Image = Errado->Image;
	}
}
private: System::Void Main_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void Inteiro_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void Cout_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void Cin_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void Enquanto_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void Cout2_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void AlgoritmoFatorial_Load(System::Object^  sender, System::EventArgs^  e) {
	Main->AllowDrop = true;
	Inteiro->AllowDrop = true;
	Cout->AllowDrop = true;
	Cin->AllowDrop = true;
	Enquanto->AllowDrop = true;
	Cout2->AllowDrop = true;
}
private: System::Void Sos_Click(System::Object^  sender, System::EventArgs^  e) {
	AjudaAlgoritmo^ tem = gcnew AjudaAlgoritmo();
	tem->ShowDialog();
}
private: System::Void Compilar_Click(System::Object^  sender, System::EventArgs^  e) {
	Resultado = chamarCompilador(NumeroDoProblema);
	if (Resultado == 1) {
		TelaSucesso sucess;
		TelaSucesso ^ tem = gcnew TelaSucesso(NumeroDoProblema);
		tem->ShowDialog();
		//sucess.executarCodigo(NumeroDoProblema);

	}
	else {
		TelaErro ^ tem = gcnew TelaErro();
		tem->ShowDialog();
	}
}

private: System::Void Proximo_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	TelaFinal^ tem = gcnew TelaFinal();
	tem->ShowDialog();
}
private: System::Void AlgoritmoFatorial_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	Application::Exit();
}
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
