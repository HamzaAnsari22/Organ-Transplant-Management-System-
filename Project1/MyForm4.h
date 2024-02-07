#pragma once
#include<string>
#include "Patient_Donor_Database.h"
#include <msclr\marshal_cppstd.h>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		Form^ f;
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm4(Form^ f1)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::Label^  label11;
	private:
	public: System::Windows::Forms::Label^  label10;
	public: System::Windows::Forms::Label^  label9;
	public: System::Windows::Forms::Label^  label8;
	public: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	public:
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	public: System::Windows::Forms::Label^  label12;
	private:
	public: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	public:
	private: System::Windows::Forms::Label^  label15;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(562, 35);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 43);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(218, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter Name:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm4::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(380, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 22);
			this->textBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(708, 35);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 43);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm4::button2_Click);
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(677, 284);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(157, 26);
			this->label11->TabIndex = 29;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(677, 248);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(157, 26);
			this->label10->TabIndex = 28;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(677, 210);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(157, 26);
			this->label9->TabIndex = 27;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(677, 169);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(157, 26);
			this->label8->TabIndex = 26;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(677, 133);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(157, 26);
			this->label7->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(504, 133);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 26);
			this->label6->TabIndex = 24;
			this->label6->Text = L"ID:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(504, 284);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 26);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Location:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(504, 248);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 26);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Blood Group:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(504, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 26);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Organ Donated:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(504, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 26);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Name:";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gray;
			this->button3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(706, 408);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 43);
			this->button3->TabIndex = 19;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm4::button3_Click);
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(677, 360);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(157, 26);
			this->label12->TabIndex = 33;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(677, 324);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(157, 26);
			this->label13->TabIndex = 32;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(504, 360);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(105, 26);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Time Left:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(504, 324);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(133, 26);
			this->label15->TabIndex = 30;
			this->label15->Text = L"Survive Rate:";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(848, 462);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm4";
			this->Text = L"Delete Patient";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool c = false;
	public:System::Void deletep(std::string ID)
	{
		PatientDonor myTree;
		myTree.deletePatient(ID);
	}
			  public:System::Boolean search(std::string ID)
			  {

				  PatientDonor myTree;
				  patient* p = myTree.search1(ID);
				  if (p)
				  {

					  MessageBox::Show("Patient Found!!!");
					  label7->Text = "" + p->id;
					  System::String^ str2 = gcnew System::String(p->name.c_str());
					  System::String^ str3 = gcnew System::String(p->organ.c_str());
					  System::String^ str4 = gcnew System::String(p->blood_type.c_str());
					  System::String^ str5 = gcnew System::String(p->location.c_str());
					  System::String^ str6 = gcnew System::String(p->survivability.c_str());
					  System::String^ str7 = gcnew System::String(p->time_left.c_str());
					  label8->Text = str2;
					  label9->Text = str3;
					  label10->Text = str4;
					  label11->Text = str5;
					  label12->Text = str7;
					  label13->Text = str6;
					  return true;

				  }
				  else
				  {
					  MessageBox::Show("Patient Not Found!!!");
					  return false;
				  }


			  }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		f->Show();

	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	msclr::interop::marshal_context context;
	std::string ID = context.marshal_as<std::string>(textBox1->Text);
	if (ID == "")
	{
		MessageBox::Show("Please Enter ID");
	}
	else
	{
		c = search(ID);
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	PatientDonor pp;
	msclr::interop::marshal_context context;
	std::string iD = context.marshal_as<std::string>(textBox1->Text);
	if (c)
	{

		deletep(iD);
		MessageBox::Show("Patient Deleted Successfully");
		pp.updatedeletep();
		this->Hide();
		f->Show();
	}
	else
	{
		if (iD == "")
		{
			MessageBox::Show("Please Enter ID");
		}
	}
}
};
}
