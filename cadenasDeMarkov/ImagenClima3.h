#pragma once

namespace cadenasDeMarkov {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ImagenClima3
	/// </summary>
	public ref class ImagenClima3 : public System::Windows::Forms::Form
	{
	private:
		Bitmap^ clima3;
		Random r;
		int a;
	public:
		ImagenClima3(void){
			imagenRandom();
			if (a == 1) { clima3 = gcnew Bitmap("climasCheems/nublado1.jpg"); }
			else if (a == 2) { clima3 = gcnew Bitmap("climasCheems/nublado2.jpg"); }
			else if (a == 3) { clima3 = gcnew Bitmap("climasCheems/nublado3.jpg"); }
			else clima3 = gcnew Bitmap("climasCheems/nublado4.jpg");
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		int imagenRandom() {
			a = r.Next(1, 5);

			return a;
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ImagenClima3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	protected:
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
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &ImagenClima3::timer1_Tick);
			// 
			// ImagenClima3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(4, 6);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 470);
			this->Name = L"ImagenClima3";
			this->Text = L"ImagenClima3";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = this->CreateGraphics();
		BufferedGraphicsContext^ space = BufferedGraphicsManager::Current;
		BufferedGraphics^ buffer = space->Allocate(g, this->ClientRectangle);
		int ancho = buffer->Graphics->VisibleClipBounds.Width;
		int alto = buffer->Graphics->VisibleClipBounds.Height;
		buffer->Graphics->DrawImage(clima3, 0, 0, ancho, alto);
		buffer->Render(g);
		delete buffer, space, g;
	}
	};
}
