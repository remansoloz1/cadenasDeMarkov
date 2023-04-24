#pragma once
#include"ImagenClima.h"
#include"ImagenClima2.h"
#include"ImagenClima3.h"
#include"ImagenClima4.h"

#include"ValoresMatriz.h"
#include<ctime>
namespace cadenasDeMarkov {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CalculoClima
	/// </summary>
	public ref class CalculoClima : public System::Windows::Forms::Form
	{
	private:
		Bitmap^ calculoClima;
		ValoresMatriz* matriz;
		int dayWeek;
	private: System::Windows::Forms::Timer^ timer1;
		   int cantidad;
	public:
		CalculoClima(void)
		{
			calculoClima = gcnew Bitmap("wallpapers/calculoClima.jpg");
			matriz = new ValoresMatriz();
			obtenFecha();
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		void obtenFecha() {
			time_t t = time(nullptr);
			tm* now = localtime(&t);
			dayWeek = now->tm_wday;
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CalculoClima()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(105, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(395, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PRONOSTICO DEL CLIMA";
			this->label1->Click += gcnew System::EventHandler(this, &CalculoClima::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MV Boli", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(172, 81);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 46);
			this->label2->TabIndex = 1;
			this->label2->Text = L"DIAS";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(328, 77);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(66, 59);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &CalculoClima::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CalculoClima::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SeaGreen;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(180, 162);
			this->button1->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(205, 48);
			this->button1->TabIndex = 3;
			this->button1->Text = L"CALCULAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CalculoClima::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MV Boli", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 235);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(584, 46);
			this->label3->TabIndex = 4;
			this->label3->Text = L"¿QUÉ DÍA DESEA CONSULTAR\?";
			this->label3->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Chocolate;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(13, 330);
			this->button2->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 48);
			this->button2->TabIndex = 5;
			this->button2->Text = L"MIERCOLES";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &CalculoClima::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(158, 330);
			this->button3->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 48);
			this->button3->TabIndex = 6;
			this->button3->Text = L"dia2";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &CalculoClima::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(304, 330);
			this->button4->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(131, 48);
			this->button4->TabIndex = 7;
			this->button4->Text = L"dia3";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &CalculoClima::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Khaki;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(451, 330);
			this->button5->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(131, 48);
			this->button5->TabIndex = 8;
			this->button5->Text = L"dia4";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &CalculoClima::button5_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &CalculoClima::timer1_Tick);
			// 
			// CalculoClima
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(600, 1018);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
			this->Name = L"CalculoClima";
			this->Text = L"CalculoClima";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion







		void obtenDia() {
			switch (dayWeek) {
			case 0:

				this->button2->Text = L"LUNES";
				this->button3->Text = L"MARTES";
				this->button4->Text = L"MIERCOLES";
				this->button5->Text = L"JUEVES";
				break;
			case 1:
				this->button2->Text = L"MARTES";
				this->button3->Text = L"MIERCOLES";
				this->button4->Text = L"JUEVES";
				this->button5->Text = L"VIERNES";
				break;
			case 2:
				this->button2->Text = L"MIERCOLES";
				this->button3->Text = L"JUEVES";
				this->button4->Text = L"VIERNES";
				this->button5->Text = L"SABADO";
				break;
			case 3:
				this->button2->Text = L"JUEVES";
				this->button3->Text = L"VIERNES";
				this->button4->Text = L"SABADO";
				this->button5->Text = L"DOMINGO";
				break;
			case 4:
				this->button2->Text = L"VIERNES";
				this->button3->Text = L"SABADO";
				this->button4->Text = L"DOMINGO";
				this->button5->Text = L"LUNES";
				break;
			case 5:
				this->button2->Text = L"SABADO";
				this->button3->Text = L"DOMINGO";
				this->button4->Text = L"LUNES";
				this->button5->Text = L"MARTES";
				break;
			case 6:
				this->button2->Text = L"DOMINGO";
				this->button3->Text = L"LUNES";
				this->button4->Text = L"MARTES";
				this->button5->Text = L"MIERCOLES";
				break;
			}
		}

		void clima1() {
			if (matriz->getClima1().ToString() == "10") {
				ImagenClima^ imagenClima = gcnew ImagenClima();
				imagenClima->ShowDialog();
			}
			else if (matriz->getClima1().ToString() == "11") {
				ImagenClima2^ imagenClima = gcnew ImagenClima2();
				imagenClima->ShowDialog();
			}
			else if (matriz->getClima1().ToString() == "12") {
				ImagenClima3^ imagenClima = gcnew ImagenClima3();
				imagenClima->ShowDialog();
			}
			else {
				ImagenClima4^ imagenClima = gcnew ImagenClima4();
				imagenClima->ShowDialog();
			}
		}
		void clima2() {
			if (matriz->getClima2().ToString() == "10") {
				ImagenClima^ imagenClima = gcnew ImagenClima();
				imagenClima->ShowDialog();
			}
			else if (matriz->getClima2().ToString() == "11") {
				ImagenClima2^ imagenClima = gcnew ImagenClima2();
				imagenClima->ShowDialog();
			}
			else if (matriz->getClima2().ToString() == "12") {
				ImagenClima3^ imagenClima = gcnew ImagenClima3();
				imagenClima->ShowDialog();
			}
			else {
				ImagenClima4^ imagenClima = gcnew ImagenClima4();
				imagenClima->ShowDialog();
			}
		}
		void clima3() {
			if (matriz->getClima3().ToString() == "10") {
				ImagenClima^ imagenClima = gcnew ImagenClima();
				imagenClima->ShowDialog();
			}
			else if (matriz->getClima3().ToString() == "11") {
				ImagenClima2^ imagenClima = gcnew ImagenClima2();
				imagenClima->ShowDialog();
			}
			else if (matriz->getClima3().ToString() == "12") {
				ImagenClima3^ imagenClima = gcnew ImagenClima3();
				imagenClima->ShowDialog();
			}
			else {
				ImagenClima4^ imagenClima = gcnew ImagenClima4();
				imagenClima->ShowDialog();
			}
		}
		void clima4() {
			if (matriz->getClima4().ToString() == "10") {
				ImagenClima^ imagenClima = gcnew ImagenClima();
				imagenClima->ShowDialog();
			}
			else if (matriz->getClima4().ToString() == "11") {
				ImagenClima2^ imagenClima = gcnew ImagenClima2();
				imagenClima->ShowDialog();
			}
			else if (matriz->getClima4().ToString() == "12") {
				ImagenClima3^ imagenClima = gcnew ImagenClima3();
				imagenClima->ShowDialog();
			}
			else {
				ImagenClima4^ imagenClima = gcnew ImagenClima4();
				imagenClima->ShowDialog();
			}
		}


	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Int32::TryParse(textBox1->Text, cantidad)) {
			textBox1->ForeColor = Color::Blue;
		}
	}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	if (!Char::IsNumber(e->KeyChar) && e->KeyChar != 8 && e->KeyChar != 13) {
		// Ignora el evento de pulsación de tecla
		e->Handled = true;

	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cantidad >= 30 && cantidad <= 90) {
		//this->label2->Visible = true;
		//this->button1->Visible = true;
		matriz->operacion(cantidad);
		this->button1->Visible = false;
	obtenDia();
	this->textBox1->Enabled = false;
	this->label3->Visible = true;
	this->button2->Visible = true;
	this->button3->Visible = true;
	this->button4->Visible = true;
	this->button5->Visible = true;
	}
	else {
		MessageBox::Show("Ingrese un valor menor a 90 o mayor a 30");
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	clima1();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	clima2();
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	clima3();
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	clima4();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	Graphics^ g = this->CreateGraphics();
	BufferedGraphicsContext^ space = BufferedGraphicsManager::Current;
	BufferedGraphics^ buffer = space->Allocate(g, this->ClientRectangle);
	int ancho = buffer->Graphics->VisibleClipBounds.Width;
	int alto = buffer->Graphics->VisibleClipBounds.Height;
	buffer->Graphics->DrawImage(calculoClima, 0, 0, ancho, alto);
	buffer->Render(g);
	delete buffer, space, g;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
