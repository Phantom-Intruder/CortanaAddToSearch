#pragma once
#include <stdlib.h>     /* system, NULL, EXIT_FAILURE */
#include <string>
#include <iostream>
#include <msclr\marshal_cppstd.h>
#include <sstream>

namespace CortanaAddToSearch {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Summary for AddPathInterface
	/// </summary>
	public ref class AddPathInterface : public System::Windows::Forms::Form
	{
	public:
		AddPathInterface(void)
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
		~AddPathInterface()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox5;







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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox1->Location = System::Drawing::Point(53, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(415, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Enter path to file";
			this->textBox1->Click += gcnew System::EventHandler(this, &AddPathInterface::CallNameClicked);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AddPathInterface::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(495, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Browse for file";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddPathInterface::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(274, 168);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 27);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Go !";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox2->Location = System::Drawing::Point(55, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(551, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"Enter website";
			this->textBox2->Click += gcnew System::EventHandler(this, &AddPathInterface::CallNameClicked);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(661, 211);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Add a website";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(521, 25);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 30);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Browse";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AddPathInterface::button4_Click);
			// 
			// textBox5
			// 
			this->textBox5->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox5->Location = System::Drawing::Point(55, 29);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(437, 22);
			this->textBox5->TabIndex = 8;
			this->textBox5->Text = L"Enter path to browser";
			// 
			// textBox4
			// 
			this->textBox4->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox4->Location = System::Drawing::Point(55, 122);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(551, 22);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"What should Cortana call this\? (Put an easily pronouncable name)";
			this->textBox4->Click += gcnew System::EventHandler(this, &AddPathInterface::CallNameClicked);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(661, 211);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Add a file";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &AddPathInterface::tabPage1_Click);
			// 
			// textBox3
			// 
			this->textBox3->ForeColor = System::Drawing::SystemColors::GrayText;
			this->textBox3->Location = System::Drawing::Point(53, 95);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(551, 22);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"What should Cortana call this\? (Put an easily pronouncable name)";
			this->textBox3->Click += gcnew System::EventHandler(this, &AddPathInterface::CallNameClicked);
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &AddPathInterface::textBox3_TextChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(275, 156);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 35);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Go !";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AddPathInterface::button3_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(69, 24);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(669, 240);
			this->tabControl1->TabIndex = 4;
			// 
			// AddPathInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 279);
			this->Controls->Add(this->tabControl1);
			this->Name = L"AddPathInterface";
			this->Text = L"AddPathInterface";
			this->Load += gcnew System::EventHandler(this, &AddPathInterface::AddPathInterface_Load);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((myStream = openFileDialog1->OpenFile()) != nullptr) {
				String^ strfilename = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
				this->textBox1->Text = strfilename;
				myStream->Close();
			}
		}
	}
private: System::Void openFileDialog1_FileOk_1(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void AddPathInterface_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	msclr::interop::marshal_context context;
	std::string standardStringForOutput = context.marshal_as<std::string>(textBox3->Text);
	std::string standardStringForInputLocation = context.marshal_as<std::string>(textBox1->Text);
	std::stringstream commandToRunOnPrompt;
	commandToRunOnPrompt << "echo Set oWS = WScript.CreateObject(\"WScript.Shell\") > CreateShortcut.vbs && echo sLinkFile = \"C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\" << standardStringForOutput << ".lnk" << "\" >> CreateShortcut.vbs & echo Set oLink = oWS.CreateShortcut(sLinkFile) >> CreateShortcut.vbs & echo oLink.TargetPath = \"" << standardStringForInputLocation << "\" >> CreateShortcut.vbs & echo oLink.Save >> CreateShortcut.vbs & cscript CreateShortcut.vbs & del CreateShortcut.vbs & pause";
	const std::string& tmp = commandToRunOnPrompt.str();
	const char* cstr = tmp.c_str();
	system(cstr);
}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void CallNameClicked(System::Object^  sender, System::EventArgs^  e) {

	TextBox^ textBox = (TextBox^)sender;
	textBox->SelectAll();
	textBox->ForeColor = Color::Black;

}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Stream^ myStream;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if ((myStream = openFileDialog1->OpenFile()) != nullptr) {
			String^ strfilename = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
			this->textBox5->Text = strfilename;
			myStream->Close();
		}
	}
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
