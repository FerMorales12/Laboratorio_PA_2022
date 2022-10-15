#pragma once
#include "DatosPokemon.h"
#include "Ordenamientos.h"

namespace Lab05DiegoMorales1209817 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAbrirArchivo;
	protected:
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnAbrirArchivo = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnAbrirArchivo
			// 
			this->btnAbrirArchivo->Location = System::Drawing::Point(162, 255);
			this->btnAbrirArchivo->Name = L"btnAbrirArchivo";
			this->btnAbrirArchivo->Size = System::Drawing::Size(111, 34);
			this->btnAbrirArchivo->TabIndex = 0;
			this->btnAbrirArchivo->Text = L"Abrir archivo";
			this->btnAbrirArchivo->UseVisualStyleBackColor = true;
			this->btnAbrirArchivo->Click += gcnew System::EventHandler(this, &MyForm::btnAbrirArchivo_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"Pokedex.csv";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(42, 70);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(87, 160);
			this->listBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Número Nacional";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(176, 70);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(89, 160);
			this->listBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(173, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nombre Pokemon";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(309, 70);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(87, 160);
			this->listBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(320, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Generación";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(434, 301);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->btnAbrirArchivo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pokedex";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAbrirArchivo_Click(System::Object^ sender, System::EventArgs^ e) {
		Ordenamientos^ Orden = gcnew Ordenamientos();
		StreamReader^ InputStream = gcnew StreamReader(openFileDialog1->FileName);
		array<DatosPokemon^>^ misPokemon;
		MessageBox::Show("Archivo abierto exitosamente");
		if (InputStream != nullptr) {
			misPokemon = gcnew array<DatosPokemon^>(80);
			int PokemonIdx = 0;
			while (String^ lineofText = InputStream->ReadLine())
			{
				char separador = ';';
				array<String^>^ palabras = lineofText->Split(separador);
				
				
					DatosPokemon^ miPokemon = gcnew DatosPokemon();
					miPokemon->NumeroGeneracion = Convert::ToInt32(palabras[2]);
					miPokemon->NumeroNacional = Convert::ToInt32(palabras[0]);
					miPokemon->NombrePokemon = palabras[1];
					misPokemon[PokemonIdx] = miPokemon;
					PokemonIdx++;
				
			}
			InputStream->Close();
			MessageBox::Show("Hay " + misPokemon->Length + " pokemon en total");
			for (int i = 0; i < misPokemon->Length; i++)//Número Nacional
			{
				listBox1->Items->Add(misPokemon[i]->NumeroNacional);
				
			}
			for (int i = 0; i < misPokemon->Length; i++)
			{
				listBox2->Items->Add(misPokemon[i]->NombrePokemon);
			}
			for (int i = 0; i < misPokemon->Length; i++)
			{
				listBox3->Items->Add(misPokemon[i]->NumeroGeneracion);
			}
		}
			



	}
	};


}
