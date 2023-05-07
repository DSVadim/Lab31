#pragma once
#include <cmath>
namespace Lab31 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::TextBox^ TxX3;
	private: System::Windows::Forms::TextBox^ TxY3;
	private: System::Windows::Forms::TextBox^ TxX2;
	private: System::Windows::Forms::TextBox^ TxY2;
	private: System::Windows::Forms::TextBox^ TxX1;
	private: System::Windows::Forms::TextBox^ TxY1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->TxX3 = (gcnew System::Windows::Forms::TextBox());
			this->TxY3 = (gcnew System::Windows::Forms::TextBox());
			this->TxX2 = (gcnew System::Windows::Forms::TextBox());
			this->TxY2 = (gcnew System::Windows::Forms::TextBox());
			this->TxX1 = (gcnew System::Windows::Forms::TextBox());
			this->TxY1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(393, 202);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// TxX3
			// 
			this->TxX3->Location = System::Drawing::Point(101, 29);
			this->TxX3->Name = L"TxX3";
			this->TxX3->Size = System::Drawing::Size(31, 20);
			this->TxX3->TabIndex = 1;
			// 
			// TxY3
			// 
			this->TxY3->Location = System::Drawing::Point(138, 29);
			this->TxY3->Name = L"TxY3";
			this->TxY3->Size = System::Drawing::Size(31, 20);
			this->TxY3->TabIndex = 1;
			// 
			// TxX2
			// 
			this->TxX2->Location = System::Drawing::Point(35, 211);
			this->TxX2->Name = L"TxX2";
			this->TxX2->Size = System::Drawing::Size(31, 20);
			this->TxX2->TabIndex = 1;
			// 
			// TxY2
			// 
			this->TxY2->Location = System::Drawing::Point(72, 211);
			this->TxY2->Name = L"TxY2";
			this->TxY2->Size = System::Drawing::Size(31, 20);
			this->TxY2->TabIndex = 1;
			// 
			// TxX1
			// 
			this->TxX1->Location = System::Drawing::Point(319, 186);
			this->TxX1->Name = L"TxX1";
			this->TxX1->Size = System::Drawing::Size(31, 20);
			this->TxX1->TabIndex = 1;
			// 
			// TxY1
			// 
			this->TxY1->Location = System::Drawing::Point(356, 186);
			this->TxY1->Name = L"TxY1";
			this->TxY1->Size = System::Drawing::Size(31, 20);
			this->TxY1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(237, 269);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 42);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Result";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(399, 269);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(399, 297);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(491, 395);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->TxY1);
			this->Controls->Add(this->TxX1);
			this->Controls->Add(this->TxY2);
			this->Controls->Add(this->TxX2);
			this->Controls->Add(this->TxY3);
			this->Controls->Add(this->TxX3);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double x1, x2, x3, y1, y2, y3, cosa, cosb, cosc,Sum;
		x1 = System::Convert::ToDouble(TxX1->Text);
		y1 = System::Convert::ToDouble(TxY1->Text);
		x2 = System::Convert::ToDouble(TxX2->Text);
		y2 = System::Convert::ToDouble(TxY2->Text);
		x3 = System::Convert::ToDouble(TxX3->Text);
		y3 = System::Convert::ToDouble(TxY3->Text);

		cosa = x1 / sqrt(pow(x1, 2) + pow(y1, 2));
		cosb = x2 / sqrt(pow(x2, 2) + pow(y2, 2));
		cosc = x3 / sqrt(pow(x3, 2) + pow(y3, 2));
		Sum = cosa + cosb + cosc;

		double a = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
		double b = std::sqrt(std::pow(x3 - x2, 2) + std::pow(y3 - y2, 2));
		double c = std::sqrt(std::pow(x1 - x3, 2) + std::pow(y1 - y3, 2));
		double mc = 0.5 * std::sqrt(2 * b * b + 2 * c * c - a * a);
		label1->Text = "Сума косинусів: " + System::Convert::ToString(Sum);
		label2->Text = "Медіана mc: " + System::Convert::ToString(mc);



	}
};
}
