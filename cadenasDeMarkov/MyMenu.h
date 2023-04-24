#pragma once
#include"CalculoClima.h"
namespace cadenasDeMarkov {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyMenu
	/// </summary>
	public ref class MyMenu : public System::Windows::Forms::Form
	{
	private:
		Bitmap^ fondo;
	public:
		MyMenu(void)
		{
			fondo = gcnew Bitmap("wallpapers/cheemsMenu.jpg");
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cmbPais;
	private: System::Windows::Forms::ComboBox^ cmbCiudad;
	private: System::Windows::Forms::Timer^ timer1;
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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cmbPais = (gcnew System::Windows::Forms::ComboBox());
			this->cmbCiudad = (gcnew System::Windows::Forms::ComboBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::SeaShell;
			this->button1->Location = System::Drawing::Point(208, 355);
			this->button1->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"SIGUIENTE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyMenu::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(172, 242);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(261, 32);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"DATOS ALEATORIOS";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyMenu::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"MV Boli", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(172, 286);
			this->checkBox2->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(311, 32);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"DATOS EN TEMPO REAL";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyMenu::checkBox2_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Tomato;
			this->label1->Location = System::Drawing::Point(83, 73);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 46);
			this->label1->TabIndex = 3;
			this->label1->Text = L"PAIS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MV Boli", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Tomato;
			this->label2->Location = System::Drawing::Point(61, 163);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(154, 46);
			this->label2->TabIndex = 4;
			this->label2->Text = L"CIUDAD";
			// 
			// cmbPais
			// 
			this->cmbPais->Font = (gcnew System::Drawing::Font(L"MV Boli", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbPais->FormattingEnabled = true;
			this->cmbPais->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ALEMANIA", L"BRASIL", L"FRANCIA", L"PERU" });
			this->cmbPais->Location = System::Drawing::Point(251, 73);
			this->cmbPais->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->cmbPais->Name = L"cmbPais";
			this->cmbPais->Size = System::Drawing::Size(286, 54);
			this->cmbPais->TabIndex = 5;
			this->cmbPais->SelectedIndexChanged += gcnew System::EventHandler(this, &MyMenu::comboBox1_SelectedIndexChanged);
			// 
			// cmbCiudad
			// 
			this->cmbCiudad->Enabled = false;
			this->cmbCiudad->Font = (gcnew System::Drawing::Font(L"MV Boli", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbCiudad->FormattingEnabled = true;
			this->cmbCiudad->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"AREQUIPA", L"LIMA", L"TRUJILLO", L"BRASILIA",
					L"FORTALEZA", L"MANAOS", L"BERLIN", L"HAMBURGO", L"MUNICH", L"LYON", L"MONTPELLIER", L"PARIS"
			});
			this->cmbCiudad->Location = System::Drawing::Point(251, 160);
			this->cmbCiudad->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->cmbCiudad->Name = L"cmbCiudad";
			this->cmbCiudad->Size = System::Drawing::Size(286, 54);
			this->cmbCiudad->TabIndex = 6;
			this->cmbCiudad->SelectedIndexChanged += gcnew System::EventHandler(this, &MyMenu::cmbCiudad_SelectedIndexChanged);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyMenu::timer1_Tick);
			// 
			// MyMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 1018);
			this->Controls->Add(this->cmbCiudad);
			this->Controls->Add(this->cmbPais);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->Name = L"MyMenu";
			this->Text = L"MyMenu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		cmbCiudad->Enabled = true;
		if (cmbPais->SelectedItem->ToString() == "PERU") {
			fondo = gcnew Bitmap("paises/peru.jpg");
			cmbCiudad->Items->Clear();
			cmbCiudad->Items->Add("AREQUIPA");
			cmbCiudad->Items->Add("LIMA");
			cmbCiudad->Items->Add("TRUJILLO");

		}
		else if (cmbPais->SelectedItem->ToString() == "BRASIL") {
			fondo = gcnew Bitmap("paises/brasil.jpg");
			cmbCiudad->Items->Clear();
			cmbCiudad->Items->Add("BRASILIA");
			cmbCiudad->Items->Add("FORTALEZA");
			cmbCiudad->Items->Add("MANAOS");
		}
		else if (cmbPais->SelectedItem->ToString() == "ALEMANIA") {
			fondo = gcnew Bitmap("paises/alemania.jpg");
			cmbCiudad->Items->Clear();
			cmbCiudad->Items->Add("BERLIN");
			cmbCiudad->Items->Add("HAMBURGO");
			cmbCiudad->Items->Add("MUNICH");
		}
		else if (cmbPais->SelectedItem->ToString() == "FRANCIA") {
			fondo = gcnew Bitmap("paises/francia.jpg");
			cmbCiudad->Items->Clear();
			cmbCiudad->Items->Add("LYON");
			cmbCiudad->Items->Add("MONTPELLIER");
			cmbCiudad->Items->Add("PARIS");
		}

	}
private: System::Void cmbCiudad_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			this->button1->Visible = true;
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox1->Checked) {
				checkBox2->Checked = false;
				}
}

private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox2->Checked) {
				checkBox1->Checked = false;
			}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (checkBox1->Checked == false && checkBox2->Checked == false) {
			MessageBox::Show("SELECCIONA UN TIPO DE DATO");
			}

		else if (checkBox1->Checked == true || checkBox2->Checked == true) {

			CalculoClima^ calculoClima= gcnew CalculoClima();

			calculoClima->ShowDialog();
	}
			
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ g = this->CreateGraphics();
	BufferedGraphicsContext^ space = BufferedGraphicsManager::Current;
	BufferedGraphics^ buffer = space->Allocate(g, this->ClientRectangle);
	int ancho = buffer->Graphics->VisibleClipBounds.Width;
	int alto = buffer->Graphics->VisibleClipBounds.Height;
	buffer->Graphics->DrawImage(fondo, 0, 0, ancho, alto);

	buffer->Render(g);
	delete buffer, space, g;
}
};
}
