#pragma once

namespace Emoji {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para TelaErro
	/// </summary>
	public ref class TelaErro : public System::Windows::Forms::Form
	{
	public:
		TelaErro(void)
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
		~TelaErro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  Lbl_Resposta;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaErro::typeid));
			this->Lbl_Resposta = (gcnew System::Windows::Forms::PictureBox());
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
			Lbl_Texto->Location = System::Drawing::Point(89, 359);
			Lbl_Texto->Name = L"Lbl_Texto";
			Lbl_Texto->Size = System::Drawing::Size(289, 20);
			Lbl_Texto->TabIndex = 2;
			Lbl_Texto->Text = L"Ops tem algo errado, tente novamente!!";
			// 
			// Lbl_Resposta
			// 
			this->Lbl_Resposta->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Lbl_Resposta.Image")));
			this->Lbl_Resposta->Location = System::Drawing::Point(119, 83);
			this->Lbl_Resposta->Name = L"Lbl_Resposta";
			this->Lbl_Resposta->Size = System::Drawing::Size(226, 216);
			this->Lbl_Resposta->TabIndex = 1;
			this->Lbl_Resposta->TabStop = false;
			// 
			// TelaErro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(471, 415);
			this->Controls->Add(Lbl_Texto);
			this->Controls->Add(this->Lbl_Resposta);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TelaErro";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Oops!";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Lbl_Resposta))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
