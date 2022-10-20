#include "Node.h"
#include "Pila.h"
#include "Cola.h"

#pragma once

namespace ProyectoColorMania {

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
		static int segundos = 0;
		static int minutos=0;
		static String^ Sec;
		static String^ Min;
		int contadorX = 0;//Contador para saltos de linea
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
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ Mapa;

	private: System::Windows::Forms::Button^ btnJugar;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label3;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Mapa = (gcnew System::Windows::Forms::DataGridView());
			this->btnJugar = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mapa))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(439, 14);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cargar archivo de juego";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(439, 79);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(47, 17);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Fácil";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(439, 102);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(54, 17);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Media";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(439, 125);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(63, 17);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Extrema";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(439, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Dificultad:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(439, 148);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(143, 30);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Cambiar de pila a cola";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(439, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Movimientos restantes: ";
			// 
			// Mapa
			// 
			this->Mapa->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Mapa->Location = System::Drawing::Point(7, 7);
			this->Mapa->Name = L"Mapa";
			this->Mapa->Size = System::Drawing::Size(409, 259);
			this->Mapa->TabIndex = 7;
			// 
			// btnJugar
			// 
			this->btnJugar->Location = System::Drawing::Point(165, 272);
			this->btnJugar->Name = L"btnJugar";
			this->btnJugar->Size = System::Drawing::Size(91, 26);
			this->btnJugar->TabIndex = 8;
			this->btnJugar->Text = L"A jugar";
			this->btnJugar->UseVisualStyleBackColor = true;
			this->btnJugar->Click += gcnew System::EventHandler(this, &MyForm::btnJugar_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(439, 215);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Tiempo restante: ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(651, 339);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnJugar);
			this->Controls->Add(this->Mapa);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"ColorMania";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mapa))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Node^ bloque;
		
		openFileDialog1->FileName = "";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			array<String^>^ lineas = File::ReadAllLines(openFileDialog1->FileName);
			while (lineas->Length > 0)
			{
				for (int i = 0; i < lineas->Length; i++)
				{
					array<String^>^ lineas2 = lineas[i]->Split(',');
					for (int j = 0; j < lineas2->Length; j++)
					{
						if (lineas2[i] == "X")
						{
							contadorX++;
						}
						//Vamos a leer el color del bloque
						if (lineas2[i] == "V") {
							DataGridViewColumn^ NuevaColumna = gcnew DataGridViewColumn();
							NuevaColumna->Width = 75;
							DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
							NuevaColumna->CellTemplate = cellTemplate;
							Mapa->Columns->Add(NuevaColumna);
							Mapa->Rows[i]->Cells[i]->Style->BackColor = Color::Green;
						}
						if (lineas2[i] == "R") {
							DataGridViewColumn^ NuevaColumna = gcnew DataGridViewColumn();
							NuevaColumna->Width = 75;
							DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
							NuevaColumna->CellTemplate = cellTemplate;
							Mapa->Columns->Add(NuevaColumna);
							Mapa->Rows[i]->Cells[i]->Style->BackColor = Color::Red;

						}
						if (lineas2[i] == "A") {
							DataGridViewColumn^ NuevaColumna = gcnew DataGridViewColumn();
							NuevaColumna->Width = 75;
							DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
							NuevaColumna->CellTemplate = cellTemplate;
							Mapa->Columns->Add(NuevaColumna);
							Mapa->Rows[i]->Cells[i]->Style->BackColor = Color::Yellow;
						}
						if (lineas2[i] == "M") {
							DataGridViewColumn^ NuevaColumna = gcnew DataGridViewColumn();
							NuevaColumna->Width = 75;
							DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
							NuevaColumna->CellTemplate = cellTemplate;
							Mapa->Columns->Add(NuevaColumna);
							Mapa->Rows[i]->Cells[i]->Style->BackColor = Color::Purple;
						}
					}
				}
			}
		}
	}
	private: System::Void btnJugar_Click(System::Object^ sender, System::EventArgs^ e) {
		int movimientos;
		int tiempo;
		if (radioButton1->Checked == true)
			label2->Text = "Movimientos restantes disponibles: N/A";
		else if (radioButton2->Checked == true) {
			movimientos = 50;
			minutos = 10;
			timer1->Start();
			if (segundos == 60) {
				
				minutos--;
				
				Min = Convert::ToString(minutos);
				label3->Text = "Tiempo: " + Min+" minutos";
				if (minutos == 0) {
					timer1->Stop();
					label3->Text = "0";
					MessageBox::Show("Se acabó el tiempo!");
				}
			}
			
			
			
			label2->Text = "Movimientos restantes disponibles: " + movimientos;
		}
		else if (radioButton3->Checked == true) {
			movimientos = 25;
			
			label2->Text = "Movimientos restantes disponibles: " + movimientos;
		}
	}
};


void DePilaCola() {
		Pila^ miPila = gcnew Pila();
		Cola^ miCola = gcnew Cola();
		Node^ bloque = gcnew Node();
		bloque->valor;
		while (miPila->Count()!=0)
		{
			miPila->Pop();
			
			miCola->Agregar(bloque);
		}
	}
void Pintar(int columna, int fila, int valor) {
	//El 1 será para Rojo, El 2 para Verde, 3 para Amarillo 4 para Morado
	if (valor == 1) {
		Mapa->Rows[fila]->Cells[columna]->Style->BackColor = Color::Red;
	}
	if (valor == 2) {
		Mapa->Rows[fila]->Cells[columna]->Style->BackColor = Color::Green;
	}
	if (valor == 3) {
		Mapa->Rows[fila]->Cells[columna]->Style->BackColor = Color::Yellow;
	}
	if (valor == 4) {
		Mapa->Rows[fila]->Cells[columna]->Style->BackColor = Color::Purple;
	}
}




}
