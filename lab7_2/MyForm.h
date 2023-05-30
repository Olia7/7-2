#pragma once

namespace lab7_2 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Утворені слова";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 192);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(248, 70);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Шляхом вирізання та склеювання отримати зі слова „lamp” map, cap, map";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 265);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Чабан Ольга";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(16, 45);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(128, 141);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(150, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 62);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Надрукувати утворенні слова";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(291, 290);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ word = "lamp";
		// утворення слова "map"
		String^ word1 = word->Substring(word->IndexOf("m"), 1) + word->Substring(word->IndexOf("a"), 1) + word->Substring(word->IndexOf("p"), 1);
		// утворення слова "cap"
		String^ word2 = "c" + word->Substring(word->IndexOf("a"), 1) + word->Substring(word->IndexOf("p"), 1);
		// утворення слова "lap"
		String^ word3 = word->Substring(0, 2) + word->Substring(word->IndexOf("p"), 1);

		// виведення усіх утворених слів
		textBox2->AppendText(word1 + "\r\n");
		textBox2->AppendText(word2 + "\r\n");
		textBox2->AppendText(word3 + "\r\n");

	}
};
}
