#pragma once
#include<string>
#include "Patient_Donor_Database.h"
#include <msclr\marshal_cppstd.h>
#include"MyForm12.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		Form^ f;
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm3(Form^ f1)
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
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Label^  label5;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(463, 255);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 26);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Location:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(643, 161);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(179, 22);
			this->textBox2->TabIndex = 20;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(643, 116);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(179, 22);
			this->textBox1->TabIndex = 19;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm3::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(463, 207);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 26);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Blood Type:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(463, 158);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 26);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Organ Donated:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(463, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 26);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Name:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(701, 311);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 48);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(463, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 26);
			this->label4->TabIndex = 26;
			this->label4->Text = L"ID:";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(638, 70);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 26);
			this->label5->TabIndex = 27;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.8F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(557, 311);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 48);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"karachi", L"lahore", L"sukkur", L"hyderabad",
					L"islamabad"
			});
			this->comboBox1->Location = System::Drawing::Point(643, 255);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(179, 24);
			this->comboBox1->TabIndex = 29;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"O", L"O+", L"O-", L"A", L"A-", L"A+", L"B", L"B+",
					L"B-", L"AB"
			});
			this->comboBox2->Location = System::Drawing::Point(643, 207);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(179, 24);
			this->comboBox2->TabIndex = 30;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(856, 473);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm3";
			this->Text = L"Add Donor";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool check = false;
		public:System::Boolean insertd(std::string id,std::string name, std::string organ, std::string btype, std::string loc)
		{

			PatientDonor myTree;
			donor* newDonor = myTree.addDonor1(id,name, organ, btype, loc);
			if (newDonor)
			{
				if (newDonor->id == myTree.getdhead())
				{
					std::string a;
					a = id + "," + name + "," + organ + "," + btype + "," + loc;
					myTree.write(a, "not", "dlist");
				}
				else
				{
					std::string a;
					a = id + "," + name + "," + organ + "," + btype + "," + loc;
					myTree.write(a, "new", "dlist");
				}
				
				myTree.setbest1(myTree.findp(newDonor));
				myTree.setbest(newDonor);
				//myTree.view(myTree.test);
				if (myTree.getbest1())
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
		std::string id = context.marshal_as<std::string>(label5->Text);
		std::string name = context.marshal_as<std::string>(textBox1->Text);
		std::string organ1 = context.marshal_as<std::string>(textBox2->Text);
		std::string btype = context.marshal_as<std::string>(comboBox2->Text);
		std::string loc = context.marshal_as<std::string>(comboBox1->Text);
		std::transform(loc.begin(), loc.end(), loc.begin(), ::tolower);
		std::transform(organ1.begin(), organ1.end(), organ1.begin(), ::tolower);
		std::transform(btype.begin(), btype.end(), btype.begin(), ::toupper);

		if (name==" "||organ1 == "" || btype == "" || loc == "" )
		{
			MessageBox::Show("Please Enter All Fields.");
		}
		else
		{
			bool c = insertd(id,name, organ1, btype, loc);
			if (!c)
			{
				MessageBox::Show("Please Enter Valid Credentials");
				this->Show();
			
			}
			else
			{
				MessageBox::Show("Donor Added Successfully.");
				if (check)
				{
					MessageBox::Show("Found Suitable Patient in Near!!! You Must Operate Now");
					MyForm12^ fe = gcnew MyForm12(f);
					System::String^ bname = gcnew System::String(p.getbest()->name.c_str());
					System::String^ borgan = gcnew System::String(p.getbest()->organ.c_str());
					System::String^ bbtype = gcnew System::String(p.getbest()->blood_type.c_str());
					System::String^ bloc = gcnew System::String(p.getbest()->location.c_str());
					System::String^ bpname = gcnew System::String(p.getbest1()->name.c_str());
					System::String^ bporgan = gcnew System::String(p.getbest1()->organ.c_str());
					System::String^ bpbtype = gcnew System::String(p.getbest1()->blood_type.c_str());
					System::String^ bploc = gcnew System::String(p.getbest1()->location.c_str());
					fe->label15->Text = "" + p.getbest()->id;
					fe->label14->Text = "" + bname;
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
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	f->Show();
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
