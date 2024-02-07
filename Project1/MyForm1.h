#pragma once
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"
#include "MyForm7.h"
#include "MyForm8.h"
#include "MyForm9.h"
#include "MyForm10.h"
#include "MyForm11.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		Form^ k;	
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm1(Form^ k1)
		{
			k = k1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(513, 55);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add Patient";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(672, 55);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(154, 32);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Add Donor";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gray;
			this->button3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(513, 103);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 33);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Delete Patient";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gray;
			this->button4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(672, 103);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(154, 33);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Delete Donor";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gray;
			this->button5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(513, 151);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(153, 33);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Count Patient";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Gray;
			this->button6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(672, 151);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(154, 33);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Count Donor";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Gray;
			this->button7->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button7->Location = System::Drawing::Point(513, 199);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(153, 35);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Print Patient";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Gray;
			this->button8->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button8->Location = System::Drawing::Point(672, 199);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(154, 35);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Print Donor";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Gray;
			this->button9->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.5F, System::Drawing::FontStyle::Bold));
			this->button9->Location = System::Drawing::Point(513, 250);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(153, 33);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Update Patient";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Gray;
			this->button10->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.5F, System::Drawing::FontStyle::Bold));
			this->button10->Location = System::Drawing::Point(672, 250);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(154, 33);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Update Donor";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm1::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Gray;
			this->button11->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button11->Location = System::Drawing::Point(614, 312);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(111, 40);
			this->button11->TabIndex = 10;
			this->button11->Text = L"Logout";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm1::button11_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(838, 455);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->Text = L"Menu";
			this->ResumeLayout(false);

		}
#pragma endregion
			
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		PatientDonor p;
		this->Hide();
		MyForm2^ f1 = gcnew MyForm2(this);
		f1->label7->Text = ""+p.gettailid(1);
		f1->ShowDialog();
	
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	PatientDonor p;
	this->Hide();
	MyForm3^ f1 = gcnew MyForm3(this);
	f1->label5->Text = "" + p.gettailid(0);
	f1->ShowDialog();
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {	
	this->Hide();	
	k->Show();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm4^ f = gcnew MyForm4(this);
	this->Hide();
	f->ShowDialog();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm5^ f = gcnew MyForm5(this);
	this->Hide();
	f->ShowDialog();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm6^ f = gcnew MyForm6(this);
	this->Hide();
	f->ShowDialog();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm7^ f = gcnew MyForm7(this);
	this->Hide();
	f->ShowDialog();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm8^ f = gcnew MyForm8(this);
	this->Hide();
	f->ShowDialog();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm10^ f = gcnew MyForm10(this);
	this->Hide();
	f->ShowDialog();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm9^ f = gcnew MyForm9(this);
	this->Hide();
	f->ShowDialog();
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm11^ f = gcnew MyForm11(this);
	this->Hide();
	f->ShowDialog();
}
};
}
