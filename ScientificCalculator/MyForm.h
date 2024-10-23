 #pragma once

namespace ScientificCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ScientificCalculator
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
	private: System::Windows::Forms::Label^ NewOutputLabel;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button0;

	private: System::Windows::Forms::Button^ btn_point;
	private: System::Windows::Forms::Button^ btn_equal;
	private: System::Windows::Forms::Button^ btn_plus;
	private: System::Windows::Forms::Button^ btn_minus;
	private: System::Windows::Forms::Button^ btn_mul;
	private: System::Windows::Forms::Button^ btn_divide;
	private: System::Windows::Forms::Button^ btn_inverse;
	private: System::Windows::Forms::Button^ btn_factorial;
	private: System::Windows::Forms::Button^ btn_brack1;
	private: System::Windows::Forms::Button^ btn_brack2;
	private: System::Windows::Forms::Button^ btn_ln;
	private: System::Windows::Forms::Button^ btn_log;
	private: System::Windows::Forms::Button^ btn_10x;
	private: System::Windows::Forms::Button^ btn_xy;
	private: System::Windows::Forms::Button^ btn_sqrt;
	private: System::Windows::Forms::Button^ btn_2nd;

	private: System::Windows::Forms::Button^ btn_xsquare;
	private: System::Windows::Forms::Button^ btn_xrev;
	private: System::Windows::Forms::Button^ btn_del;

	private: System::Windows::Forms::Button^ btn_mod;

	private: System::Windows::Forms::Button^ btn_exp;

	private: System::Windows::Forms::Button^ btn_xabs;
	private: System::Windows::Forms::Button^ btn_Clear;

	private: System::Windows::Forms::Button^ btn_e;

	private: System::Windows::Forms::Button^ btn_pi;

	private: System::Windows::Forms::Label^ OldOutputLabel;



	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->NewOutputLabel = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->btn_point = (gcnew System::Windows::Forms::Button());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn_mul = (gcnew System::Windows::Forms::Button());
			this->btn_divide = (gcnew System::Windows::Forms::Button());
			this->btn_inverse = (gcnew System::Windows::Forms::Button());
			this->btn_factorial = (gcnew System::Windows::Forms::Button());
			this->btn_brack1 = (gcnew System::Windows::Forms::Button());
			this->btn_brack2 = (gcnew System::Windows::Forms::Button());
			this->btn_ln = (gcnew System::Windows::Forms::Button());
			this->btn_log = (gcnew System::Windows::Forms::Button());
			this->btn_10x = (gcnew System::Windows::Forms::Button());
			this->btn_xy = (gcnew System::Windows::Forms::Button());
			this->btn_sqrt = (gcnew System::Windows::Forms::Button());
			this->btn_2nd = (gcnew System::Windows::Forms::Button());
			this->btn_xsquare = (gcnew System::Windows::Forms::Button());
			this->btn_xrev = (gcnew System::Windows::Forms::Button());
			this->btn_del = (gcnew System::Windows::Forms::Button());
			this->btn_mod = (gcnew System::Windows::Forms::Button());
			this->btn_exp = (gcnew System::Windows::Forms::Button());
			this->btn_xabs = (gcnew System::Windows::Forms::Button());
			this->btn_Clear = (gcnew System::Windows::Forms::Button());
			this->btn_e = (gcnew System::Windows::Forms::Button());
			this->btn_pi = (gcnew System::Windows::Forms::Button());
			this->OldOutputLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// NewOutputLabel
			// 
			this->NewOutputLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NewOutputLabel->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->NewOutputLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewOutputLabel->Location = System::Drawing::Point(12, 48);
			this->NewOutputLabel->Name = L"NewOutputLabel";
			this->NewOutputLabel->Size = System::Drawing::Size(376, 50);
			this->NewOutputLabel->TabIndex = 35;
			this->NewOutputLabel->Text = L"0";
			this->NewOutputLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(85, 557);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(163, 557);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(241, 557);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(72, 40);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(85, 511);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 40);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(163, 511);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(72, 40);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(241, 511);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(72, 40);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(85, 465);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(72, 40);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(163, 465);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(72, 40);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(241, 465);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(72, 40);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->Location = System::Drawing::Point(163, 603);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(72, 40);
			this->button0->TabIndex = 0;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// btn_point
			// 
			this->btn_point->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->btn_point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_point->Location = System::Drawing::Point(241, 603);
			this->btn_point->Name = L"btn_point";
			this->btn_point->Size = System::Drawing::Size(72, 40);
			this->btn_point->TabIndex = 10;
			this->btn_point->Text = L".";
			this->btn_point->UseVisualStyleBackColor = false;
			this->btn_point->Click += gcnew System::EventHandler(this, &MyForm::btn_point_Click);
			// 
			// btn_equal
			// 
			this->btn_equal->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btn_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_equal->Location = System::Drawing::Point(319, 603);
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->Size = System::Drawing::Size(72, 40);
			this->btn_equal->TabIndex = 34;
			this->btn_equal->Text = L"=";
			this->btn_equal->UseVisualStyleBackColor = false;
			this->btn_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_plus->Location = System::Drawing::Point(319, 557);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(72, 40);
			this->btn_plus->TabIndex = 31;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = false;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_minus->Location = System::Drawing::Point(319, 511);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(72, 40);
			this->btn_minus->TabIndex = 29;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			// btn_mul
			// 
			this->btn_mul->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_mul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_mul->Location = System::Drawing::Point(319, 465);
			this->btn_mul->Name = L"btn_mul";
			this->btn_mul->Size = System::Drawing::Size(72, 40);
			this->btn_mul->TabIndex = 27;
			this->btn_mul->Text = L"*";
			this->btn_mul->UseVisualStyleBackColor = false;
			this->btn_mul->Click += gcnew System::EventHandler(this, &MyForm::btn_mul_Click);
			// 
			// btn_divide
			// 
			this->btn_divide->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_divide->Location = System::Drawing::Point(319, 419);
			this->btn_divide->Name = L"btn_divide";
			this->btn_divide->Size = System::Drawing::Size(72, 40);
			this->btn_divide->TabIndex = 25;
			this->btn_divide->Text = L"/";
			this->btn_divide->UseVisualStyleBackColor = false;
			this->btn_divide->Click += gcnew System::EventHandler(this, &MyForm::btn_divide_Click);
			// 
			// btn_inverse
			// 
			this->btn_inverse->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->btn_inverse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_inverse->Location = System::Drawing::Point(85, 603);
			this->btn_inverse->Name = L"btn_inverse";
			this->btn_inverse->Size = System::Drawing::Size(72, 40);
			this->btn_inverse->TabIndex = 33;
			this->btn_inverse->Text = L"+/-";
			this->btn_inverse->UseVisualStyleBackColor = false;
			this->btn_inverse->Click += gcnew System::EventHandler(this, &MyForm::btn_inverse_Click);
			// 
			// btn_factorial
			// 
			this->btn_factorial->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_factorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_factorial->Location = System::Drawing::Point(241, 419);
			this->btn_factorial->Name = L"btn_factorial";
			this->btn_factorial->Size = System::Drawing::Size(72, 40);
			this->btn_factorial->TabIndex = 24;
			this->btn_factorial->Text = L"n!";
			this->btn_factorial->UseVisualStyleBackColor = false;
			this->btn_factorial->Click += gcnew System::EventHandler(this, &MyForm::btn_factorial_Click);
			// 
			// btn_brack1
			// 
			this->btn_brack1->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_brack1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_brack1->Location = System::Drawing::Point(85, 419);
			this->btn_brack1->Name = L"btn_brack1";
			this->btn_brack1->Size = System::Drawing::Size(72, 40);
			this->btn_brack1->TabIndex = 22;
			this->btn_brack1->Text = L"(";
			this->btn_brack1->UseVisualStyleBackColor = false;
			this->btn_brack1->Click += gcnew System::EventHandler(this, &MyForm::btn_brack1_Click);
			// 
			// btn_brack2
			// 
			this->btn_brack2->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_brack2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_brack2->Location = System::Drawing::Point(163, 419);
			this->btn_brack2->Name = L"btn_brack2";
			this->btn_brack2->Size = System::Drawing::Size(72, 40);
			this->btn_brack2->TabIndex = 23;
			this->btn_brack2->Text = L")";
			this->btn_brack2->UseVisualStyleBackColor = false;
			this->btn_brack2->Click += gcnew System::EventHandler(this, &MyForm::btn_brack2_Click);
			// 
			// btn_ln
			// 
			this->btn_ln->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_ln->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_ln->Location = System::Drawing::Point(7, 603);
			this->btn_ln->Name = L"btn_ln";
			this->btn_ln->Size = System::Drawing::Size(72, 40);
			this->btn_ln->TabIndex = 32;
			this->btn_ln->Text = L"ln";
			this->btn_ln->UseVisualStyleBackColor = false;
			this->btn_ln->Click += gcnew System::EventHandler(this, &MyForm::btn_ln_Click);
			// 
			// btn_log
			// 
			this->btn_log->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_log->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_log->Location = System::Drawing::Point(7, 557);
			this->btn_log->Name = L"btn_log";
			this->btn_log->Size = System::Drawing::Size(72, 40);
			this->btn_log->TabIndex = 30;
			this->btn_log->Text = L"log";
			this->btn_log->UseVisualStyleBackColor = false;
			this->btn_log->Click += gcnew System::EventHandler(this, &MyForm::btn_log_Click);
			// 
			// btn_10x
			// 
			this->btn_10x->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_10x->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_10x->Location = System::Drawing::Point(7, 511);
			this->btn_10x->Name = L"btn_10x";
			this->btn_10x->Size = System::Drawing::Size(72, 40);
			this->btn_10x->TabIndex = 28;
			this->btn_10x->Text = L"10^x";
			this->btn_10x->UseVisualStyleBackColor = false;
			this->btn_10x->Click += gcnew System::EventHandler(this, &MyForm::btn_10x_Click);
			// 
			// btn_xy
			// 
			this->btn_xy->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_xy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_xy->Location = System::Drawing::Point(7, 465);
			this->btn_xy->Name = L"btn_xy";
			this->btn_xy->Size = System::Drawing::Size(72, 40);
			this->btn_xy->TabIndex = 26;
			this->btn_xy->Text = L"x^y";
			this->btn_xy->UseVisualStyleBackColor = false;
			this->btn_xy->Click += gcnew System::EventHandler(this, &MyForm::btn_xy_Click);
			// 
			// btn_sqrt
			// 
			this->btn_sqrt->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_sqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_sqrt->Location = System::Drawing::Point(7, 419);
			this->btn_sqrt->Name = L"btn_sqrt";
			this->btn_sqrt->Size = System::Drawing::Size(72, 40);
			this->btn_sqrt->TabIndex = 21;
			this->btn_sqrt->Text = L"sqrtx";
			this->btn_sqrt->UseVisualStyleBackColor = false;
			this->btn_sqrt->Click += gcnew System::EventHandler(this, &MyForm::btn_sqrt_Click);
			// 
			// btn_2nd
			// 
			this->btn_2nd->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_2nd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_2nd->Location = System::Drawing::Point(7, 327);
			this->btn_2nd->Name = L"btn_2nd";
			this->btn_2nd->Size = System::Drawing::Size(72, 40);
			this->btn_2nd->TabIndex = 11;
			this->btn_2nd->Text = L"2nd";
			this->btn_2nd->UseVisualStyleBackColor = false;
			// 
			// btn_xsquare
			// 
			this->btn_xsquare->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_xsquare->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_xsquare->Location = System::Drawing::Point(7, 373);
			this->btn_xsquare->Name = L"btn_xsquare";
			this->btn_xsquare->Size = System::Drawing::Size(72, 40);
			this->btn_xsquare->TabIndex = 16;
			this->btn_xsquare->Text = L"x²";
			this->btn_xsquare->UseVisualStyleBackColor = false;
			this->btn_xsquare->Click += gcnew System::EventHandler(this, &MyForm::btn_xsquare_Click);
			// 
			// btn_xrev
			// 
			this->btn_xrev->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_xrev->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_xrev->Location = System::Drawing::Point(85, 373);
			this->btn_xrev->Name = L"btn_xrev";
			this->btn_xrev->Size = System::Drawing::Size(72, 40);
			this->btn_xrev->TabIndex = 17;
			this->btn_xrev->Text = L"1/x";
			this->btn_xrev->UseVisualStyleBackColor = false;
			this->btn_xrev->Click += gcnew System::EventHandler(this, &MyForm::btn_xrev_Click);
			// 
			// btn_del
			// 
			this->btn_del->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_del->Location = System::Drawing::Point(319, 327);
			this->btn_del->Name = L"btn_del";
			this->btn_del->Size = System::Drawing::Size(72, 40);
			this->btn_del->TabIndex = 15;
			this->btn_del->Text = L"<-";
			this->btn_del->UseVisualStyleBackColor = false;
			this->btn_del->Click += gcnew System::EventHandler(this, &MyForm::btn_del_Click);
			// 
			// btn_mod
			// 
			this->btn_mod->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_mod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_mod->Location = System::Drawing::Point(319, 373);
			this->btn_mod->Name = L"btn_mod";
			this->btn_mod->Size = System::Drawing::Size(72, 40);
			this->btn_mod->TabIndex = 20;
			this->btn_mod->Text = L"mod";
			this->btn_mod->UseVisualStyleBackColor = false;
			this->btn_mod->Click += gcnew System::EventHandler(this, &MyForm::btn_mod_Click);
			// 
			// btn_exp
			// 
			this->btn_exp->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_exp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_exp->Location = System::Drawing::Point(241, 373);
			this->btn_exp->Name = L"btn_exp";
			this->btn_exp->Size = System::Drawing::Size(72, 40);
			this->btn_exp->TabIndex = 19;
			this->btn_exp->Text = L"exp";
			this->btn_exp->UseVisualStyleBackColor = false;
			this->btn_exp->Click += gcnew System::EventHandler(this, &MyForm::btn_exp_Click);
			// 
			// btn_xabs
			// 
			this->btn_xabs->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_xabs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_xabs->Location = System::Drawing::Point(163, 373);
			this->btn_xabs->Name = L"btn_xabs";
			this->btn_xabs->Size = System::Drawing::Size(72, 40);
			this->btn_xabs->TabIndex = 18;
			this->btn_xabs->Text = L"|x|";
			this->btn_xabs->UseVisualStyleBackColor = false;
			this->btn_xabs->Click += gcnew System::EventHandler(this, &MyForm::btn_xabs_Click);
			// 
			// btn_Clear
			// 
			this->btn_Clear->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Clear->Location = System::Drawing::Point(241, 327);
			this->btn_Clear->Name = L"btn_Clear";
			this->btn_Clear->Size = System::Drawing::Size(72, 40);
			this->btn_Clear->TabIndex = 14;
			this->btn_Clear->Text = L"C";
			this->btn_Clear->UseVisualStyleBackColor = false;
			this->btn_Clear->Click += gcnew System::EventHandler(this, &MyForm::btn_Clear_Click);
			// 
			// btn_e
			// 
			this->btn_e->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_e->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_e->Location = System::Drawing::Point(163, 327);
			this->btn_e->Name = L"btn_e";
			this->btn_e->Size = System::Drawing::Size(72, 40);
			this->btn_e->TabIndex = 13;
			this->btn_e->Text = L"e";
			this->btn_e->UseVisualStyleBackColor = false;
			this->btn_e->Click += gcnew System::EventHandler(this, &MyForm::btn_e_Click);
			// 
			// btn_pi
			// 
			this->btn_pi->BackColor = System::Drawing::SystemColors::GrayText;
			this->btn_pi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_pi->Location = System::Drawing::Point(85, 327);
			this->btn_pi->Name = L"btn_pi";
			this->btn_pi->Size = System::Drawing::Size(72, 40);
			this->btn_pi->TabIndex = 12;
			this->btn_pi->Text = L"pi";
			this->btn_pi->UseVisualStyleBackColor = false;
			this->btn_pi->Click += gcnew System::EventHandler(this, &MyForm::btn_pi_Click);
			// 
			// OldOutputLabel
			// 
			this->OldOutputLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->OldOutputLabel->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->OldOutputLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OldOutputLabel->Location = System::Drawing::Point(12, 9);
			this->OldOutputLabel->Name = L"OldOutputLabel";
			this->OldOutputLabel->Size = System::Drawing::Size(376, 50);
			this->OldOutputLabel->TabIndex = 36;
			this->OldOutputLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(398, 649);
			this->Controls->Add(this->OldOutputLabel);
			this->Controls->Add(this->btn_2nd);
			this->Controls->Add(this->btn_xsquare);
			this->Controls->Add(this->btn_xrev);
			this->Controls->Add(this->btn_del);
			this->Controls->Add(this->btn_mod);
			this->Controls->Add(this->btn_exp);
			this->Controls->Add(this->btn_xabs);
			this->Controls->Add(this->btn_Clear);
			this->Controls->Add(this->btn_e);
			this->Controls->Add(this->btn_pi);
			this->Controls->Add(this->btn_sqrt);
			this->Controls->Add(this->btn_xy);
			this->Controls->Add(this->btn_10x);
			this->Controls->Add(this->btn_log);
			this->Controls->Add(this->btn_ln);
			this->Controls->Add(this->btn_brack2);
			this->Controls->Add(this->btn_brack1);
			this->Controls->Add(this->btn_factorial);
			this->Controls->Add(this->btn_inverse);
			this->Controls->Add(this->btn_divide);
			this->Controls->Add(this->btn_mul);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->btn_point);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->NewOutputLabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(3, 0, 3, 0);
			this->Name = L"MyForm";
			this->Text = L"ScientificCalculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->ResumeLayout(false);

		}
	private:
		int num = 0;
		double first_num = 0, second_num = 0, result;
		bool operationPerformed = false;
		char user_action = ' ';
		char user_action_new = ' ';
		bool scientific_mode = false;
		bool equal_button_clicked = false;
		static int num_of_brackets = 0;
		bool brackets = false;
	private:
		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void button0_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button5_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button8_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button9_Click(System::Object^ sender, System::EventArgs^ e);
		void btn_num_clicked(int num);
		System::Void btn_point_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_del_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void math_action(char action);
		System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_mul_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_divide_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
		System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
		System::Void btn_Clear_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void btn_exp_Click(System::Object^ sender, System::EventArgs^ e);
	
		System::Void btn_factorial_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_mod_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_inverse_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_xrev_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_xabs_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_ln_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_log_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_10x_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_xy_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_sqrt_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_xsquare_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_pi_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_e_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_brack1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_brack2_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
