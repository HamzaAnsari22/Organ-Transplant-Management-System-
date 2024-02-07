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
	/// Summary for MyForm11
	/// </summary>
	public ref class MyForm11 : public System::Windows::Forms::Form
	{
	public:
		Form^ f;
		MyForm11(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm11(Form^ f1)
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
		~MyForm11()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;


	public: System::Windows::Forms::Label^  label7;
	private:
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
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm11::typeid));
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
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
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(745, 258);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(147, 22);
			this->textBox4->TabIndex = 74;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(745, 217);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(147, 22);
			this->textBox3->TabIndex = 73;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(746, 177);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(157, 26);
			this->label7->TabIndex = 70;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(564, 177);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 26);
			this->label6->TabIndex = 69;
			this->label6->Text = L"ID:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(564, 328);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 26);
			this->label5->TabIndex = 68;
			this->label5->Text = L"Location:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(564, 292);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 26);
			this->label4->TabIndex = 67;
			this->label4->Text = L"Blood Group:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(564, 254);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 26);
			this->label3->TabIndex = 66;
			this->label3->Text = L"Organ Donated:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(564, 213);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 26);
			this->label2->TabIndex = 65;
			this->label2->Text = L"Name:";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gray;
			this->button3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(764, 412);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 43);
			this->button3->TabIndex = 64;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm11::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(754, 39);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 43);
			this->button2->TabIndex = 63;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm11::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(413, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 22);
			this->textBox1->TabIndex = 62;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(264, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 26);
			this->label1->TabIndex = 61;
			this->label1->Text = L"Enter Name:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(608, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 43);
			this->button1->TabIndex = 60;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm11::button1_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"O", L"O+", L"O-", L"A", L"A-", L"A+", L"B", L"B+",
					L"B-", L"AB"
			});
			this->comboBox2->Location = System::Drawing::Point(745, 295);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(147, 24);
			this->comboBox2->TabIndex = 78;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"karachi", L"lahore", L"sukkur", L"hyderabad",
					L"islamabad"
			});
			this->comboBox1->Location = System::Drawing::Point(745, 331);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(147, 24);
			this->comboBox1->TabIndex = 77;
			// 
			// MyForm11
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(927, 481);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
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
			this->Name = L"MyForm11";
			this->Text = L"Update Donor";
			this->Load += gcnew System::EventHandler(this, &MyForm11::MyForm11_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool c;

		  public:System::Boolean search(std::string ID)
		  {

			  PatientDonor myTree;
			  donor* p = myTree.search(ID);
			  if (p)
			  {
				  MessageBox::Show("Donor Found!!!");
				  label7->Text = "" + p->id;
				  System::String^ str2 = gcnew System::String(p->name.c_str());
				  System::String^ str3 = gcnew System::String(p->organ.c_str());
				  System::String^ str4 = gcnew System::String(p->blood_type.c_str());
				  System::String^ str5 = gcnew System::String(p->location.c_str());
				  textBox3->Text = str2;
				  textBox4->Text = str3;
				  comboBox2->Text = str4;
				  comboBox1->Text = str5;
				  return true;
			  }
			  else
			  {
				  MessageBox::Show("Donor Not Found!!!");
				  return false;
			  }
		  }

	private: System::Void MyForm11_Load(System::Object^  sender, System::EventArgs^  e) {
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
	msclr::interop::marshal_context context;
	std::string iD = context.marshal_as<std::string>(textBox1->Text);
	std::string name = context.marshal_as<std::string>(textBox3->Text);
	std::string organ1 = context.marshal_as<std::string>(textBox4->Text);
	std::string btype = context.marshal_as<std::string>(comboBox2->Text);
	std::string loc = context.marshal_as<std::string>(comboBox1->Text);
	std::transform(loc.begin(), loc.end(), loc.begin(), ::tolower);
	std::transform(organ1.begin(), organ1.end(), organ1.begin(), ::tolower);
	std::transform(btype.begin(), btype.end(), btype.begin(), ::toupper);
	if (c)
	{
		if (name == "" || organ1 == "" || btype == "" || loc == "" )
		{

			MessageBox::Show("Please Enter All Fields.");
			this->Show();

		}
		else {
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

			if (i != 0 && j != 0)
			{
				PatientDonor myTree;
				donor *t = myTree.updateDonors(iD);
				t->name = name;
				t->organ = organ1;
				t->blood_type = btype;
				t->location = loc;
				MessageBox::Show("Donor Record Updated Successfully");
				myTree.updatedeleted();
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
};
}
