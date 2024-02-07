#pragma once
#include<string>
#include "Patient_Donor_Database.h"
#include <msclr\marshal_cppstd.h>
#include <algorithm>
#include"MyForm12.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
		
	public:
		Form^ f;	
		MyForm2(void)
		{	
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm2(Form^ f1)
		{
			
			f = f1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::TextBox^  textBox1;
	private:

	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label8;
	public: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	public:
	private:


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(718, 349);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(480, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Name:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm2::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(480, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Organ Needed:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm2::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(480, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 26);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Blood Type:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm2::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(480, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 26);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Survivabilty Rate:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm2::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(480, 257);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 26);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Time Left:";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm2::label5_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(660, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(179, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(660, 113);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(179, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox2_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(660, 212);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(179, 22);
			this->textBox4->TabIndex = 9;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(660, 257);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(179, 22);
			this->textBox5->TabIndex = 10;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox5_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(480, 305);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 26);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Location:";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm2::label6_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(480, 24);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(40, 26);
			this->label8->TabIndex = 14;
			this->label8->Text = L"ID:";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(655, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 26);
			this->label7->TabIndex = 15;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm2::label7_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(572, 349);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 48);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"karachi", L"lahore", L"sukkur", L"hyderabad",
					L"islamabad"
			});
			this->comboBox1->Location = System::Drawing::Point(660, 305);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(179, 24);
			this->comboBox1->TabIndex = 17;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"O", L"O+", L"O-", L"A", L"A-", L"A+", L"B", L"B+",
					L"B-", L"AB"
			});
			this->comboBox2->Location = System::Drawing::Point(660, 166);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(179, 24);
			this->comboBox2->TabIndex = 18;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(882, 435);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm2";
			this->Text = L"Add Patient";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool check=false;
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	public:System::Boolean inserti(std::string id,std::string name, std::string organ, std::string btype, std::string loc, std::string time, std::string rate)
	{	
		PatientDonor myTree;
		patient* newPatient = myTree.addPatient1(id,name,organ, btype,loc, time, rate);
		if (newPatient)
		{
			if (newPatient->id == myTree.getphead())
			{
				std::string a;
				a = id + "," + name + "," + organ + "," + btype + "," + loc + "," + rate + "," + time;
				myTree.write(a, "not", "plist");
			}
			else
			{
				std::string a;
				a = id + "," + name + "," + organ + "," + btype + "," + loc + "," + rate + "," + time;
				myTree.write(a, "new", "plist");
			}
			myTree.setbest(myTree.findd(newPatient));
			myTree.setbest1(newPatient);
			//myTree.view(myTree.test);
			if (myTree.getbest())
				check = true;
			return true;
		}
		else {
			return false;
		}
		return true;
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	PatientDonor p;
	msclr::interop::marshal_context context;
	std::string ID = context.marshal_as<std::string>(label7->Text);
	std::string name = context.marshal_as<std::string>(textBox1->Text);
	std::string organ1 = context.marshal_as<std::string>(textBox2->Text);
	std::string btype = context.marshal_as<std::string>(comboBox2->Text);
	std::string srate = context.marshal_as<std::string>(textBox4->Text);
	std::string tleft = context.marshal_as<std::string>(textBox5->Text);
	std::string loc = context.marshal_as<std::string>(comboBox1->Text);
	std::transform(loc.begin(), loc.end(), loc.begin(), ::tolower);
	std::transform(organ1.begin(), organ1.end(), organ1.begin(), ::tolower);
	std::transform(btype.begin(), btype.end(), btype.begin(), ::toupper);

	if (name== ""||organ1 == "" || btype == "" || loc == "" || tleft== "" || srate == "")
	{
		MessageBox::Show("Please Enter All Fields.");
	}
	else
	{
		bool c=inserti(ID,name,organ1,btype , loc, tleft, srate);
		if (!c)
		{
			MessageBox::Show("Please Enter Valid Credentials");
			this->Show();
		}
		else
		{
			MessageBox::Show("Patient Added Successfully.");
			if (check)
			{
				MessageBox::Show("Found Suitable Donor in Near!!! You Must Operate Now");
				MyForm12^ fe = gcnew MyForm12(f);
				System::String^ bname = gcnew System::String(p.getbest()->name.c_str());
				System::String^ borgan = gcnew System::String(p.getbest()->organ.c_str());
				System::String^ bbtype = gcnew System::String(p.getbest()->blood_type.c_str());
				System::String^ bloc = gcnew System::String(p.getbest()->location.c_str());
				System::String^ bpname = gcnew System::String(p.getbest1()->name.c_str());
				System::String^ bporgan = gcnew System::String(p.getbest1()->organ.c_str());
				System::String^ bpbtype = gcnew System::String(p.getbest1()->blood_type.c_str());
				System::String^ bploc = gcnew System::String(p.getbest1()->location.c_str());
				fe->label15->Text =""+ p.getbest()->id;
				fe->label14->Text =""+ bname;
				fe->label13->Text = "" + borgan;
				fe->label12->Text = "" + bbtype;
				fe->label1->Text = "" + bloc;
				fe->label7->Text = "" + p.getbest1()->id;
				fe->label8->Text = "" + bpname;
				fe->label9->Text = "" + bporgan;
				fe->label10->Text = "" + bpbtype;
				fe->label11->Text = "" + bploc;
				//this->Hide();
				fe->Show();
				check = false;
				this->Hide();
			//	f->Show();
			}
			else {
				this->Hide();
				f->Show();
			}
		}
	}


}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	f->Show();
}
private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
