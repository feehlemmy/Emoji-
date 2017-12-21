#pragma once
#include "AlgoritmoMedia.h"
#include "LinguagemFatorial.h"

namespace Emoji {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para TelaEscolherModo
	/// </summary>
	public ref class TelaEscolherModo : public System::Windows::Forms::Form
	{
	public:
		TelaEscolherModo(void)
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
		~TelaEscolherModo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_algoritmo;
	private: System::Windows::Forms::Button^  btn_linguagem;
	private: System::Windows::Forms::PictureBox^  Professor1;
	private: System::Windows::Forms::PictureBox^  Professor2;
	private: System::Windows::Forms::Label^  lbl_algoritmo;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(TelaEscolherModo::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_algoritmo = (gcnew System::Windows::Forms::Button());
			this->btn_linguagem = (gcnew System::Windows::Forms::Button());
			this->Professor1 = (gcnew System::Windows::Forms::PictureBox());
			this->Professor2 = (gcnew System::Windows::Forms::PictureBox());
			this->lbl_algoritmo = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Professor1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Professor2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(439, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(439, 39);
			this->label1->TabIndex = 43;
			this->label1->Text = L"O que você quer estudar\?";
			this->label1->Click += gcnew System::EventHandler(this, &TelaEscolherModo::label1_Click);
			// 
			// btn_algoritmo
			// 
			this->btn_algoritmo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_algoritmo->Location = System::Drawing::Point(56, 619);
			this->btn_algoritmo->Name = L"btn_algoritmo";
			this->btn_algoritmo->Size = System::Drawing::Size(176, 98);
			this->btn_algoritmo->TabIndex = 44;
			this->btn_algoritmo->Text = L"Algoritmo";
			this->btn_algoritmo->UseVisualStyleBackColor = true;
			this->btn_algoritmo->Click += gcnew System::EventHandler(this, &TelaEscolherModo::btn_algoritmo_Click);
			// 
			// btn_linguagem
			// 
			this->btn_linguagem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_linguagem->Location = System::Drawing::Point(1041, 619);
			this->btn_linguagem->Name = L"btn_linguagem";
			this->btn_linguagem->Size = System::Drawing::Size(176, 98);
			this->btn_linguagem->TabIndex = 45;
			this->btn_linguagem->Text = L"Linguagem";
			this->btn_linguagem->UseVisualStyleBackColor = true;
			this->btn_linguagem->Click += gcnew System::EventHandler(this, &TelaEscolherModo::btn_linguagem_Click);
			// 
			// Professor1
			// 
			this->Professor1->BackColor = System::Drawing::Color::Transparent;
			this->Professor1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Professor1.Image")));
			this->Professor1->Location = System::Drawing::Point(1117, 421);
			this->Professor1->Name = L"Professor1";
			this->Professor1->Size = System::Drawing::Size(100, 140);
			this->Professor1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Professor1->TabIndex = 46;
			this->Professor1->TabStop = false;
			// 
			// Professor2
			// 
			this->Professor2->BackColor = System::Drawing::Color::Transparent;
			this->Professor2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Professor2.Image")));
			this->Professor2->Location = System::Drawing::Point(56, 247);
			this->Professor2->Name = L"Professor2";
			this->Professor2->Size = System::Drawing::Size(100, 140);
			this->Professor2->TabIndex = 47;
			this->Professor2->TabStop = false;
			// 
			// lbl_algoritmo
			// 
			this->lbl_algoritmo->AutoSize = true;
			this->lbl_algoritmo->BackColor = System::Drawing::Color::Transparent;
			this->lbl_algoritmo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->lbl_algoritmo->Location = System::Drawing::Point(162, 335);
			this->lbl_algoritmo->Name = L"lbl_algoritmo";
			this->lbl_algoritmo->Size = System::Drawing::Size(563, 26);
			this->lbl_algoritmo->TabIndex = 48;
			this->lbl_algoritmo->Text = L"Em algoritmos, você ira completar trechos de algoritmos,";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label2->Location = System::Drawing::Point(162, 361);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(712, 26);
			this->label2->TabIndex = 49;
			this->label2->Text = L"Completando as lacunas com os emojis corretos é só clicar em verificar!";
			this->label2->Click += gcnew System::EventHandler(this, &TelaEscolherModo::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label3->Location = System::Drawing::Point(687, 506);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(424, 26);
			this->label3->TabIndex = 50;
			this->label3->Text = L"Em linguagem, iremos trabalhar com C++,";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label4->Location = System::Drawing::Point(397, 506);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 26);
			this->label4->TabIndex = 51;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label5->Location = System::Drawing::Point(392, 532);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(719, 26);
			this->label5->TabIndex = 52;
			this->label5->Text = L"Completando as lacunas com os emojis corretos é só clicar em compilar!";
			// 
			// TelaEscolherModo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1286, 729);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbl_algoritmo);
			this->Controls->Add(this->Professor2);
			this->Controls->Add(this->Professor1);
			this->Controls->Add(this->btn_linguagem);
			this->Controls->Add(this->btn_algoritmo);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TelaEscolherModo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Emoji++";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &TelaEscolherModo::TelaEscolherModo_FormClosed);
			this->Load += gcnew System::EventHandler(this, &TelaEscolherModo::TelaEscolherModo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Professor1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Professor2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
		private: System::Void TelaEscolherModo_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			Application::Exit();
		}
	private: System::Void btn_algoritmo_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		AlgoritmoMedia^ tem = gcnew AlgoritmoMedia();
		tem->ShowDialog();
	}
	private: System::Void TelaEscolherModo_Load(System::Object^  sender, System::EventArgs^  e) {	
	}
	private: System::Void btn_linguagem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		LinguagemFatorial^ tem = gcnew LinguagemFatorial();
		tem->ShowDialog();
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
