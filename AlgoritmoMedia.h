#pragma once
#include "AjudaAlgoritmo.h"
#include "Compilador.h"
#include "TelaSucesso.h"
#include "TelaErro.h"
#include "AlgoritmoFatorial.h"

namespace Emoji {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Sumário para AlgoritmoMedia
	/// </summary>
	
	public ref class AlgoritmoMedia : public System::Windows::Forms::Form
	{	
		int NumeroDoProblema = 1;
		int Comparador = 0;
		int Resultado = 0;
		int Posicao = 0;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  Errado;
	private: System::Windows::Forms::PictureBox^  pictureBox33;

	private: System::Windows::Forms::Label^  Inicio;
	private: System::Windows::Forms::Label^  Literal;
	private: System::Windows::Forms::Label^  Integer;
	private: System::Windows::Forms::Label^  IF;



	private: System::Windows::Forms::Label^  Media;

	private: System::Windows::Forms::Label^  Leia3;

	private: System::Windows::Forms::Label^  Escreva3;

	private: System::Windows::Forms::Label^  Leia2;

	private: System::Windows::Forms::Label^  Escreva2;

	private: System::Windows::Forms::Label^  Leia;

	private: System::Windows::Forms::Label^  Escreva;
	private: System::Windows::Forms::Label^  Escreva4;
	private: System::Windows::Forms::Label^  Escreva5;


	private: System::Windows::Forms::Label^  ELSE;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;

























			 char Resposta;
		void setRespostas(char, int);
		int chamarCompilador(int);

		public:
			 
		AlgoritmoMedia(void)
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
		~AlgoritmoMedia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbl_enunciado;









	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;




	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  Compilar;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  button1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(AlgoritmoMedia::typeid));
			this->lbl_enunciado = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Compilar = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Errado = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->Inicio = (gcnew System::Windows::Forms::Label());
			this->Literal = (gcnew System::Windows::Forms::Label());
			this->Integer = (gcnew System::Windows::Forms::Label());
			this->IF = (gcnew System::Windows::Forms::Label());
			this->Media = (gcnew System::Windows::Forms::Label());
			this->Leia3 = (gcnew System::Windows::Forms::Label());
			this->Escreva3 = (gcnew System::Windows::Forms::Label());
			this->Leia2 = (gcnew System::Windows::Forms::Label());
			this->Escreva2 = (gcnew System::Windows::Forms::Label());
			this->Leia = (gcnew System::Windows::Forms::Label());
			this->Escreva = (gcnew System::Windows::Forms::Label());
			this->Escreva4 = (gcnew System::Windows::Forms::Label());
			this->Escreva5 = (gcnew System::Windows::Forms::Label());
			this->ELSE = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Errado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			this->SuspendLayout();
			// 
			// lbl_enunciado
			// 
			this->lbl_enunciado->AutoSize = true;
			this->lbl_enunciado->BackColor = System::Drawing::Color::Transparent;
			this->lbl_enunciado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_enunciado->Location = System::Drawing::Point(487, 29);
			this->lbl_enunciado->Name = L"lbl_enunciado";
			this->lbl_enunciado->Size = System::Drawing::Size(807, 20);
			this->lbl_enunciado->TabIndex = 0;
			this->lbl_enunciado->Text = L"Complete o algoritmo a seguir, de modo que ele leia o nome do aluno, a nota de du"
				L"as provas e calcule sua media.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(164, 122);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 20);
			this->label1->TabIndex = 11;
			this->label1->Text = L"nome:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(59, 176);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"nota1, nota2 , media:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(169, 226);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(216, 20);
			this->label3->TabIndex = 13;
			this->label3->Text = L"(\"Informe o nome do aluno: \")";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(169, 450);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 20);
			this->label4->TabIndex = 14;
			this->label4->Text = L"(\"Informe a nota 2\")";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(173, 506);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"(nota2)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(173, 394);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 20);
			this->label6->TabIndex = 16;
			this->label6->Text = L"(nota1)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Location = System::Drawing::Point(169, 338);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(156, 20);
			this->label7->TabIndex = 17;
			this->label7->Text = L"(\"Informe a nota 1: \")";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->Location = System::Drawing::Point(173, 282);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 20);
			this->label8->TabIndex = 18;
			this->label8->Text = L"(nome)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->Location = System::Drawing::Point(111, 533);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(204, 20);
			this->label9->TabIndex = 19;
			this->label9->Text = L"media <- (nota1 + nota2) / 2";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label10->Location = System::Drawing::Point(169, 575);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(146, 20);
			this->label10->TabIndex = 20;
			this->label10->Text = L"( media >= 7) entao";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label11->Location = System::Drawing::Point(169, 735);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(383, 20);
			this->label11->TabIndex = 25;
			this->label11->Text = L"escreval (\"O aluno \", nome, \" não alcançou a média.\")";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Location = System::Drawing::Point(171, 687);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 13);
			this->label12->TabIndex = 26;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label13->Location = System::Drawing::Point(169, 630);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(294, 20);
			this->label13->TabIndex = 27;
			this->label13->Text = L"(\"A média do aluno \", nome, \" é:\", media)";
			// 
			// Compilar
			// 
			this->Compilar->BackColor = System::Drawing::Color::Transparent;
			this->Compilar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Compilar.Image")));
			this->Compilar->Location = System::Drawing::Point(1182, 735);
			this->Compilar->Name = L"Compilar";
			this->Compilar->Size = System::Drawing::Size(55, 63);
			this->Compilar->TabIndex = 28;
			this->Compilar->UseVisualStyleBackColor = false;
			this->Compilar->Click += gcnew System::EventHandler(this, &AlgoritmoMedia::Compilar_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label14->Location = System::Drawing::Point(1168, 712);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(71, 20);
			this->label14->TabIndex = 29;
			this->label14->Text = L"Compilar";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(111, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(52, 48);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox1_DragDrop);
			this->pictureBox1->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox1_DragEnter);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1226, 467);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(52, 48);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 31;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoMedia::pictureBox2_MouseDown);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1091, 521);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(52, 48);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 32;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoMedia::pictureBox3_MouseDown);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1158, 305);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(52, 48);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 33;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoMedia::pictureBox4_MouseDown);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1226, 305);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(52, 48);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 34;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoMedia::pictureBox5_MouseDown);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(1158, 575);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(52, 48);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 35;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoMedia::pictureBox6_MouseDown);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(1226, 359);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(52, 48);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 36;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoMedia::pictureBox7_MouseDown);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(1158, 359);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(52, 48);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 37;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoMedia::pictureBox8_MouseDown);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(1091, 359);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(52, 48);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 38;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoMedia::pictureBox9_MouseDown);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(1091, 467);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(52, 48);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 39;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoMedia::pictureBox10_MouseDown);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(1158, 521);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(52, 48);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 40;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoMedia::pictureBox11_MouseDown);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(1226, 521);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(52, 48);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 41;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoMedia::pictureBox12_MouseDown);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(1091, 305);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(52, 48);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 42;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoMedia::pictureBox13_MouseDown);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(1226, 413);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(52, 48);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 43;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoMedia::pictureBox14_MouseDown);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(1158, 413);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(52, 48);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 44;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoMedia::pictureBox15_MouseDown);
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(1091, 413);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(52, 48);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 45;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoMedia::pictureBox16_MouseDown);
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(1158, 467);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(52, 48);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 46;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoMedia::pictureBox17_MouseDown);
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(1091, 575);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(52, 48);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 47;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AlgoritmoMedia::pictureBox18_MouseDown);
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox19->Location = System::Drawing::Point(223, 94);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(52, 48);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox19->TabIndex = 48;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox19_DragDrop);
			this->pictureBox19->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox19_DragEnter);
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox20->Location = System::Drawing::Point(223, 148);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(52, 48);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox20->TabIndex = 49;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox20_DragDrop);
			this->pictureBox20->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox20_DragEnter);
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox21->Location = System::Drawing::Point(111, 207);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(52, 48);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox21->TabIndex = 50;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox21_DragDrop);
			this->pictureBox21->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox21_DragEnter);
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox22->Location = System::Drawing::Point(111, 271);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(52, 48);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox22->TabIndex = 51;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox22_DragDrop);
			this->pictureBox22->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox22_DragEnter);
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox23->Location = System::Drawing::Point(111, 325);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(52, 48);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox23->TabIndex = 52;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox23_DragDrop);
			this->pictureBox23->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox23_DragEnter);
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox24->Location = System::Drawing::Point(111, 379);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(52, 48);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox24->TabIndex = 53;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox24_DragDrop);
			this->pictureBox24->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox24_DragEnter);
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox25->Location = System::Drawing::Point(111, 433);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(52, 48);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox25->TabIndex = 54;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox25_DragDrop);
			this->pictureBox25->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox25_DragEnter);
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox26->Location = System::Drawing::Point(111, 487);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(52, 48);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox26->TabIndex = 55;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox26_DragDrop);
			this->pictureBox26->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox26_DragEnter);
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox27->Location = System::Drawing::Point(111, 556);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(52, 48);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox27->TabIndex = 56;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox27_DragDrop);
			this->pictureBox27->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox27_DragEnter);
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox28->Location = System::Drawing::Point(111, 610);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(52, 48);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox28->TabIndex = 57;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox28_DragDrop);
			this->pictureBox28->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox28_DragEnter);
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox29->Location = System::Drawing::Point(111, 718);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(52, 48);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox29->TabIndex = 58;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox29_DragDrop);
			this->pictureBox29->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox29_DragEnter);
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox30->Location = System::Drawing::Point(111, 664);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(52, 48);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox30->TabIndex = 59;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox30_DragDrop);
			this->pictureBox30->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &AlgoritmoMedia::pictureBox30_DragEnter);
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(1181, 84);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(100, 138);
			this->pictureBox31->TabIndex = 60;
			this->pictureBox31->TabStop = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label15->Location = System::Drawing::Point(553, 57);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(728, 20);
			this->label15->TabIndex = 61;
			this->label15->Text = L"No final escreva o nome do aluno, sua media, e caso a media seja menor que 7, não"
				L" alcançou a media";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label16->Location = System::Drawing::Point(1088, 282);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(178, 20);
			this->label16->TabIndex = 62;
			this->label16->Text = L"Utilize os Emojis abaixo:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label17->Location = System::Drawing::Point(1112, 712);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(50, 20);
			this->label17->TabIndex = 64;
			this->label17->Text = L"Ajuda";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(1104, 735);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 63);
			this->button1->TabIndex = 65;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AlgoritmoMedia::button1_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label18->Location = System::Drawing::Point(1239, 712);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(65, 20);
			this->label18->TabIndex = 67;
			this->label18->Text = L"Proximo";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->Location = System::Drawing::Point(1243, 735);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 63);
			this->button2->TabIndex = 68;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AlgoritmoMedia::button2_Click);
			// 
			// Errado
			// 
			this->Errado->BackColor = System::Drawing::Color::Transparent;
			this->Errado->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Errado.Image")));
			this->Errado->Location = System::Drawing::Point(1230, 581);
			this->Errado->Name = L"Errado";
			this->Errado->Size = System::Drawing::Size(36, 42);
			this->Errado->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Errado->TabIndex = 69;
			this->Errado->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(1226, 575);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(52, 48);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox33->TabIndex = 70;
			this->pictureBox33->TabStop = false;
			// 
			// Inicio
			// 
			this->Inicio->AutoSize = true;
			this->Inicio->BackColor = System::Drawing::Color::Transparent;
			this->Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Inicio->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Inicio->Location = System::Drawing::Point(662, 308);
			this->Inicio->Name = L"Inicio";
			this->Inicio->Size = System::Drawing::Size(0, 20);
			this->Inicio->TabIndex = 13;
			// 
			// Literal
			// 
			this->Literal->AutoSize = true;
			this->Literal->BackColor = System::Drawing::Color::Transparent;
			this->Literal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Literal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Literal->Location = System::Drawing::Point(662, 328);
			this->Literal->Name = L"Literal";
			this->Literal->Size = System::Drawing::Size(0, 20);
			this->Literal->TabIndex = 72;
			// 
			// Integer
			// 
			this->Integer->AutoSize = true;
			this->Integer->BackColor = System::Drawing::Color::Transparent;
			this->Integer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Integer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Integer->Location = System::Drawing::Point(662, 345);
			this->Integer->Name = L"Integer";
			this->Integer->Size = System::Drawing::Size(0, 20);
			this->Integer->TabIndex = 73;
			// 
			// IF
			// 
			this->IF->AutoSize = true;
			this->IF->BackColor = System::Drawing::Color::Transparent;
			this->IF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->IF->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->IF->Location = System::Drawing::Point(662, 505);
			this->IF->Name = L"IF";
			this->IF->Size = System::Drawing::Size(0, 20);
			this->IF->TabIndex = 74;
			// 
			// Media
			// 
			this->Media->AutoSize = true;
			this->Media->BackColor = System::Drawing::Color::Transparent;
			this->Media->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Media->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Media->Location = System::Drawing::Point(662, 485);
			this->Media->Name = L"Media";
			this->Media->Size = System::Drawing::Size(0, 20);
			this->Media->TabIndex = 75;
			// 
			// Leia3
			// 
			this->Leia3->AutoSize = true;
			this->Leia3->BackColor = System::Drawing::Color::Transparent;
			this->Leia3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Leia3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Leia3->Location = System::Drawing::Point(662, 465);
			this->Leia3->Name = L"Leia3";
			this->Leia3->Size = System::Drawing::Size(0, 20);
			this->Leia3->TabIndex = 76;
			// 
			// Escreva3
			// 
			this->Escreva3->AutoSize = true;
			this->Escreva3->BackColor = System::Drawing::Color::Transparent;
			this->Escreva3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Escreva3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Escreva3->Location = System::Drawing::Point(662, 445);
			this->Escreva3->Name = L"Escreva3";
			this->Escreva3->Size = System::Drawing::Size(0, 20);
			this->Escreva3->TabIndex = 77;
			// 
			// Leia2
			// 
			this->Leia2->AutoSize = true;
			this->Leia2->BackColor = System::Drawing::Color::Transparent;
			this->Leia2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Leia2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Leia2->Location = System::Drawing::Point(662, 425);
			this->Leia2->Name = L"Leia2";
			this->Leia2->Size = System::Drawing::Size(0, 20);
			this->Leia2->TabIndex = 78;
			// 
			// Escreva2
			// 
			this->Escreva2->AutoSize = true;
			this->Escreva2->BackColor = System::Drawing::Color::Transparent;
			this->Escreva2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Escreva2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Escreva2->Location = System::Drawing::Point(662, 405);
			this->Escreva2->Name = L"Escreva2";
			this->Escreva2->Size = System::Drawing::Size(0, 20);
			this->Escreva2->TabIndex = 79;
			// 
			// Leia
			// 
			this->Leia->AutoSize = true;
			this->Leia->BackColor = System::Drawing::Color::Transparent;
			this->Leia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Leia->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Leia->Location = System::Drawing::Point(662, 384);
			this->Leia->Name = L"Leia";
			this->Leia->Size = System::Drawing::Size(0, 20);
			this->Leia->TabIndex = 80;
			// 
			// Escreva
			// 
			this->Escreva->AutoSize = true;
			this->Escreva->BackColor = System::Drawing::Color::Transparent;
			this->Escreva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Escreva->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Escreva->Location = System::Drawing::Point(662, 365);
			this->Escreva->Name = L"Escreva";
			this->Escreva->Size = System::Drawing::Size(0, 20);
			this->Escreva->TabIndex = 81;
			// 
			// Escreva4
			// 
			this->Escreva4->AutoSize = true;
			this->Escreva4->BackColor = System::Drawing::Color::Transparent;
			this->Escreva4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Escreva4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Escreva4->Location = System::Drawing::Point(662, 525);
			this->Escreva4->Name = L"Escreva4";
			this->Escreva4->Size = System::Drawing::Size(0, 20);
			this->Escreva4->TabIndex = 82;
			// 
			// Escreva5
			// 
			this->Escreva5->AutoSize = true;
			this->Escreva5->BackColor = System::Drawing::Color::Transparent;
			this->Escreva5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Escreva5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Escreva5->Location = System::Drawing::Point(662, 567);
			this->Escreva5->Name = L"Escreva5";
			this->Escreva5->Size = System::Drawing::Size(0, 20);
			this->Escreva5->TabIndex = 83;
			// 
			// ELSE
			// 
			this->ELSE->AutoSize = true;
			this->ELSE->BackColor = System::Drawing::Color::Transparent;
			this->ELSE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->ELSE->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ELSE->Location = System::Drawing::Point(662, 545);
			this->ELSE->Name = L"ELSE";
			this->ELSE->Size = System::Drawing::Size(0, 20);
			this->ELSE->TabIndex = 84;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(398, 251);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 20);
			this->label19->TabIndex = 13;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(398, 271);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(0, 20);
			this->label20->TabIndex = 72;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(398, 288);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 20);
			this->label21->TabIndex = 73;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label22->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(398, 448);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(0, 20);
			this->label22->TabIndex = 74;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(398, 428);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(0, 20);
			this->label23->TabIndex = 75;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(398, 408);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(0, 20);
			this->label24->TabIndex = 76;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(398, 388);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 20);
			this->label25->TabIndex = 77;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(398, 368);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(0, 20);
			this->label26->TabIndex = 78;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(398, 348);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(0, 20);
			this->label27->TabIndex = 79;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(398, 327);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(0, 20);
			this->label28->TabIndex = 80;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(398, 308);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(0, 20);
			this->label29->TabIndex = 81;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(398, 468);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(0, 20);
			this->label30->TabIndex = 82;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(398, 510);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(0, 20);
			this->label31->TabIndex = 83;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(398, 488);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(0, 20);
			this->label32->TabIndex = 84;
			// 
			// AlgoritmoMedia
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1350, 825);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->ELSE);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->Escreva5);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->Escreva4);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->Escreva);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->Leia);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->Escreva2);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->Leia2);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->Escreva3);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->Leia3);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->Media);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->IF);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->Integer);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->Literal);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->Inicio);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->Errado);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox19);
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
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->Compilar);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbl_enunciado);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AlgoritmoMedia";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Emoji++";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AlgoritmoMedia::AlgoritmoMedia_FormClosed);
			this->Load += gcnew System::EventHandler(this, &AlgoritmoMedia::AlgoritmoMedia_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Errado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//		
private: System::Void pictureBox2_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 1;
	pictureBox2->DoDragDrop(pictureBox2->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox13_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox13->DoDragDrop(pictureBox13->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox12_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 5;
	pictureBox12->DoDragDrop(pictureBox12->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox11_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 4;
	pictureBox11->DoDragDrop(pictureBox11->Image, DragDropEffects::Copy);
	
}
private: System::Void pictureBox10_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox10->DoDragDrop(pictureBox10->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox9_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox9->DoDragDrop(pictureBox9->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox8_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox8->DoDragDrop(pictureBox8->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox7_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 3;
	pictureBox7->DoDragDrop(pictureBox7->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox6_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox6->DoDragDrop(pictureBox6->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox5_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox5->DoDragDrop(pictureBox5->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox4_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox4->DoDragDrop(pictureBox4->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox3_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 6;
	pictureBox3->DoDragDrop(pictureBox3->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox17_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 7;
	pictureBox17->DoDragDrop(pictureBox17->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox16_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 2;
	pictureBox16->DoDragDrop(pictureBox16->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox15_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox15->DoDragDrop(pictureBox15->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox14_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox14->DoDragDrop(pictureBox14->Image, DragDropEffects::Copy);
}

private: System::Void pictureBox18_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox18->DoDragDrop(pictureBox18->Image, DragDropEffects::Copy);
}
 // Desenhando


private: System::Void pictureBox22_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 5) {
		pictureBox22->Image = pictureBox12->Image;
		Resposta = 'L';
		Posicao = 9;
		setRespostas(Resposta, Posicao);
		this->Leia->Text = L"Leia(nome)";
	}
	else {
		pictureBox22->Image = Errado->Image;
	}
}
private: System::Void pictureBox24_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 5) {
		pictureBox24->Image = pictureBox12->Image;
		Resposta = 'L';
		Posicao =	10;
		setRespostas(Resposta, Posicao);
		this->Leia2->Text = L"Leia(nota1)";
	}
	else {
		pictureBox24->Image = Errado->Image;
	}
}
private: System::Void pictureBox26_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 5) {
		pictureBox26->Image = pictureBox12->Image;
		Resposta = 'L';
		Posicao = 8;
		setRespostas(Resposta, Posicao);
		this->Leia3->Text = L"Leia(nota2)";
		this->Media->Text = L"media <-(nota1 + nota 2) / 2";
	}
	else {
		pictureBox26->Image = Errado->Image;
	}
}
private: System::Void pictureBox27_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 6) {
		pictureBox27->Image = pictureBox3->Image;
		Resposta = 'X';
		Posicao = 12;
		setRespostas(Resposta, Posicao);
		this->IF->Text = L"Se(media >= 7)";
	}
	else {
		pictureBox27->Image = Errado->Image;
	}
}

private: System::Void pictureBox30_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 7) {
		pictureBox30->Image = pictureBox17->Image;
		Resposta = 'Z';
		Posicao = 11;
		setRespostas(Resposta, Posicao);
		this->ELSE->Text = L"Senão";
	}
	else {
		pictureBox30->Image = Errado->Image;
	}
}
private: System::Void pictureBox1_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 1) {
		pictureBox1->Image = pictureBox2->Image;
		Resposta = 'M';
		Posicao = 0;
		setRespostas(Resposta, Posicao);
		this->Inicio->Text = L"[INICIO]";
	}
	else {
		pictureBox1->Image = Errado->Image;
	}
}
private: System::Void pictureBox19_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 2) {
		pictureBox19->Image = pictureBox16->Image;
		Resposta = 'S';
		Posicao = 1;
		setRespostas(Resposta, Posicao);
		this->Literal->Text = L"nome: literal";

	}
	else {
		pictureBox19->Image = Errado->Image;
	}
}
private: System::Void pictureBox20_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 3) {
		pictureBox20->Image = pictureBox7->Image;
		Resposta = 'F';
		Posicao = 2;
		setRespostas(Resposta, Posicao);
		this->Integer->Text = L"nota1, nota2, media: real";

	}
	else {
		pictureBox20->Image = Errado->Image;
	}
}
private: System::Void pictureBox21_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 4) {
		pictureBox21->Image = pictureBox11->Image;
		Resposta = 'E';
		Posicao = 3;
		setRespostas(Resposta, Posicao);
		this->Escreva->Text = L"Escreva('Informe o nome do aluno')";
	}
	else {
		pictureBox21->Image = Errado->Image;
	}
}
private: System::Void pictureBox23_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 4) {
		pictureBox23->Image = pictureBox11->Image;
		Resposta = 'E';
		Posicao = 4;
		setRespostas(Resposta, Posicao);
		this->Escreva2->Text = L"Escreva('Informe a nota 1')";
	}
	else {
		pictureBox23->Image = Errado->Image;
	}
}
private: System::Void pictureBox25_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 4) {
		pictureBox25->Image = pictureBox11->Image;
		Resposta = 'E';
		Posicao = 5;
		setRespostas(Resposta, Posicao);
		this->Escreva3->Text = L"Escreva('Informe a nota 2')";
	}
	else {
		pictureBox25->Image = Errado->Image;
	}
}
private: System::Void pictureBox28_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 4) {
		pictureBox28->Image = pictureBox11->Image;
		Resposta = 'E';
		Posicao = 6;
		setRespostas(Resposta, Posicao);
		this->Escreva4->Text = L"Escreva('A media do aluno'nome' é 'media'')";
	}
	else {
		pictureBox28->Image = Errado->Image;
	}
}
private: System::Void pictureBox29_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 4) {
		pictureBox29->Image = pictureBox11->Image;
		Resposta = 'E';
		Posicao = 7;
		setRespostas(Resposta, Posicao);
		this->Escreva5->Text = L"Escreva('O aluno'nome' não alcançou a media')";
	}
	else {
		pictureBox29->Image = Errado->Image;
	}
}

//
private: System::Void pictureBox1_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	 e->Effect = DragDropEffects::Copy;
}
private: System::Void pictureBox19_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void pictureBox20_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void pictureBox21_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void pictureBox23_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void pictureBox22_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void pictureBox24_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void pictureBox25_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void pictureBox26_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void pictureBox27_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void pictureBox28_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void pictureBox30_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void pictureBox29_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
//
private: System::Void AlgoritmoMedia_Load(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->AllowDrop = true;
	pictureBox19->AllowDrop = true;
	pictureBox20->AllowDrop = true;
	pictureBox21->AllowDrop = true;
	pictureBox23->AllowDrop = true;
	pictureBox25->AllowDrop = true;
	pictureBox28->AllowDrop = true;
	pictureBox22->AllowDrop = true;
	pictureBox24->AllowDrop = true;
	pictureBox26->AllowDrop = true;
	pictureBox27->AllowDrop = true;
	pictureBox30->AllowDrop = true;
	pictureBox29->AllowDrop = true;


}
private: System::Void AlgoritmoMedia_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
	Application::Exit();
}
private: System::Void Compilar_Click(System::Object^  sender, System::EventArgs^  e) {
	Resultado = chamarCompilador(NumeroDoProblema);
	if (Resultado == 1){
		TelaSucesso sucess;
		TelaSucesso ^ tem = gcnew TelaSucesso(NumeroDoProblema);
		tem->ShowDialog();

	}
	else {
		TelaErro ^ tem = gcnew TelaErro();
		tem->ShowDialog();
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	AjudaAlgoritmo^ tem = gcnew AjudaAlgoritmo();
	tem->ShowDialog();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	AlgoritmoFatorial^ tp = gcnew AlgoritmoFatorial();
	tp->ShowDialog();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
};
}
