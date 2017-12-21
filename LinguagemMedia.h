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
	/// Sumário para LinguagemMedia
	/// </summary>
	public ref class LinguagemMedia : public System::Windows::Forms::Form
	{
	public:
		int Comparador;
		int NumeroDoProblema = 4;
		char Resposta;
		int Posicao;
		int Resultado;
	
	public:
	
		void setRespostas(char, int);
		int chamarCompilador(int);
		LinguagemMedia(void)
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
		~LinguagemMedia()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn_avan;
	private: System::Windows::Forms::Label^  lbl_avanc;
	protected:


	private: System::Windows::Forms::Button^  btn_comp;

	private: System::Windows::Forms::Button^  btn_sos;
	private: System::Windows::Forms::Label^  lbl_comp;
	private: System::Windows::Forms::Label^  lbl_sos;
	private: System::Windows::Forms::Label^  ELSE;
	private: System::Windows::Forms::Label^  Escreva5;
	private: System::Windows::Forms::Label^  Escreva4;
	private: System::Windows::Forms::Label^  Escreva;
	private: System::Windows::Forms::Label^  Leia;
	private: System::Windows::Forms::Label^  Escreva2;
	private: System::Windows::Forms::Label^  Leia2;
	private: System::Windows::Forms::Label^  Escreva3;
	private: System::Windows::Forms::Label^  Leia3;
	private: System::Windows::Forms::Label^  Media;
	private: System::Windows::Forms::Label^  IF;
	private: System::Windows::Forms::Label^  Integer;
	private: System::Windows::Forms::Label^  Literal;
	private: System::Windows::Forms::Label^  lbl_Inicio;
	private: System::Windows::Forms::Label^  lbl_FIM;
	private: System::Windows::Forms::Label^  lbl_retorno;
	private: System::Windows::Forms::PictureBox^  CharSaida;
	private: System::Windows::Forms::PictureBox^  Errado;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  ElseEntrada;
	private: System::Windows::Forms::PictureBox^  Cout6;
	private: System::Windows::Forms::PictureBox^  Cout5;
	private: System::Windows::Forms::PictureBox^  SeEntrada;
	private: System::Windows::Forms::PictureBox^  Cin3;
	private: System::Windows::Forms::PictureBox^  Cout3;
	private: System::Windows::Forms::PictureBox^  Cin2;
	private: System::Windows::Forms::PictureBox^  Cout2;
	private: System::Windows::Forms::PictureBox^  Cin;
	private: System::Windows::Forms::PictureBox^  Cout1;
	private: System::Windows::Forms::PictureBox^  FloatEntrada;
	private: System::Windows::Forms::PictureBox^  StringEntrada;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  SenaoSaida;
	private: System::Windows::Forms::PictureBox^  LiteralSaida;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  Logica;
	private: System::Windows::Forms::PictureBox^  CinSaida;
	private: System::Windows::Forms::PictureBox^  CoutSaida;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  Real;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  Retorno;
	private: System::Windows::Forms::PictureBox^  SeSaida;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  CharEntrada;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lbl_enunciado;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::PictureBox^  ReturnEntrada;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LinguagemMedia::typeid));
			this->btn_avan = (gcnew System::Windows::Forms::Button());
			this->lbl_avanc = (gcnew System::Windows::Forms::Label());
			this->btn_comp = (gcnew System::Windows::Forms::Button());
			this->btn_sos = (gcnew System::Windows::Forms::Button());
			this->lbl_comp = (gcnew System::Windows::Forms::Label());
			this->lbl_sos = (gcnew System::Windows::Forms::Label());
			this->ELSE = (gcnew System::Windows::Forms::Label());
			this->Escreva5 = (gcnew System::Windows::Forms::Label());
			this->Escreva4 = (gcnew System::Windows::Forms::Label());
			this->Escreva = (gcnew System::Windows::Forms::Label());
			this->Leia = (gcnew System::Windows::Forms::Label());
			this->Escreva2 = (gcnew System::Windows::Forms::Label());
			this->Leia2 = (gcnew System::Windows::Forms::Label());
			this->Escreva3 = (gcnew System::Windows::Forms::Label());
			this->Leia3 = (gcnew System::Windows::Forms::Label());
			this->Media = (gcnew System::Windows::Forms::Label());
			this->IF = (gcnew System::Windows::Forms::Label());
			this->Integer = (gcnew System::Windows::Forms::Label());
			this->Literal = (gcnew System::Windows::Forms::Label());
			this->lbl_Inicio = (gcnew System::Windows::Forms::Label());
			this->CharSaida = (gcnew System::Windows::Forms::PictureBox());
			this->Errado = (gcnew System::Windows::Forms::PictureBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->ElseEntrada = (gcnew System::Windows::Forms::PictureBox());
			this->Cout6 = (gcnew System::Windows::Forms::PictureBox());
			this->Cout5 = (gcnew System::Windows::Forms::PictureBox());
			this->SeEntrada = (gcnew System::Windows::Forms::PictureBox());
			this->Cin3 = (gcnew System::Windows::Forms::PictureBox());
			this->Cout3 = (gcnew System::Windows::Forms::PictureBox());
			this->Cin2 = (gcnew System::Windows::Forms::PictureBox());
			this->Cout2 = (gcnew System::Windows::Forms::PictureBox());
			this->Cin = (gcnew System::Windows::Forms::PictureBox());
			this->Cout1 = (gcnew System::Windows::Forms::PictureBox());
			this->FloatEntrada = (gcnew System::Windows::Forms::PictureBox());
			this->StringEntrada = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->SenaoSaida = (gcnew System::Windows::Forms::PictureBox());
			this->LiteralSaida = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->Logica = (gcnew System::Windows::Forms::PictureBox());
			this->CinSaida = (gcnew System::Windows::Forms::PictureBox());
			this->CoutSaida = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->Real = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->Retorno = (gcnew System::Windows::Forms::PictureBox());
			this->SeSaida = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->CharEntrada = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbl_enunciado = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->ReturnEntrada = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->lbl_retorno = (gcnew System::Windows::Forms::Label());
			this->lbl_FIM = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CharSaida))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Errado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ElseEntrada))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SeEntrada))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cin3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cin2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FloatEntrada))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StringEntrada))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SenaoSaida))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LiteralSaida))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logica))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CinSaida))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CoutSaida))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Real))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Retorno))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SeSaida))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CharEntrada))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ReturnEntrada))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_avan
			// 
			this->btn_avan->BackColor = System::Drawing::Color::Transparent;
			this->btn_avan->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_avan.BackgroundImage")));
			this->btn_avan->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btn_avan->Location = System::Drawing::Point(1259, 744);
			this->btn_avan->Name = L"btn_avan";
			this->btn_avan->Size = System::Drawing::Size(55, 63);
			this->btn_avan->TabIndex = 121;
			this->btn_avan->UseVisualStyleBackColor = false;
			this->btn_avan->Click += gcnew System::EventHandler(this, &LinguagemMedia::btn_avan_Click);
			// 
			// lbl_avanc
			// 
			this->lbl_avanc->AutoSize = true;
			this->lbl_avanc->BackColor = System::Drawing::Color::Transparent;
			this->lbl_avanc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_avanc->Location = System::Drawing::Point(1255, 721);
			this->lbl_avanc->Name = L"lbl_avanc";
			this->lbl_avanc->Size = System::Drawing::Size(67, 20);
			this->lbl_avanc->TabIndex = 122;
			this->lbl_avanc->Text = L"Avançar";
			// 
			// btn_comp
			// 
			this->btn_comp->BackColor = System::Drawing::Color::Transparent;
			this->btn_comp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_comp.Image")));
			this->btn_comp->Location = System::Drawing::Point(1194, 744);
			this->btn_comp->Name = L"btn_comp";
			this->btn_comp->Size = System::Drawing::Size(55, 63);
			this->btn_comp->TabIndex = 123;
			this->btn_comp->UseVisualStyleBackColor = false;
			this->btn_comp->Click += gcnew System::EventHandler(this, &LinguagemMedia::btn_comp_Click);
			// 
			// btn_sos
			// 
			this->btn_sos->BackColor = System::Drawing::Color::Transparent;
			this->btn_sos->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_sos.Image")));
			this->btn_sos->Location = System::Drawing::Point(1109, 744);
			this->btn_sos->Name = L"btn_sos";
			this->btn_sos->Size = System::Drawing::Size(72, 63);
			this->btn_sos->TabIndex = 124;
			this->btn_sos->UseVisualStyleBackColor = false;
			this->btn_sos->Click += gcnew System::EventHandler(this, &LinguagemMedia::btn_sos_Click);
			// 
			// lbl_comp
			// 
			this->lbl_comp->AutoSize = true;
			this->lbl_comp->BackColor = System::Drawing::Color::Transparent;
			this->lbl_comp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_comp->Location = System::Drawing::Point(1183, 721);
			this->lbl_comp->Name = L"lbl_comp";
			this->lbl_comp->Size = System::Drawing::Size(71, 20);
			this->lbl_comp->TabIndex = 125;
			this->lbl_comp->Text = L"Compilar";
			// 
			// lbl_sos
			// 
			this->lbl_sos->AutoSize = true;
			this->lbl_sos->BackColor = System::Drawing::Color::Transparent;
			this->lbl_sos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_sos->Location = System::Drawing::Point(1118, 721);
			this->lbl_sos->Name = L"lbl_sos";
			this->lbl_sos->Size = System::Drawing::Size(50, 20);
			this->lbl_sos->TabIndex = 126;
			this->lbl_sos->Text = L"Ajuda";
			// 
			// ELSE
			// 
			this->ELSE->AutoSize = true;
			this->ELSE->BackColor = System::Drawing::Color::Transparent;
			this->ELSE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->ELSE->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ELSE->Location = System::Drawing::Point(606, 523);
			this->ELSE->Name = L"ELSE";
			this->ELSE->Size = System::Drawing::Size(0, 20);
			this->ELSE->TabIndex = 200;
			// 
			// Escreva5
			// 
			this->Escreva5->AutoSize = true;
			this->Escreva5->BackColor = System::Drawing::Color::Transparent;
			this->Escreva5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Escreva5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Escreva5->Location = System::Drawing::Point(606, 545);
			this->Escreva5->Name = L"Escreva5";
			this->Escreva5->Size = System::Drawing::Size(0, 20);
			this->Escreva5->TabIndex = 198;
			// 
			// Escreva4
			// 
			this->Escreva4->AutoSize = true;
			this->Escreva4->BackColor = System::Drawing::Color::Transparent;
			this->Escreva4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Escreva4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Escreva4->Location = System::Drawing::Point(606, 503);
			this->Escreva4->Name = L"Escreva4";
			this->Escreva4->Size = System::Drawing::Size(0, 20);
			this->Escreva4->TabIndex = 196;
			// 
			// Escreva
			// 
			this->Escreva->AutoSize = true;
			this->Escreva->BackColor = System::Drawing::Color::Transparent;
			this->Escreva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Escreva->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Escreva->Location = System::Drawing::Point(606, 343);
			this->Escreva->Name = L"Escreva";
			this->Escreva->Size = System::Drawing::Size(0, 20);
			this->Escreva->TabIndex = 194;
			// 
			// Leia
			// 
			this->Leia->AutoSize = true;
			this->Leia->BackColor = System::Drawing::Color::Transparent;
			this->Leia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Leia->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Leia->Location = System::Drawing::Point(606, 362);
			this->Leia->Name = L"Leia";
			this->Leia->Size = System::Drawing::Size(0, 20);
			this->Leia->TabIndex = 192;
			// 
			// Escreva2
			// 
			this->Escreva2->AutoSize = true;
			this->Escreva2->BackColor = System::Drawing::Color::Transparent;
			this->Escreva2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Escreva2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Escreva2->Location = System::Drawing::Point(606, 383);
			this->Escreva2->Name = L"Escreva2";
			this->Escreva2->Size = System::Drawing::Size(0, 20);
			this->Escreva2->TabIndex = 190;
			// 
			// Leia2
			// 
			this->Leia2->AutoSize = true;
			this->Leia2->BackColor = System::Drawing::Color::Transparent;
			this->Leia2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Leia2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Leia2->Location = System::Drawing::Point(606, 403);
			this->Leia2->Name = L"Leia2";
			this->Leia2->Size = System::Drawing::Size(0, 20);
			this->Leia2->TabIndex = 188;
			// 
			// Escreva3
			// 
			this->Escreva3->AutoSize = true;
			this->Escreva3->BackColor = System::Drawing::Color::Transparent;
			this->Escreva3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Escreva3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Escreva3->Location = System::Drawing::Point(606, 423);
			this->Escreva3->Name = L"Escreva3";
			this->Escreva3->Size = System::Drawing::Size(0, 20);
			this->Escreva3->TabIndex = 186;
			// 
			// Leia3
			// 
			this->Leia3->AutoSize = true;
			this->Leia3->BackColor = System::Drawing::Color::Transparent;
			this->Leia3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Leia3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Leia3->Location = System::Drawing::Point(606, 443);
			this->Leia3->Name = L"Leia3";
			this->Leia3->Size = System::Drawing::Size(0, 20);
			this->Leia3->TabIndex = 185;
			// 
			// Media
			// 
			this->Media->AutoSize = true;
			this->Media->BackColor = System::Drawing::Color::Transparent;
			this->Media->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Media->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Media->Location = System::Drawing::Point(606, 463);
			this->Media->Name = L"Media";
			this->Media->Size = System::Drawing::Size(0, 20);
			this->Media->TabIndex = 183;
			// 
			// IF
			// 
			this->IF->AutoSize = true;
			this->IF->BackColor = System::Drawing::Color::Transparent;
			this->IF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->IF->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->IF->Location = System::Drawing::Point(606, 483);
			this->IF->Name = L"IF";
			this->IF->Size = System::Drawing::Size(0, 20);
			this->IF->TabIndex = 180;
			// 
			// Integer
			// 
			this->Integer->AutoSize = true;
			this->Integer->BackColor = System::Drawing::Color::Transparent;
			this->Integer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Integer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Integer->Location = System::Drawing::Point(606, 323);
			this->Integer->Name = L"Integer";
			this->Integer->Size = System::Drawing::Size(0, 20);
			this->Integer->TabIndex = 178;
			// 
			// Literal
			// 
			this->Literal->AutoSize = true;
			this->Literal->BackColor = System::Drawing::Color::Transparent;
			this->Literal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->Literal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Literal->Location = System::Drawing::Point(606, 306);
			this->Literal->Name = L"Literal";
			this->Literal->Size = System::Drawing::Size(0, 20);
			this->Literal->TabIndex = 177;
			// 
			// lbl_Inicio
			// 
			this->lbl_Inicio->AutoSize = true;
			this->lbl_Inicio->BackColor = System::Drawing::Color::Transparent;
			this->lbl_Inicio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_Inicio->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_Inicio->Location = System::Drawing::Point(606, 286);
			this->lbl_Inicio->Name = L"lbl_Inicio";
			this->lbl_Inicio->Size = System::Drawing::Size(0, 20);
			this->lbl_Inicio->TabIndex = 130;
			// 
			// CharSaida
			// 
			this->CharSaida->BackColor = System::Drawing::Color::Transparent;
			this->CharSaida->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CharSaida.Image")));
			this->CharSaida->Location = System::Drawing::Point(1227, 556);
			this->CharSaida->Name = L"CharSaida";
			this->CharSaida->Size = System::Drawing::Size(52, 48);
			this->CharSaida->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->CharSaida->TabIndex = 175;
			this->CharSaida->TabStop = false;
			this->CharSaida->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemMedia::CharSaida_MouseDown);
			// 
			// Errado
			// 
			this->Errado->BackColor = System::Drawing::Color::Transparent;
			this->Errado->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Errado.Image")));
			this->Errado->Location = System::Drawing::Point(1231, 562);
			this->Errado->Name = L"Errado";
			this->Errado->Size = System::Drawing::Size(36, 42);
			this->Errado->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Errado->TabIndex = 174;
			this->Errado->TabStop = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label16->Location = System::Drawing::Point(1089, 263);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(178, 20);
			this->label16->TabIndex = 173;
			this->label16->Text = L"Utilize os Emojis abaixo:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label15->Location = System::Drawing::Point(554, 38);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(728, 20);
			this->label15->TabIndex = 172;
			this->label15->Text = L"No final escreva o nome do aluno, sua media, e caso a media seja menor que 7, não"
				L" alcançou a media";
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(1182, 65);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(100, 138);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox31->TabIndex = 171;
			this->pictureBox31->TabStop = false;
			// 
			// ElseEntrada
			// 
			this->ElseEntrada->BackColor = System::Drawing::Color::Transparent;
			this->ElseEntrada->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ElseEntrada->Location = System::Drawing::Point(97, 642);
			this->ElseEntrada->Name = L"ElseEntrada";
			this->ElseEntrada->Size = System::Drawing::Size(52, 48);
			this->ElseEntrada->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ElseEntrada->TabIndex = 170;
			this->ElseEntrada->TabStop = false;
			this->ElseEntrada->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::ElseEntrada_DragDrop);
			this->ElseEntrada->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::ElseEntrada_DragEnter);
			// 
			// Cout6
			// 
			this->Cout6->BackColor = System::Drawing::Color::Transparent;
			this->Cout6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cout6->Location = System::Drawing::Point(97, 696);
			this->Cout6->Name = L"Cout6";
			this->Cout6->Size = System::Drawing::Size(52, 48);
			this->Cout6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Cout6->TabIndex = 169;
			this->Cout6->TabStop = false;
			this->Cout6->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::Cout6_DragDrop);
			this->Cout6->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::Cout6_DragEnter);
			// 
			// Cout5
			// 
			this->Cout5->BackColor = System::Drawing::Color::Transparent;
			this->Cout5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cout5->Location = System::Drawing::Point(97, 588);
			this->Cout5->Name = L"Cout5";
			this->Cout5->Size = System::Drawing::Size(52, 48);
			this->Cout5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Cout5->TabIndex = 168;
			this->Cout5->TabStop = false;
			this->Cout5->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::Cout5_DragDrop);
			this->Cout5->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::Cout5_DragEnter);
			// 
			// SeEntrada
			// 
			this->SeEntrada->BackColor = System::Drawing::Color::Transparent;
			this->SeEntrada->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SeEntrada->Location = System::Drawing::Point(97, 534);
			this->SeEntrada->Name = L"SeEntrada";
			this->SeEntrada->Size = System::Drawing::Size(52, 48);
			this->SeEntrada->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->SeEntrada->TabIndex = 167;
			this->SeEntrada->TabStop = false;
			this->SeEntrada->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::SeEntrada_DragDrop);
			this->SeEntrada->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::SeEntrada_DragEnter);
			// 
			// Cin3
			// 
			this->Cin3->BackColor = System::Drawing::Color::Transparent;
			this->Cin3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cin3->Location = System::Drawing::Point(97, 465);
			this->Cin3->Name = L"Cin3";
			this->Cin3->Size = System::Drawing::Size(52, 48);
			this->Cin3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Cin3->TabIndex = 166;
			this->Cin3->TabStop = false;
			this->Cin3->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::Cin3_DragDrop);
			this->Cin3->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::Cin3_DragEnter);
			// 
			// Cout3
			// 
			this->Cout3->BackColor = System::Drawing::Color::Transparent;
			this->Cout3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cout3->Location = System::Drawing::Point(97, 411);
			this->Cout3->Name = L"Cout3";
			this->Cout3->Size = System::Drawing::Size(52, 48);
			this->Cout3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Cout3->TabIndex = 165;
			this->Cout3->TabStop = false;
			this->Cout3->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::Cout3_DragDrop);
			this->Cout3->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::Cout3_DragEnter);
			// 
			// Cin2
			// 
			this->Cin2->BackColor = System::Drawing::Color::Transparent;
			this->Cin2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cin2->Location = System::Drawing::Point(97, 357);
			this->Cin2->Name = L"Cin2";
			this->Cin2->Size = System::Drawing::Size(52, 48);
			this->Cin2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Cin2->TabIndex = 164;
			this->Cin2->TabStop = false;
			this->Cin2->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::Cin2_DragDrop);
			this->Cin2->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::Cin2_DragEnter);
			// 
			// Cout2
			// 
			this->Cout2->BackColor = System::Drawing::Color::Transparent;
			this->Cout2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cout2->Location = System::Drawing::Point(97, 303);
			this->Cout2->Name = L"Cout2";
			this->Cout2->Size = System::Drawing::Size(52, 48);
			this->Cout2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Cout2->TabIndex = 163;
			this->Cout2->TabStop = false;
			this->Cout2->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::Cout2_DragDrop);
			this->Cout2->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::Cout2_DragEnter);
			// 
			// Cin
			// 
			this->Cin->BackColor = System::Drawing::Color::Transparent;
			this->Cin->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cin->Location = System::Drawing::Point(97, 249);
			this->Cin->Name = L"Cin";
			this->Cin->Size = System::Drawing::Size(52, 48);
			this->Cin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Cin->TabIndex = 162;
			this->Cin->TabStop = false;
			this->Cin->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::Cin_DragDrop);
			this->Cin->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::Cin_DragEnter);
			// 
			// Cout1
			// 
			this->Cout1->BackColor = System::Drawing::Color::Transparent;
			this->Cout1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Cout1->Location = System::Drawing::Point(97, 195);
			this->Cout1->Name = L"Cout1";
			this->Cout1->Size = System::Drawing::Size(52, 48);
			this->Cout1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Cout1->TabIndex = 161;
			this->Cout1->TabStop = false;
			this->Cout1->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::Cout1_DragDrop);
			this->Cout1->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::Cout1_DragEnter);
			// 
			// FloatEntrada
			// 
			this->FloatEntrada->BackColor = System::Drawing::Color::Transparent;
			this->FloatEntrada->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->FloatEntrada->Location = System::Drawing::Point(96, 144);
			this->FloatEntrada->Name = L"FloatEntrada";
			this->FloatEntrada->Size = System::Drawing::Size(52, 48);
			this->FloatEntrada->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->FloatEntrada->TabIndex = 160;
			this->FloatEntrada->TabStop = false;
			this->FloatEntrada->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::FloatEntrada_DragDrop);
			this->FloatEntrada->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::FloatEntrada_DragEnter);
			// 
			// StringEntrada
			// 
			this->StringEntrada->BackColor = System::Drawing::Color::Transparent;
			this->StringEntrada->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->StringEntrada->Location = System::Drawing::Point(97, 92);
			this->StringEntrada->Name = L"StringEntrada";
			this->StringEntrada->Size = System::Drawing::Size(52, 48);
			this->StringEntrada->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->StringEntrada->TabIndex = 159;
			this->StringEntrada->TabStop = false;
			this->StringEntrada->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::StringEntrada_DragDrop);
			this->StringEntrada->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::StringEntrada_DragEnter);
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(1092, 556);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(52, 48);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 158;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &LinguagemMedia::pictureBox18_Click);
			// 
			// SenaoSaida
			// 
			this->SenaoSaida->BackColor = System::Drawing::Color::Transparent;
			this->SenaoSaida->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SenaoSaida.Image")));
			this->SenaoSaida->Location = System::Drawing::Point(1159, 448);
			this->SenaoSaida->Name = L"SenaoSaida";
			this->SenaoSaida->Size = System::Drawing::Size(52, 48);
			this->SenaoSaida->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->SenaoSaida->TabIndex = 157;
			this->SenaoSaida->TabStop = false;
			this->SenaoSaida->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemMedia::SenaoSaida_MouseDown);
			// 
			// LiteralSaida
			// 
			this->LiteralSaida->BackColor = System::Drawing::Color::Transparent;
			this->LiteralSaida->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LiteralSaida.Image")));
			this->LiteralSaida->Location = System::Drawing::Point(1092, 394);
			this->LiteralSaida->Name = L"LiteralSaida";
			this->LiteralSaida->Size = System::Drawing::Size(52, 48);
			this->LiteralSaida->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->LiteralSaida->TabIndex = 156;
			this->LiteralSaida->TabStop = false;
			this->LiteralSaida->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemMedia::LiteralSaida_MouseDown);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(1159, 394);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(52, 48);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 155;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemMedia::pictureBox15_MouseDown);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(1227, 394);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(52, 48);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 154;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemMedia::pictureBox14_MouseDown);
			// 
			// Logica
			// 
			this->Logica->BackColor = System::Drawing::Color::Transparent;
			this->Logica->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logica.Image")));
			this->Logica->Location = System::Drawing::Point(1092, 286);
			this->Logica->Name = L"Logica";
			this->Logica->Size = System::Drawing::Size(52, 48);
			this->Logica->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Logica->TabIndex = 153;
			this->Logica->TabStop = false;
			this->Logica->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemMedia::Logica_MouseDown);
			// 
			// CinSaida
			// 
			this->CinSaida->BackColor = System::Drawing::Color::Transparent;
			this->CinSaida->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CinSaida.Image")));
			this->CinSaida->Location = System::Drawing::Point(1227, 502);
			this->CinSaida->Name = L"CinSaida";
			this->CinSaida->Size = System::Drawing::Size(52, 48);
			this->CinSaida->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->CinSaida->TabIndex = 152;
			this->CinSaida->TabStop = false;
			this->CinSaida->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemMedia::CinSaida_MouseDown);
			// 
			// CoutSaida
			// 
			this->CoutSaida->BackColor = System::Drawing::Color::Transparent;
			this->CoutSaida->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CoutSaida.Image")));
			this->CoutSaida->Location = System::Drawing::Point(1159, 502);
			this->CoutSaida->Name = L"CoutSaida";
			this->CoutSaida->Size = System::Drawing::Size(52, 48);
			this->CoutSaida->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->CoutSaida->TabIndex = 151;
			this->CoutSaida->TabStop = false;
			this->CoutSaida->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemMedia::CoutSaida_MouseDown);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(1092, 448);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(52, 48);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 150;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemMedia::pictureBox10_MouseDown);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(1092, 340);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(52, 48);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 149;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemMedia::pictureBox9_MouseDown);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(1159, 340);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(52, 48);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 148;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemMedia::pictureBox8_MouseDown);
			// 
			// Real
			// 
			this->Real->BackColor = System::Drawing::Color::Transparent;
			this->Real->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Real.Image")));
			this->Real->Location = System::Drawing::Point(1227, 340);
			this->Real->Name = L"Real";
			this->Real->Size = System::Drawing::Size(52, 48);
			this->Real->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Real->TabIndex = 147;
			this->Real->TabStop = false;
			this->Real->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemMedia::Real_MouseDown);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(1159, 556);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(52, 48);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 146;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemMedia::pictureBox6_MouseDown);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(1227, 286);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(52, 48);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 145;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemMedia::pictureBox5_MouseDown);
			// 
			// Retorno
			// 
			this->Retorno->BackColor = System::Drawing::Color::Transparent;
			this->Retorno->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Retorno.Image")));
			this->Retorno->Location = System::Drawing::Point(1159, 286);
			this->Retorno->Name = L"Retorno";
			this->Retorno->Size = System::Drawing::Size(52, 48);
			this->Retorno->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Retorno->TabIndex = 144;
			this->Retorno->TabStop = false;
			this->Retorno->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemMedia::Retorno_MouseDown);
			// 
			// SeSaida
			// 
			this->SeSaida->BackColor = System::Drawing::Color::Transparent;
			this->SeSaida->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SeSaida.Image")));
			this->SeSaida->Location = System::Drawing::Point(1092, 502);
			this->SeSaida->Name = L"SeSaida";
			this->SeSaida->Size = System::Drawing::Size(52, 48);
			this->SeSaida->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->SeSaida->TabIndex = 143;
			this->SeSaida->TabStop = false;
			this->SeSaida->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemMedia::SeSaida_MouseDown);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1227, 448);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(52, 48);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 142;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LinguagemMedia::pictureBox2_MouseDown);
			// 
			// CharEntrada
			// 
			this->CharEntrada->BackColor = System::Drawing::Color::Transparent;
			this->CharEntrada->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CharEntrada->Location = System::Drawing::Point(155, 25);
			this->CharEntrada->Name = L"CharEntrada";
			this->CharEntrada->Size = System::Drawing::Size(52, 48);
			this->CharEntrada->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->CharEntrada->TabIndex = 141;
			this->CharEntrada->TabStop = false;
			this->CharEntrada->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::CharEntrada_DragDrop);
			this->CharEntrada->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::CharEntrada_DragEnter);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label13->Location = System::Drawing::Point(155, 608);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(396, 20);
			this->label13->TabIndex = 140;
			this->label13->Text = L"<<\"A média do aluno \"<< nome<< \" é:\"<< media<<endl;";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label10->Location = System::Drawing::Point(155, 553);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(110, 20);
			this->label10->TabIndex = 139;
			this->label10->Text = L"( media >= 7) {";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label9->Location = System::Drawing::Point(97, 511);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(207, 20);
			this->label9->TabIndex = 138;
			this->label9->Text = L"media  = (nota1 + nota2) / 2;";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label8->Location = System::Drawing::Point(155, 277);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(71, 20);
			this->label8->TabIndex = 137;
			this->label8->Text = L">>nome;";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label7->Location = System::Drawing::Point(155, 331);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(206, 20);
			this->label7->TabIndex = 136;
			this->label7->Text = L"<<\"Informe a nota 1:<<endl;";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(155, 383);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 20);
			this->label6->TabIndex = 135;
			this->label6->Text = L">>nota1;";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(155, 439);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(208, 20);
			this->label4->TabIndex = 133;
			this->label4->Text = L"<<\"Informe a nota 2\"<<endl;";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(155, 204);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(276, 20);
			this->label3->TabIndex = 132;
			this->label3->Text = L"<<\"Informe o nome do aluno: \"<<endl;";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(154, 172);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 20);
			this->label2->TabIndex = 129;
			this->label2->Text = L"nota1, nota2 , media;";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(154, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 20);
			this->label1->TabIndex = 128;
			this->label1->Text = L"nome;";
			// 
			// lbl_enunciado
			// 
			this->lbl_enunciado->AutoSize = true;
			this->lbl_enunciado->BackColor = System::Drawing::Color::Transparent;
			this->lbl_enunciado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_enunciado->Location = System::Drawing::Point(488, 10);
			this->lbl_enunciado->Name = L"lbl_enunciado";
			this->lbl_enunciado->Size = System::Drawing::Size(807, 20);
			this->lbl_enunciado->TabIndex = 127;
			this->lbl_enunciado->Text = L"Complete o algoritmo a seguir, de modo que ele leia o nome do aluno, a nota de du"
				L"as provas e calcule sua media.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label11->Location = System::Drawing::Point(20, 53);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(129, 20);
			this->label11->TabIndex = 201;
			this->label11->Text = L"int main (int argc,";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label12->Location = System::Drawing::Point(217, 52);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(59, 20);
			this->label12->TabIndex = 202;
			this->label12->Text = L"* argv){";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(155, 491);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 20);
			this->label5->TabIndex = 203;
			this->label5->Text = L">>nota2;";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label14->Location = System::Drawing::Point(154, 724);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(397, 20);
			this->label14->TabIndex = 204;
			this->label14->Text = L"<<\"O aluno\"<< nome<< \"nao alcancou a media\"<<endl;";
			// 
			// ReturnEntrada
			// 
			this->ReturnEntrada->BackColor = System::Drawing::Color::Transparent;
			this->ReturnEntrada->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ReturnEntrada->Location = System::Drawing::Point(96, 750);
			this->ReturnEntrada->Name = L"ReturnEntrada";
			this->ReturnEntrada->Size = System::Drawing::Size(52, 48);
			this->ReturnEntrada->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->ReturnEntrada->TabIndex = 205;
			this->ReturnEntrada->TabStop = false;
			this->ReturnEntrada->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::ReturnEntrada_DragDrop);
			this->ReturnEntrada->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &LinguagemMedia::ReturnEntrada_DragEnter);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label17->Location = System::Drawing::Point(154, 778);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(22, 20);
			this->label17->TabIndex = 207;
			this->label17->Text = L"0;";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label18->Location = System::Drawing::Point(112, 801);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(14, 20);
			this->label18->TabIndex = 208;
			this->label18->Text = L"}";
			// 
			// lbl_retorno
			// 
			this->lbl_retorno->AutoSize = true;
			this->lbl_retorno->BackColor = System::Drawing::Color::Transparent;
			this->lbl_retorno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_retorno->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_retorno->Location = System::Drawing::Point(606, 565);
			this->lbl_retorno->Name = L"lbl_retorno";
			this->lbl_retorno->Size = System::Drawing::Size(0, 20);
			this->lbl_retorno->TabIndex = 209;
			// 
			// lbl_FIM
			// 
			this->lbl_FIM->AutoSize = true;
			this->lbl_FIM->BackColor = System::Drawing::Color::Transparent;
			this->lbl_FIM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->lbl_FIM->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lbl_FIM->Location = System::Drawing::Point(606, 585);
			this->lbl_FIM->Name = L"lbl_FIM";
			this->lbl_FIM->Size = System::Drawing::Size(0, 20);
			this->lbl_FIM->TabIndex = 210;
			// 
			// LinguagemMedia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1350, 839);
			this->Controls->Add(this->lbl_FIM);
			this->Controls->Add(this->lbl_retorno);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->ReturnEntrada);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->ELSE);
			this->Controls->Add(this->Escreva5);
			this->Controls->Add(this->Escreva4);
			this->Controls->Add(this->Escreva);
			this->Controls->Add(this->Leia);
			this->Controls->Add(this->Escreva2);
			this->Controls->Add(this->Leia2);
			this->Controls->Add(this->Escreva3);
			this->Controls->Add(this->Leia3);
			this->Controls->Add(this->Media);
			this->Controls->Add(this->IF);
			this->Controls->Add(this->Integer);
			this->Controls->Add(this->Literal);
			this->Controls->Add(this->lbl_Inicio);
			this->Controls->Add(this->CharSaida);
			this->Controls->Add(this->Errado);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->ElseEntrada);
			this->Controls->Add(this->Cout6);
			this->Controls->Add(this->Cout5);
			this->Controls->Add(this->SeEntrada);
			this->Controls->Add(this->Cin3);
			this->Controls->Add(this->Cout3);
			this->Controls->Add(this->Cin2);
			this->Controls->Add(this->Cout2);
			this->Controls->Add(this->Cin);
			this->Controls->Add(this->Cout1);
			this->Controls->Add(this->FloatEntrada);
			this->Controls->Add(this->StringEntrada);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->SenaoSaida);
			this->Controls->Add(this->LiteralSaida);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->Logica);
			this->Controls->Add(this->CinSaida);
			this->Controls->Add(this->CoutSaida);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->Real);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->Retorno);
			this->Controls->Add(this->SeSaida);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->CharEntrada);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbl_enunciado);
			this->Controls->Add(this->lbl_sos);
			this->Controls->Add(this->lbl_comp);
			this->Controls->Add(this->btn_sos);
			this->Controls->Add(this->btn_comp);
			this->Controls->Add(this->lbl_avanc);
			this->Controls->Add(this->btn_avan);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LinguagemMedia";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Emoji++";
			this->Load += gcnew System::EventHandler(this, &LinguagemMedia::LinguagemMedia_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CharSaida))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Errado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ElseEntrada))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SeEntrada))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cin3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cin2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Cout1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FloatEntrada))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StringEntrada))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SenaoSaida))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LiteralSaida))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logica))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CinSaida))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CoutSaida))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Real))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Retorno))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SeSaida))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CharEntrada))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ReturnEntrada))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_avan_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		TelaFinal^ tem = gcnew TelaFinal();
		tem->ShowDialog();
	}
private: System::Void Logica_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Logica->DoDragDrop(Logica->Image, DragDropEffects::Copy);

}
private: System::Void Retorno_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 8;
	Retorno->DoDragDrop(Retorno->Image, DragDropEffects::Copy);

}
private: System::Void pictureBox5_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox5->DoDragDrop(pictureBox5->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox9_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox9->DoDragDrop(pictureBox9->Image, DragDropEffects::Copy);

}
private: System::Void pictureBox8_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox8->DoDragDrop(pictureBox8->Image, DragDropEffects::Copy);

}

private: System::Void Real_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 3;
	Real->DoDragDrop(Real->Image, DragDropEffects::Copy);
}
private: System::Void LiteralSaida_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 2;
	LiteralSaida->DoDragDrop(LiteralSaida->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox15_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox15->DoDragDrop(pictureBox15->Image, DragDropEffects::Copy);
}

private: System::Void pictureBox14_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox14->DoDragDrop(pictureBox14	->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox10_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox10->DoDragDrop(pictureBox10->Image, DragDropEffects::Copy);
}
private: System::Void SenaoSaida_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 7;
	SenaoSaida->DoDragDrop(SenaoSaida->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox2_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox2->DoDragDrop(pictureBox2->Image, DragDropEffects::Copy);

}
private: System::Void SeSaida_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 6;
	SeSaida->DoDragDrop(SeSaida->Image, DragDropEffects::Copy);

}
private: System::Void CoutSaida_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 4;
	CoutSaida->DoDragDrop(CoutSaida->Image, DragDropEffects::Copy);
}
private: System::Void CinSaida_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 5;
	CinSaida->DoDragDrop(CinSaida->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox18_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox18->DoDragDrop(pictureBox18->Image, DragDropEffects::Copy);
}
private: System::Void pictureBox6_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox6->DoDragDrop(pictureBox6->Image, DragDropEffects::Copy);
}
private: System::Void CharSaida_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Comparador = 1;
	CharSaida->DoDragDrop(CharSaida->Image, DragDropEffects::Copy);
}
private: System::Void CharEntrada_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 1) {
		CharEntrada->Image = CharSaida->Image;
		Resposta = 'M';
		Posicao = 0;
		setRespostas(Resposta, Posicao);
		this->lbl_Inicio->Text = L"int main(int agrc, char * agrv){";
	}
	else {
		CharEntrada->Image = Errado->Image;
	}
}
private: System::Void StringEntrada_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 2) {
		StringEntrada->Image = LiteralSaida->Image;
		Resposta = 'S';
		Posicao = 1;
		setRespostas(Resposta, Posicao);
		this->Literal->Text = L"string nome;";
	}
	else {
		StringEntrada->Image = Errado->Image;
	}
}
private: System::Void FloatEntrada_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 3) {
		FloatEntrada->Image = Real->Image;
		Resposta = 'F';
		Posicao = 2;
		setRespostas(Resposta, Posicao);
		this->Integer->Text = L"float nota1, nota2, media;";
	}
	else {
		FloatEntrada->Image = Errado->Image;
	}
}
private: System::Void Cout1_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 4) {
		Cout1->Image = CoutSaida->Image;
		Resposta = 'E';
		Posicao = 3;
		setRespostas(Resposta, Posicao);
		this->Escreva->Text = L"cout << 'Informe o nome do aluno'<<endl;";
	}
	else {
		Cout1->Image = Errado->Image;
	}
}
private: System::Void Cout2_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 4) {
		Cout2->Image = CoutSaida->Image;
		Resposta = 'E';
		Posicao = 4;
		setRespostas(Resposta, Posicao);
		this->Escreva2->Text = L"cout << 'Informe a nota 1'<<endl;";
	}
	else {
		Cout2->Image = Errado->Image;
	}
}

private: System::Void Cout3_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 4) {
		Cout3->Image = CoutSaida->Image;
		Resposta = 'E';
		Posicao = 5;
		setRespostas(Resposta, Posicao);
		this->Escreva3->Text = L"cout << 'Informe a nota 2'<<endl;";
	}
	else {
		Cout3->Image = Errado->Image;
	}
}
private: System::Void Cout5_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 4) {
		Cout5->Image = CoutSaida->Image;
		Resposta = 'E';
		Posicao = 6;
		setRespostas(Resposta, Posicao);
		this->Escreva4->Text = L"cout<< 'A média do aluno '<< nome<< ' é:'<< media<<endl;";
	}

	else {
		Cout5->Image = Errado->Image;
	}
}
private: System::Void Cout6_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 4) {
		Cout6->Image = CoutSaida->Image;
		Resposta = 'E';
		Posicao = 7;
		setRespostas(Resposta, Posicao);
		this->Escreva5->Text = L"cout<< 'o aluno'<< nome<< ' nao alcancou a media'<<endl;";
	}
	else {
		Cout1->Image = Errado->Image;
	}
}
private: System::Void Cin_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 5) {
		Cin->Image = CinSaida->Image;
		Resposta = 'L';
		Posicao = 8;
		setRespostas(Resposta, Posicao);
		this->Leia->Text = L"cin>> nome;";
	}
	else {
		Cin->Image = Errado->Image;
	}
}
private: System::Void Cin2_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 5) {
		Cin2->Image = CinSaida->Image;
		Resposta = 'L';
		Posicao = 9;
		setRespostas(Resposta, Posicao);
		this->Leia2->Text = L"cin>> nome;";
	}
	else {
		Cin2->Image = Errado->Image;
	}
}
private: System::Void Cin3_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 5) {
		Cin3->Image = CinSaida->Image;
		Resposta = 'L';
		Posicao = 10;
		setRespostas(Resposta, Posicao);
		this->Leia3->Text = L"cin>> nome;";
		this->Media->Text = L"media = (nota1 + nota2) /2;";
	}
	else {
		Cin3->Image = Errado->Image;
	}
}
private: System::Void SeEntrada_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 6) {
		SeEntrada->Image = SeSaida->Image;
		Resposta = 'I';
		Posicao = 11;
		setRespostas(Resposta, Posicao);
		this->IF->Text = L"if(media >= 7)";
	}
	else {
		SeEntrada->Image = Errado->Image;
	}
}

private: System::Void ElseEntrada_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 7) {
		ElseEntrada->Image = SenaoSaida->Image;
		Resposta = 'X';
		Posicao = 12;
		setRespostas(Resposta, Posicao);
		this->ELSE->Text = L"else";
	}
	else {
		ElseEntrada->Image = Errado->Image;
	}
}
private: System::Void ReturnEntrada_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	if (Comparador == 8) {
		ReturnEntrada->Image = Retorno->Image;
		Resposta = 'R';
		Posicao = 13;
		setRespostas(Resposta, Posicao);
		this->lbl_retorno->Text = L"return 0;";
		this->lbl_FIM->Text = L"}";
	}
	else {
		Retorno->Image = Errado->Image;
	}
}
private: System::Void CharEntrada_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void FloatEntrada_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void StringEntrada_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void Cout1_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void Cin_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void Cout2_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void Cin2_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void Cout3_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void Cin3_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void SeEntrada_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void Cout5_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void ElseEntrada_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void Cout6_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void ReturnEntrada_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
	e->Effect = DragDropEffects::Copy;
}
private: System::Void LinguagemMedia_Load(System::Object^  sender, System::EventArgs^  e) {
	CharEntrada->AllowDrop = true;
	StringEntrada->AllowDrop = true;
	FloatEntrada->AllowDrop = true;
	Cout1->AllowDrop = true;
	Cout2->AllowDrop = true;
	Cout3->AllowDrop = true;
	Cout5->AllowDrop = true;
	Cout6->AllowDrop = true;
	Cin->AllowDrop = true;
	Cin2->AllowDrop = true;
	Cin3->AllowDrop = true;
	SeEntrada->AllowDrop = true;
	ElseEntrada->AllowDrop = true;
	ReturnEntrada->AllowDrop = true;
}
private: System::Void btn_sos_Click(System::Object^  sender, System::EventArgs^  e) {
	AjudaAlgoritmo^ tem = gcnew AjudaAlgoritmo();
	tem->ShowDialog();
}
private: System::Void btn_comp_Click(System::Object^  sender, System::EventArgs^  e) {
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
};
}
