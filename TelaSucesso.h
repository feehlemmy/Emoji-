#pragma once
namespace Emoji {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para TelaSucesso
	/// </summary>
	public ref class TelaSucesso : public System::Windows::Forms::Form
	{
		
	public:
		int NumAlg;
		void receberNumero(int);
		int coletarNumero(int);
		void executarCodigo(int);
		TelaSucesso(void) {
			InitializeComponent();
		}
		TelaSucesso(int NumeroDoProblema)
		{
						InitializeComponent();
			//
						NumAlg = NumeroDoProblema;

			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~TelaSucesso()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  Lbl_Resposta;
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
			System::Windows::Forms::Label^  Lbl_Texto;
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaSucesso::typeid));
			this->Lbl_Resposta = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			Lbl_Texto = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Lbl_Resposta))->BeginInit();
			this->SuspendLayout();
			// 
			// Lbl_Texto
			// 
			Lbl_Texto->AutoSize = true;
			Lbl_Texto->Cursor = System::Windows::Forms::Cursors::Default;
			Lbl_Texto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			Lbl_Texto->Location = System::Drawing::Point(52, 303);
			Lbl_Texto->Name = L"Lbl_Texto";
			Lbl_Texto->Size = System::Drawing::Size(409, 20);
			Lbl_Texto->TabIndex = 1;
			Lbl_Texto->Text = L"Você é um otimo programador, seu código esta correto!!!";
			// 
			// Lbl_Resposta
			// 
			this->Lbl_Resposta->BackColor = System::Drawing::Color::White;
			this->Lbl_Resposta->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Lbl_Resposta.Image")));
			this->Lbl_Resposta->Location = System::Drawing::Point(131, 31);
			this->Lbl_Resposta->Name = L"Lbl_Resposta";
			this->Lbl_Resposta->Size = System::Drawing::Size(250, 234);
			this->Lbl_Resposta->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->Lbl_Resposta->TabIndex = 0;
			this->Lbl_Resposta->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button1->Location = System::Drawing::Point(172, 340);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 43);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Executar o código";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TelaSucesso::button1_Click);
			// 
			// TelaSucesso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(497, 403);
			this->Controls->Add(this->button1);
			this->Controls->Add(Lbl_Texto);
			this->Controls->Add(this->Lbl_Resposta);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TelaSucesso";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Wow!";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Lbl_Resposta))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	executarCodigo(NumAlg);
}
};
}