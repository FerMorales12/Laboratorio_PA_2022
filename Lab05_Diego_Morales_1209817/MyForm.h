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
			this->SuspendLayout();
			// 
			// btnAbrirArchivo
			// 
			this->btnAbrirArchivo->Location = System::Drawing::Point(101, 230);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(313, 302);
			this->Controls->Add(this->btnAbrirArchivo);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pokedex";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAbrirArchivo_Click(System::Object^ sender, System::EventArgs^ e) {

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
			for (int i = 0; i < misPokemon->Length; i++)
			{

			}
		}
			



	}
	};


}
