#pragma once
#include "Busquedas.h"
namespace Lab7DiegoMorales1209817 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::ListBox^ listBox1;
		   array <int>^ arreglo;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(220, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Búsqueda por Hashing";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(220, 137);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 45);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Búsqueda Secuencial";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(220, 196);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 43);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Búsqueda Binaria";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(33, 87);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(130, 20);
			this->textBox1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Longitud del arreglo";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(45, 145);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 29);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Crear arreglo";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(45, 219);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(91, 20);
			this->textBox2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Elemento a buscar: ";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(31, 264);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(110, 69);
			this->listBox1->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 339);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int largo;
		try
		{
			largo = Convert::ToInt32(textBox1->Text);
			arreglo = gcnew array<int>(largo);
			MessageBox::Show("La longitud del arreglo es de: " + largo + " números.");
			Random rnd;
			for (int i = 0; i < largo; i++)
			{

				arreglo[i] = rnd.Next(-10, 50);
				
			}
			
		}
		catch (Exception ^e)
		{
			MessageBox::Show("Ingresa un valor entero y mayor que 0, por favor");
		}
		
		
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Busquedas^ Buscar = gcnew Busquedas();
	int searched = Convert::ToInt32(textBox2->Text);
	
}
};
}
