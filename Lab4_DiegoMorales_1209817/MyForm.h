#include "Carta.h"
#include "List.h"
#include "Pila.h"
#pragma once

using namespace System;

namespace Lab4DiegoMorales1209817 {

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
	private: System::Windows::Forms::Button^ BtnSacar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ G1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ G2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ G3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ G4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ G5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ G6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ G7;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->BtnSacar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->G1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->G2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->G3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->G4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->G5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->G6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->G7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// BtnSacar
			// 
			resources->ApplyResources(this->BtnSacar, L"BtnSacar");
			this->BtnSacar->Name = L"BtnSacar";
			this->BtnSacar->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->G1, this->G2,
					this->G3, this->G4, this->G5, this->G6, this->G7
			});
			resources->ApplyResources(this->dataGridView1, L"dataGridView1");
			this->dataGridView1->Name = L"dataGridView1";
			// 
			// G1
			// 
			resources->ApplyResources(this->G1, L"G1");
			this->G1->Name = L"G1";
			// 
			// G2
			// 
			resources->ApplyResources(this->G2, L"G2");
			this->G2->Name = L"G2";
			// 
			// G3
			// 
			resources->ApplyResources(this->G3, L"G3");
			this->G3->Name = L"G3";
			// 
			// G4
			// 
			resources->ApplyResources(this->G4, L"G4");
			this->G4->Name = L"G4";
			// 
			// G5
			// 
			resources->ApplyResources(this->G5, L"G5");
			this->G5->Name = L"G5";
			// 
			// G6
			// 
			resources->ApplyResources(this->G6, L"G6");
			this->G6->Name = L"G6";
			// 
			// G7
			// 
			resources->ApplyResources(this->G7, L"G7");
			this->G7->Name = L"G7";
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BtnSacar);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Bienvenido a Solitario URL");
	

	}
	};
}
