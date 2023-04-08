#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ Adunare;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ Inmultire;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ Scadere;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ Impartire;

	private: System::Windows::Forms::Button^ button17;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Adunare = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->Inmultire = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->Scadere = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->Impartire = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(21, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(332, 100);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 132);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(102, 132);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 43);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(183, 132);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 43);
			this->button4->TabIndex = 1;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// Adunare
			// 
			this->Adunare->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Adunare->Location = System::Drawing::Point(275, 132);
			this->Adunare->Name = L"Adunare";
			this->Adunare->Size = System::Drawing::Size(78, 43);
			this->Adunare->TabIndex = 1;
			this->Adunare->Text = L"+";
			this->Adunare->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(21, 198);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(78, 44);
			this->button3->TabIndex = 1;
			this->button3->Text = L"4";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(102, 198);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 44);
			this->button5->TabIndex = 1;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(183, 198);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 44);
			this->button7->TabIndex = 1;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// Inmultire
			// 
			this->Inmultire->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Inmultire->Location = System::Drawing::Point(275, 198);
			this->Inmultire->Name = L"Inmultire";
			this->Inmultire->Size = System::Drawing::Size(75, 44);
			this->Inmultire->TabIndex = 1;
			this->Inmultire->Text = L"x";
			this->Inmultire->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(21, 261);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(78, 43);
			this->button9->TabIndex = 1;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(183, 261);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 43);
			this->button10->TabIndex = 1;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(105, 261);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(72, 43);
			this->button11->TabIndex = 1;
			this->button11->Text = L"8";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// Scadere
			// 
			this->Scadere->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Scadere->Location = System::Drawing::Point(278, 261);
			this->Scadere->Name = L"Scadere";
			this->Scadere->Size = System::Drawing::Size(75, 43);
			this->Scadere->TabIndex = 1;
			this->Scadere->Text = L"-";
			this->Scadere->UseVisualStyleBackColor = false;
			this->Scadere->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(21, 320);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(78, 41);
			this->button13->TabIndex = 1;
			this->button13->Text = L"0";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(102, 320);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 41);
			this->button14->TabIndex = 1;
			this->button14->Text = L".";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(183, 320);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 41);
			this->button15->TabIndex = 1;
			this->button15->Text = L"*";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// Impartire
			// 
			this->Impartire->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Impartire->Location = System::Drawing::Point(275, 320);
			this->Impartire->Name = L"Impartire";
			this->Impartire->Size = System::Drawing::Size(75, 41);
			this->Impartire->TabIndex = 1;
			this->Impartire->Text = L"/";
			this->Impartire->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(24, 377);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(326, 40);
			this->button17->TabIndex = 2;
			this->button17->Text = L"CLEAR";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(381, 429);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->Impartire);
			this->Controls->Add(this->Scadere);
			this->Controls->Add(this->Inmultire);
			this->Controls->Add(this->Adunare);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
private: double fisrtNum = 0;
private: double secondNum = 0;
private: String^ operation = "";
	   private: System::Void button_egal_Click(System::Object^ sender, System::EventArgs^ e) {
		   if (afisaj->Text != "") {
			   secondNum = Double::Parse(afisaj->Text);

			   if (operation == "+") {
				   afisaj->Text = (firstNum + secondNum).ToString();
			   }
			   else if (operation == "-") {
				   afisaj->Text = (firstNum - secondNum).ToString();
			   }
			   else if (operation == "*") {
				   afisaj->Text = (firstNum * SecondNum).ToString();
			   }
			   else if (operation == "/") {
				   if (secondNum != 0) {
					   afisajText = (firstNum / secondNum).ToString();
				   }
				   else {
					   afisaj->Text = "Error:Cannot divide by zero";
				   }
			   }
		   }
	   }
			  private:System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
				  if (afisaj->Text != "")
				  {
					  firstNum = Double::Parse(afisaj->Text);
					  afisaj->Text = "";
					  operation = "+";
					  afisaj->Text = "";
				  }
			  }
					 '' }

			  }