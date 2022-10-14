#pragma once

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
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(313, 302);
			this->Controls->Add(this->btnAbrirArchivo);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAbrirArchivo_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	};
}
