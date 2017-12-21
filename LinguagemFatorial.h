#include "AjudaAlgoritmo.h"
#include "Compilador.h"
#include "TelaSucesso.h"
#include "TelaErro.h"
#include "LinguagemMedia.h"
//#include "TelaFinal.h"

namespace Emoji {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para LinguagemFatorial
	/// </summary>
	public ref class LinguagemFatorial : public System::Windows::Forms::Form 
	{
		int NumeroDoProblema = 2;
		int Comparador = 0;
		int Resultado = 0;
		int Posicao = 0;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::PictureBox^  Errado;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  Inicio;
	private: System::Windows::Forms::Label^  Leia;
	private: System::Windows::Forms::Label^  Integer;
	private: System::Windows::Forms::Label^  Fim;
	private: System::Windows::Forms::Label^  Retorno;
	private: System::Windows::Forms::Label^  Escreva2;
	private: System::Windows::Forms::Label^  FimFor;
	private: System::Windows::Forms::Label^  Fatorial2;
	private: System::Windows::Forms::Label^  FOR;
	private: System::Windows::Forms::Label^  Fatorial;
	private: System::Windows::Forms::Label^  Escreva;
			 char Resposta;
		void setRespostas(char, int);
		int chamarCompilador(int);
	public:
		LinguagemFatorial(void)
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
		~LinguagemFatorial()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::PictureBox^  Return;

	private: System::Windows::Forms::PictureBox^  Cout2;


	private: System::Windows::Forms::PictureBox^  Para;

	private: System::Windows::Forms::PictureBox^  Cin;

	private: System::Windows::Forms::PictureBox^  Cout;

	private: System::Windows::Forms::PictureBox^  Inteiro;


	private: System::Windows::Forms::PictureBox^  Main;



	private: System::Windows::Forms::Label^  label11;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  Compilar;
	private: System::Windows::Forms::Label^  lbl_enunciado;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label12;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LinguagemFatorial::typeid));
			this->Return = (gcnew System::Windows::Forms::PictureBox());
			this->Cout2 = (gcnew System::Windows::Forms::PictureBox());
			this->Para = (gcnew System::Windows::Forms::PictureBox());
			this->Cin = (gcnew System::Windows::Forms::PictureBox());
			this->Cout = (gcnew System::Windows::Forms::PictureBox());
			this->Inteiro = (gcnew System::Windows::Forms::PictureBox());
			this->Main = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Compilar = (gcnew System::Windows::Forms::Button());
			this->lbl_enunciado = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Errado = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Inicio = (gcnew System::Windows::Forms::Label());
			this->Leia = (gcnew System::Windows::Forms::Label());
			this->Integer = (gcnew System::Windows::Forms::Label());
			this->Fim = (gcnew System::Windows::Forms::Label());
			this->Retorno = (gcnew System::Windows::Forms::Label());
			this->Escreva2 = (gcnew System::Windows::Forms::Label());
			this->FimFor = (gcnew System::Windows::Forms::Label());
			this->Fatorial2 = (gcnew System::Windows::Forms::Label());
			this->FOR = (gcnew System::Windows::Forms::Label());
			this->Fatorial = (gcnew System::Windows::Forms::Label());
			this->Escreva = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Return))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Para))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Inteiro))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Main))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Errado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Return
			// 
			this->Return->BackColor = System::Drawing::Color::Transparent;
			this->Return->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Return->Location = System::Drawing::Point(146, 525);
			this->Return->Name = L"Return";
			this->Return->Size = System::Drawing::Size(52, 48);
			this->Return->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Return->TabIndex = 81;
			this->Return->TabStop = false;
			this->Return->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemFatorial::Return_DragDrop);
			this->Return->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemFatorial::Return_DragEnter);
			// 
			// Cout2
			// 
			this->Cout2->BackColor = System::Drawing::Color::Transparent;
			this->Cout2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cout2->Location = System::Drawing::Point(146, 471);
			this->Cout2->Name = L"Cout2";
			this->Cout2->Size = System::Drawing::Size(52, 48);
			this->Cout2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Cout2->TabIndex = 80;
			this->Cout2->TabStop = false;
			this->Cout2->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemFatorial::Cout2_DragDrop);
			this->Cout2->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemFatorial::Cout2_DragEnter);
			// 
			// Para
			// 
			this->Para->BackColor = System::Drawing::Color::Transparent;
			this->Para->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Para->Location = System::Drawing::Point(146, 357);
			this->Para->Name = L"Para";
			this->Para->Size = System::Drawing::Size(52, 48);
			this->Para->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Para->TabIndex = 78;
			this->Para->TabStop = false;
			this->Para->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemFatorial::Para_DragDrop);
			this->Para->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemFatorial::Para_DragEnter);
			// 
			// Cin
			// 
			this->Cin->BackColor = System::Drawing::Color::Transparent;
			this->Cin->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cin->Location = System::Drawing::Point(146, 256);
			this->Cin->Name = L"Cin";
			this->Cin->Size = System::Drawing::Size(52, 48);
			this->Cin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Cin->TabIndex = 77;
			this->Cin->TabStop = false;
			this->Cin->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemFatorial::Cin_DragDrop);
			this->Cin->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemFatorial::Cin_DragEnter);
			// 
			// Cout
			// 
			this->Cout->BackColor = System::Drawing::Color::Transparent;
			this->Cout->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cout->Location = System::Drawing::Point(146, 190);
			this->Cout->Name = L"Cout";
			this->Cout->Size = System::Drawing::Size(52, 48);
			this->Cout->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Cout->TabIndex = 76;
			this->Cout->TabStop = false;
			this->Cout->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemFatorial::Cout_DragDrop);
			this->Cout->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemFatorial::Cout_DragEnter);
			// 
			// Inteiro
			// 
			this->Inteiro->BackColor = System::Drawing::Color::Transparent;
			this->Inteiro->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Inteiro->Location = System::Drawing::Point(146, 127);
			this->Inteiro->Name = L"Inteiro";
			this->Inteiro->Size = System::Drawing::Size(52, 48);
			this->Inteiro->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Inteiro->TabIndex = 74;
			this->Inteiro->TabStop = false;
			this->Inteiro->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemFatorial::Inteiro_DragDrop);
			this->Inteiro->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemFatorial::Inteiro_DragEnter);
			// 
			// Main
			// 
			this->Main->BackColor = System::Drawing::Color::Transparent;
			this->Main->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Main->Location = System::Drawing::Point(142, 47);
			this->Main->Name = L"Main";
			this->Main->Size = System::Drawing::Size(52, 48);
			this->Main->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Main->TabIndex = 73;
			this->Main->TabStop = false;
			this->Main->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemFatorial::Main_DragDrop);
			this->Main->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemFatorial::Main_DragEnter);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(157, 736);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(265, 13);
			this->label11->TabIndex = 70;
			this->label11->Text = L"escreval (\"O aluno \", nome, \" não alcançou a média.\")";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->Location = System::Drawing::Point(204, 279);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 20);
			this->label8->TabIndex = 67;
			this->label8->Text = L">> n;";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Location = System::Drawing::Point(215, 382);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 20);
			this->label7->TabIndex = 66;
			this->label7->Text = L" ( i = 1;  i<=n;  i++){";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(143, 322);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 20);
			this->label6->TabIndex = 65;
			this->label6->Text = L"fatorial = 1;";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(208, 544);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 20);
			this->label5->TabIndex = 64;
			this->label5->Text = L"0;";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(204, 488);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(258, 20);
			this->label4->TabIndex = 63;
			this->label4->Text = L">> \"O fatorial e: \" >> fatorial>> endl;";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(200, 209);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(216, 20);
			this->label3->TabIndex = 62;
			this->label3->Text = L"<<\"Digite um numero\"<<endl;";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(200, 149);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 20);
			this->label1->TabIndex = 60;
			this->label1->Text = L"n, i, fatorial;";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(1109, 654);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 63);
			this->button1->TabIndex = 110;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LinguagemFatorial::button1_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label17->Location = System::Drawing::Point(1118, 631);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(50, 20);
			this->label17->TabIndex = 109;
			this->label17->Text = L"Ajuda";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label16->Location = System::Drawing::Point(1083, 241);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(178, 20);
			this->label16->TabIndex = 108;
			this->label16->Text = L"Utilize os Emojis abaixo:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label15->Location = System::Drawing::Point(760, 47);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(410, 20);
			this->label15->TabIndex = 107;
			this->label15->Text = L"E no fim escreva na tela o resultado do fatorial calculado.";
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(1176, 47);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(100, 138);
			this->pictureBox31->TabIndex = 106;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(1086, 542);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(52, 48);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 105;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemFatorial::pictureBox18_MouseDown);
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(1153, 434);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(52, 48);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 104;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemFatorial::pictureBox17_MouseDown);
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(1086, 380);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(52, 48);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 103;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemFatorial::pictureBox16_MouseDown);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(1153, 380);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(52, 48);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 102;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemFatorial::pictureBox15_MouseDown);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(1224, 382);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(52, 48);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 101;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemFatorial::pictureBox14_MouseDown);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(1086, 266);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(52, 48);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 100;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemFatorial::pictureBox13_MouseDown);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(1224, 488);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(52, 48);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 99;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemFatorial::pictureBox12_MouseDown);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(1153, 488);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(52, 48);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 98;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemFatorial::pictureBox11_MouseDown);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(1086, 434);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(52, 48);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 97;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemFatorial::pictureBox10_MouseDown);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(1086, 322);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(52, 48);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 96;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemFatorial::pictureBox9_MouseDown);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(1153, 322);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(52, 48);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 95;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemFatorial::pictureBox8_MouseDown);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(1224, 322);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(52, 48);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 94;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemFatorial::pictureBox7_MouseDown);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(1153, 542);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(52, 48);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 93;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemFatorial::pictureBox6_MouseDown);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1224, 266);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(52, 48);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 92;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemFatorial::pictureBox5_MouseDown);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1153, 266);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(52, 48);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 91;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemFatorial::pictureBox4_MouseDown);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1086, 488);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(52, 48);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 90;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemFatorial::pictureBox3_MouseDown);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1224, 434);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(52, 48);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 89;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemFatorial::pictureBox2_MouseDown);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label14->Location = System::Drawing::Point(1184, 631);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(71, 20);
			this->label14->TabIndex = 88;
			this->label14->Text = L"Compilar";
			// 
			// Compilar
			// 
			this->Compilar->BackColor = System::Drawing::Color::Transparent;
			this->Compilar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Compilar.Image")));
			this->Compilar->Location = System::Drawing::Point(1197, 654);
			this->Compilar->Name = L"Compilar";
			this->Compilar->Size = System::Drawing::Size(55, 63);
			this->Compilar->TabIndex = 87;
			this->Compilar->UseVisualStyleBackColor = false;
			this->Compilar->Click += gcnew System::EventHandler(this, &LinguagemFatorial::Compilar_Click);
			// 
			// lbl_enunciado
			// 
			this->lbl_enunciado->AutoSize = true;
			this->lbl_enunciado->BackColor = System::Drawing::Color::Transparent;
			this->lbl_enunciado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_enunciado->Location = System::Drawing::Point(528, 9);
			this->lbl_enunciado->Name = L"lbl_enunciado";
			this->lbl_enunciado->Size = System::Drawing::Size(757, 20);
			this->lbl_enunciado->TabIndex = 86;
			this->lbl_enunciado->Text = L"Complete o código na linguagem C++, para que ele calcule o fatorial de um número "
				L"fornecido pelo usuario.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(200, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 20);
			this->label2->TabIndex = 111;
			this->label2->Text = L"(int argc,  char* argv){";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->Location = System::Drawing::Point(106, 75);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(30, 20);
			this->label9->TabIndex = 112;
			this->label9->Text = L"int ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label10->Location = System::Drawing::Point(200, 417);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(139, 20);
			this->label10->TabIndex = 113;
			this->label10->Text = L"fatorial = fatorial *i;";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label12->Location = System::Drawing::Point(159, 434);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(14, 20);
			this->label12->TabIndex = 114;
			this->label12->Text = L"}";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label13->Location = System::Drawing::Point(159, 595);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(14, 20);
			this->label13->TabIndex = 115;
			this->label13->Text = L"}";
			// 
			// Errado
			// 
			this->Errado->BackColor = System::Drawing::Color::Transparent;
			this->Errado->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Errado.Image")));
			this->Errado->Location = System::Drawing::Point(1227, 553);
			this->Errado->Name = L"Errado";
			this->Errado->Size = System::Drawing::Size(34, 37);
			this->Errado->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Errado->TabIndex = 116;
			this->Errado->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1227, 542);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(52, 48);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 117;
			this->pictureBox1->TabStop = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label18->Location = System::Drawing::Point(1261, 631);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(67, 20);
			this->label18->TabIndex = 119;
			this->label18->Text = L"Avançar";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->Location = System::Drawing::Point(1265, 654);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 63);
			this->button2->TabIndex = 120;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &LinguagemFatorial::button2_Click);
			// 
			// Inicio
			// 
			this->Inicio->AutoSize = true;
			this->Inicio->BackColor = System::Drawing::Color::Transparent;
			this->Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Inicio->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Inicio->Location = System::Drawing::Point(642, 230);
			this->Inicio->Name = L"Inicio";
			this->Inicio->Size = System::Drawing::Size(0, 20);
			this->Inicio->TabIndex = 121;
			// 
			// Leia
			// 
			this->Leia->AutoSize = true;
			this->Leia->BackColor = System::Drawing::Color::Transparent;
			this->Leia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Leia->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Leia->Location = System::Drawing::Point(642, 287);
			this->Leia->Name = L"Leia";
			this->Leia->Size = System::Drawing::Size(0, 20);
			this->Leia->TabIndex = 122;
			// 
			// Integer
			// 
			this->Integer->AutoSize = true;
			this->Integer->BackColor = System::Drawing::Color::Transparent;
			this->Integer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Integer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Integer->Location = System::Drawing::Point(642, 247);
			this->Integer->Name = L"Integer";
			this->Integer->Size = System::Drawing::Size(0, 20);
			this->Integer->TabIndex = 123;
			// 
			// Fim
			// 
			this->Fim->AutoSize = true;
			this->Fim->BackColor = System::Drawing::Color::Transparent;
			this->Fim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Fim->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Fim->Location = System::Drawing::Point(642, 410);
			this->Fim->Name = L"Fim";
			this->Fim->Size = System::Drawing::Size(0, 20);
			this->Fim->TabIndex = 124;
			// 
			// Retorno
			// 
			this->Retorno->AutoSize = true;
			this->Retorno->BackColor = System::Drawing::Color::Transparent;
			this->Retorno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Retorno->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Retorno->Location = System::Drawing::Point(642, 393);
			this->Retorno->Name = L"Retorno";
			this->Retorno->Size = System::Drawing::Size(0, 20);
			this->Retorno->TabIndex = 125;
			// 
			// Escreva2
			// 
			this->Escreva2->AutoSize = true;
			this->Escreva2->BackColor = System::Drawing::Color::Transparent;
			this->Escreva2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Escreva2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Escreva2->Location = System::Drawing::Point(642, 376);
			this->Escreva2->Name = L"Escreva2";
			this->Escreva2->Size = System::Drawing::Size(0, 20);
			this->Escreva2->TabIndex = 126;
			// 
			// FimFor
			// 
			this->FimFor->AutoSize = true;
			this->FimFor->BackColor = System::Drawing::Color::Transparent;
			this->FimFor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->FimFor->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->FimFor->Location = System::Drawing::Point(642, 359);
			this->FimFor->Name = L"FimFor";
			this->FimFor->Size = System::Drawing::Size(0, 20);
			this->FimFor->TabIndex = 127;
			// 
			// Fatorial2
			// 
			this->Fatorial2->AutoSize = true;
			this->Fatorial2->BackColor = System::Drawing::Color::Transparent;
			this->Fatorial2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Fatorial2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Fatorial2->Location = System::Drawing::Point(642, 342);
			this->Fatorial2->Name = L"Fatorial2";
			this->Fatorial2->Size = System::Drawing::Size(0, 20);
			this->Fatorial2->TabIndex = 128;
			// 
			// FOR
			// 
			this->FOR->AutoSize = true;
			this->FOR->BackColor = System::Drawing::Color::Transparent;
			this->FOR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->FOR->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->FOR->Location = System::Drawing::Point(642, 325);
			this->FOR->Name = L"FOR";
			this->FOR->Size = System::Drawing::Size(0, 20);
			this->FOR->TabIndex = 129;
			// 
			// Fatorial
			// 
			this->Fatorial->AutoSize = true;
			this->Fatorial->BackColor = System::Drawing::Color::Transparent;
			this->Fatorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Fatorial->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Fatorial->Location = System::Drawing::Point(642, 304);
			this->Fatorial->Name = L"Fatorial";
			this->Fatorial->Size = System::Drawing::Size(0, 20);
			this->Fatorial->TabIndex = 130;
			// 
			// Escreva
			// 
			this->Escreva->AutoSize = true;
			this->Escreva->BackColor = System::Drawing::Color::Transparent;
			this->Escreva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Escreva->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Escreva->Location = System::Drawing::Point(642, 266);
			this->Escreva->Name = L"Escreva";
			this->Escreva->Size = System::Drawing::Size(0, 20);
			this->Escreva->TabIndex = 131;
			// 
			// LinguagemFatorial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1350, 729);
			this->Controls->Add(this->Escreva);
			this->Controls->Add(this->Fatorial);
			this->Controls->Add(this->FOR);
			this->Controls->Add(this->Fatorial2);
			this->Controls->Add(this->FimFor);
			this->Controls->Add(this->Escreva2);
			this->Controls->Add(this->Retorno);
			this->Controls->Add(this->Fim);
			this->Controls->Add(this->Integer);
			this->Controls->Add(this->Leia);
			this->Controls->Add(this->Inicio);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Errado);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->Compilar);
			this->Controls->Add(this->lbl_enunciado);
			this->Controls->Add(this->Return);
			this->Controls->Add(this->Cout2);
			this->Controls->Add(this->Para);
			this->Controls->Add(this->Cin);
			this->Controls->Add(this->Cout);
			this->Controls->Add(this->Inteiro);
			this->Controls->Add(this->Main);
			this->Controls->Add(this->label11);
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
			this->Name = L"LinguagemFatorial";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Emoji++";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &LinguagemFatorial::LinguagemFatorial_FormClosed);
			this->Load += gcnew System::EventHandler(this, &LinguagemFatorial::LinguagemFatorial_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Return))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Para))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Inteiro))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Main))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Errado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox13_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox13->DoDragDrop(pictureBox13->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox4_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 6;
	pictureBox4->DoDragDrop(pictureBox4->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox5_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 2;
	pictureBox5->DoDragDrop(pictureBox5->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox9_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox9->DoDragDrop(pictureBox9->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox8_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox8->DoDragDrop(pictureBox8->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox7_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox7->DoDragDrop(pictureBox7->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox16_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox16->DoDragDrop(pictureBox16->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox15_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox15->DoDragDrop(pictureBox15->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox14_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox14->DoDragDrop(pictureBox14->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox10_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox10->DoDragDrop(pictureBox10->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox17_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox17->DoDragDrop(pictureBox17->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox2_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 1;
	pictureBox2->DoDragDrop(pictureBox2->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox3_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox3->DoDragDrop(pictureBox3->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox11_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 3;
	pictureBox11->DoDragDrop(pictureBox11->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox12_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 4;
	pictureBox12->DoDragDrop(pictureBox12->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox18_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox18->DoDragDrop(pictureBox18->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox6_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 5;
	pictureBox6->DoDragDrop(pictureBox6->Image, DragDropEffects::Copy);
}


private: System::Void Main_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 1) {
		Main->Image = pictureBox2->Image;
		Resposta = 'M';
		Posicao = 0;
		setRespostas(Resposta, Posicao);
		this->Inicio->Text = L"int main (int agrc, char * argv){";
	}
	else {
		Main->Image = Errado->Image;
	}
}
private: System::Void Inteiro_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 2) {
		Inteiro->Image = pictureBox5->Image;
		Resposta = 'I';
		Posicao = 1;
		setRespostas(Resposta, Posicao);
		this->Integer->Text = L"int n, i, fatorial;";
		}
	else {
		Main->Image = Errado->Image;
	}
}
private: System::Void Cout_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 3) {
		Cout->Image = pictureBox11->Image;
		Resposta = 'E';
		Posicao = 2;
		setRespostas(Resposta, Posicao);
		this->Escreva->Text = L"cout <<'Digite um numero'<< endl;";
	}
	else {
		Main->Image = Errado->Image;
	}
}
private: System::Void Cin_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 4) {
		Cin->Image = pictureBox12->Image;
		Resposta = 'L';
		Posicao = 3;
		setRespostas(Resposta, Posicao);
		this->Leia->Text = L"cin >> n;";
		this->Fatorial->Text = L"fatorial = 1;";
	}
	else {
		Main->Image = Errado->Image;
	}
}
private: System::Void Para_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 5) {
		Para->Image = pictureBox6->Image;
		Resposta = 'P';
		Posicao = 4;
		setRespostas(Resposta, Posicao);
		this->FOR->Text = L"for(i = 1; i<=n; i++){;";
		this->Fatorial2->Text = L"fatorial = fatorial * i;";
		this->FimFor->Text = L"}";
	}
	else {
		Main->Image = Errado->Image;
	}
}
private: System::Void Cout2_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 3) {
		Cout2->Image = pictureBox11->Image;
		Resposta = 'E';
		Posicao = 5;
		setRespostas(Resposta, Posicao);
		this->Escreva2->Text = L"cout >> 'O fatorial e' >>fatorial>>endl;";
	}
	else {
		Main->Image = Errado->Image;
	}
}
private: System::Void Return_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 6) {
		Return->Image = pictureBox4->Image;
		Resposta = 'R';
		Posicao = 6;
		setRespostas(Resposta, Posicao);
		this->Retorno->Text = L"return 0;";
		this->Fim->Text = L"}";
	}
	else {
		Main->Image = Errado->Image;
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
private: System::Void Para_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void Cout2_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void Return_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void LinguagemFatorial_Load(System::Object^  sender, System::EventArgs^  e) {
	Main->AllowDrop = true;
	Inteiro->AllowDrop = true;
	Cout->AllowDrop = true;
	Cout2->AllowDrop = true;
	Para->AllowDrop = true;
	Cin->AllowDrop = true;
	Return->AllowDrop = true;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	AjudaAlgoritmo^ tem = gcnew AjudaAlgoritmo();
	tem->ShowDialog();
}
private: System::Void Compilar_Click(System::Object^  sender, System::EventArgs^  e) {
	Resultado = chamarCompilador(NumeroDoProblema);
	if (Resultado == 1) {
		TelaSucesso sucess;
		TelaSucesso ^ tem = gcnew TelaSucesso(NumeroDoProblema);
		tem->ShowDialog();
		
	}
	else {
		TelaErro ^ tem = gcnew TelaErro();
		tem->ShowDialog();
	}
}
private: System::Void LinguagemFatorial_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	Application::Exit();
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	LinguagemMedia^ lme = gcnew LinguagemMedia();
	lme->ShowDialog();
	//TelaFinal ^ tem = gcnew TelaFinal();
	//tem->ShowDialog();
}
};
}
