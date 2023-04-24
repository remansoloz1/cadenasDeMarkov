#pragma once

namespace cadenasDeMarkov {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ImagenClima4
	/// </summary>
	public ref class ImagenClima4 : public System::Windows::Forms::Form
	{
	private:
		Bitmap^ clima4;
		Random r;
		int a;
	public:
		ImagenClima4(void)
		{
			imagenRandom();
			if (a == 1) { clima4 = gcnew Bitmap("climasCheems/pnublado1.jpg"); }
			else if (a == 2) { clima4 = gcnew Bitmap("climasCheems/pnublado2.jpg"); }
			else if (a == 3) { clima4 = gcnew Bitmap("climasCheems/pnublado3.jpg"); }
			else clima4 = gcnew Bitmap("climasCheems/pnublado4.jpg");
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}
		int imagenRandom() {
			a = r.Next(1, 5);

			return a;
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ImagenClima4()
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
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
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
			this->timer1->Tick += gcnew System::EventHandler(this, &ImagenClima4::timer1_Tick);
			// 
			// ImagenClima4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(4, 6);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 470);
			this->Name = L"ImagenClima4";
			this->Text = L"ImagenClima4";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		Graphics^ g = this->CreateGraphics();
		BufferedGraphicsContext^ space = BufferedGraphicsManager::Current;
		BufferedGraphics^ buffer = space->Allocate(g, this->ClientRectangle);
		int ancho = buffer->Graphics->VisibleClipBounds.Width;
		int alto = buffer->Graphics->VisibleClipBounds.Height;
		buffer->Graphics->DrawImage(clima4, 0, 0, ancho, alto);
		buffer->Render(g);
		delete buffer, space, g;
	}
	};
}
