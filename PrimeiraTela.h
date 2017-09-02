#pragma once

namespace Emoji {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para PrimeiraTela
	/// </summary>
	public ref class PrimeiraTela : public System::Windows::Forms::Form
	{
	public:
		PrimeiraTela(void)
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
		~PrimeiraTela()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PrimeiraTela::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(204, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(374, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bem vindo ao Emoji ++";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(115, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(556, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Queremos te conhecer melhor, digite seu nome por favor";
			this->label2->Click += gcnew System::EventHandler(this, &PrimeiraTela::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(199, 182);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(327, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Location = System::Drawing::Point(176, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 107);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->Location = System::Drawing::Point(313, 300);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 107);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(451, 300);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 107);
			this->button3->TabIndex = 5;
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->Location = System::Drawing::Point(666, 336);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 71);
			this->button4->TabIndex = 6;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// PrimeiraTela
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(778, 449);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"PrimeiraTela";
			this->Text = L"PrimeiraTela";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
