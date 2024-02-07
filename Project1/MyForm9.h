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
	/// Summary for MyForm9
	/// </summary>
	public ref class MyForm9 : public System::Windows::Forms::Form
	{
	public:
		Form^ f;
		MyForm9(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm9(Form^ f1)
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
		~MyForm9()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^  label14;
	public:
	private: System::Windows::Forms::Label^  label15;

	private:



	public: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	public:
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;


	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;




	public:
	private:
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm9::typeid));
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(543, 330);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(105, 26);
			this->label14->TabIndex = 50;
			this->label14->Text = L"Time Left:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(543, 294);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(133, 26);
			this->label15->TabIndex = 49;
			this->label15->Text = L"Survive Rate:";
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(725, 103);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(157, 26);
			this->label7->TabIndex = 44;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(543, 103);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 26);
			this->label6->TabIndex = 43;
			this->label6->Text = L"ID:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(543, 254);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 26);
			this->label5->TabIndex = 42;
			this->label5->Text = L"Location:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(543, 218);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 26);
			this->label4->TabIndex = 41;
			this->label4->Text = L"Blood Group:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(543, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 26);
			this->label3->TabIndex = 40;
			this->label3->Text = L"Organ Donated:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(543, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 26);
			this->label2->TabIndex = 39;
			this->label2->Text = L"Name:";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gray;
			this->button3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(743, 385);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 43);
			this->button3->TabIndex = 38;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm9::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(733, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 43);
			this->button2->TabIndex = 37;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm9::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(392, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 22);
			this->textBox1->TabIndex = 36;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(243, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 26);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Enter Name:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(587, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 43);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm9::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(724, 143);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(147, 22);
			this->textBox3->TabIndex = 54;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(724, 184);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(147, 22);
			this->textBox4->TabIndex = 55;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(724, 297);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(147, 22);
			this->textBox7->TabIndex = 58;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(724, 334);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(147, 22);
			this->textBox8->TabIndex = 59;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"O", L"O+", L"O-", L"A", L"A-", L"A+", L"B", L"B+",
					L"B-", L"AB"
			});
			this->comboBox2->Location = System::Drawing::Point(724, 221);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(147, 24);
			this->comboBox2->TabIndex = 61;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"karachi", L"lahore", L"sukkur", L"hyderabad",
					L"islamabad"
			});
			this->comboBox1->Location = System::Drawing::Point(724, 257);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(147, 24);
			this->comboBox1->TabIndex = 60;
			// 
			// MyForm9
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(956, 440);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
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
			this->Name = L"MyForm9";
			this->Text = L"Update Patient";
			this->Load += gcnew System::EventHandler(this, &MyForm9::MyForm9_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool c;
	
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
				  textBox3->Text = str2;
				  textBox4->Text = str3;
				  comboBox2->Text = str4;
				  comboBox1->Text = str5;
				  textBox7->Text = str6;
				  textBox8->Text = str7;
				  return true;

			  }
			  else
			  {
				  MessageBox::Show("Patient Not Found!!!");
				  return false;
			  }


		  }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm9_Load(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	f->Show();
}
		 
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	msclr::interop::marshal_context context;
	std::string iD = context.marshal_as<std::string>(textBox1->Text);
	std::string name = context.marshal_as<std::string>(textBox3->Text);
	std::string organ1 = context.marshal_as<std::string>(textBox4->Text);
	std::string btype = context.marshal_as<std::string>(comboBox2->Text);
	std::string loc = context.marshal_as<std::string>(comboBox1->Text);
	std::string srate = context.marshal_as<std::string>(textBox7->Text);
	std::string tleft = context.marshal_as<std::string>(textBox8->Text);
	std::transform(loc.begin(), loc.end(), loc.begin(), ::tolower);
	std::transform(organ1.begin(), organ1.end(), organ1.begin(), ::tolower);
	std::transform(btype.begin(), btype.end(), btype.begin(), ::toupper);
	if (c)
	{
		if (name == "" || organ1 == "" || btype == "" || loc == "" || tleft == "" || srate == "")
		{
			
			MessageBox::Show("Please Enter All Fields.");
			this->Show();
			
		}
		else {
			
			int timeleft = atoi(tleft.c_str());
			int ssrate = atoi(srate.c_str());
			if (!timeleft || !ssrate)
			{
				MessageBox::Show("Please Enter Valid Credntials in Time Left OR Survivability");
				this->Show();
			}

			int i = 1 * ((organ1 == "heart" || organ1 == "lungs" || organ1 == "pancreas" || organ1 == "kidney" || organ1 == "head" || organ1 == "intestines" || organ1 == "liver" || organ1 == "eyes"));
			if (i == 0) {
				MessageBox::Show("Please Enter Valid Credntials in Organ Field");
				this->Show();
			}
			int j = 1 * (btype == "A" || btype == "B" || btype == "O" || btype == "AB" || btype == "A-" || btype == "A+" || btype == "B+" || btype == "B-" || btype == "O-" || btype == "O+");
			if (j == 0) {
				MessageBox::Show("Please Enter Valid Credntials in Blood Type Field");
				this->Show();
			}

			if (timeleft&&ssrate&&i != 0 && j != 0)
			{
				PatientDonor myTree;
				patient *t = myTree.updatePatients(iD);
				t->name = name;
				t->organ = organ1;
				t->blood_type = btype;
				t->location = loc;
				t->time_left = tleft;
				t->survivability = srate;
				MessageBox::Show("Patient Record Updated Successfully");
				myTree.updatedeletep();
				this->Hide();
				f->Show();
			}		
		}
	}
	else
	{
		if (iD == "")
		{
			MessageBox::Show("Please Enter ID");
		}
	}
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
