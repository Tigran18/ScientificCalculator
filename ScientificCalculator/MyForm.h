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
		MyForm(void) {
			InitializeComponent();
			this->KeyPreview = true; // Ensure form receives key events first
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
	private: System::Windows::Forms::Button^ btn_sin;
	private: System::Windows::Forms::Button^ btn_cos;
	private: System::Windows::Forms::Button^ btn_tg;
	private: System::Windows::Forms::Button^ btn_ctg;

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
			this->btn_sin = (gcnew System::Windows::Forms::Button());
			this->btn_cos = (gcnew System::Windows::Forms::Button());
			this->btn_tg = (gcnew System::Windows::Forms::Button());
			this->btn_ctg = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// NewOutputLabel
			// 
			resources->ApplyResources(this->NewOutputLabel, L"NewOutputLabel");
			this->NewOutputLabel->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->NewOutputLabel->Name = L"NewOutputLabel";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			resources->ApplyResources(this->button4, L"button4");
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonShadow;
			resources->ApplyResources(this->button5, L"button5");
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonShadow;
			resources->ApplyResources(this->button6, L"button6");
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonShadow;
			resources->ApplyResources(this->button7, L"button7");
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonShadow;
			resources->ApplyResources(this->button8, L"button8");
			this->button8->Name = L"button8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonShadow;
			resources->ApplyResources(this->button9, L"button9");
			this->button9->Name = L"button9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::SystemColors::ButtonShadow;
			resources->ApplyResources(this->button0, L"button0");
			this->button0->Name = L"button0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// btn_point
			// 
			this->btn_point->BackColor = System::Drawing::SystemColors::ButtonShadow;
			resources->ApplyResources(this->btn_point, L"btn_point");
			this->btn_point->Name = L"btn_point";
			this->btn_point->UseVisualStyleBackColor = false;
			this->btn_point->Click += gcnew System::EventHandler(this, &MyForm::btn_point_Click);
			// 
			// btn_equal
			// 
			this->btn_equal->BackColor = System::Drawing::SystemColors::ActiveCaption;
			resources->ApplyResources(this->btn_equal, L"btn_equal");
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->UseVisualStyleBackColor = false;
			this->btn_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
			// 
			// btn_plus
			// 
			this->btn_plus->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_plus, L"btn_plus");
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->UseVisualStyleBackColor = false;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_minus, L"btn_minus");
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			// btn_mul
			// 
			this->btn_mul->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_mul, L"btn_mul");
			this->btn_mul->Name = L"btn_mul";
			this->btn_mul->UseVisualStyleBackColor = false;
			this->btn_mul->Click += gcnew System::EventHandler(this, &MyForm::btn_mul_Click);
			// 
			// btn_divide
			// 
			this->btn_divide->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_divide, L"btn_divide");
			this->btn_divide->Name = L"btn_divide";
			this->btn_divide->UseVisualStyleBackColor = false;
			this->btn_divide->Click += gcnew System::EventHandler(this, &MyForm::btn_divide_Click);
			// 
			// btn_inverse
			// 
			this->btn_inverse->BackColor = System::Drawing::SystemColors::ButtonShadow;
			resources->ApplyResources(this->btn_inverse, L"btn_inverse");
			this->btn_inverse->Name = L"btn_inverse";
			this->btn_inverse->UseVisualStyleBackColor = false;
			this->btn_inverse->Click += gcnew System::EventHandler(this, &MyForm::btn_inverse_Click);
			// 
			// btn_factorial
			// 
			this->btn_factorial->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_factorial, L"btn_factorial");
			this->btn_factorial->Name = L"btn_factorial";
			this->btn_factorial->UseVisualStyleBackColor = false;
			this->btn_factorial->Click += gcnew System::EventHandler(this, &MyForm::btn_factorial_Click);
			// 
			// btn_brack1
			// 
			this->btn_brack1->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_brack1, L"btn_brack1");
			this->btn_brack1->Name = L"btn_brack1";
			this->btn_brack1->UseVisualStyleBackColor = false;
			this->btn_brack1->Click += gcnew System::EventHandler(this, &MyForm::btn_brack1_Click);
			// 
			// btn_brack2
			// 
			this->btn_brack2->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_brack2, L"btn_brack2");
			this->btn_brack2->Name = L"btn_brack2";
			this->btn_brack2->UseVisualStyleBackColor = false;
			this->btn_brack2->Click += gcnew System::EventHandler(this, &MyForm::btn_brack2_Click);
			// 
			// btn_ln
			// 
			this->btn_ln->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_ln, L"btn_ln");
			this->btn_ln->Name = L"btn_ln";
			this->btn_ln->UseVisualStyleBackColor = false;
			this->btn_ln->Click += gcnew System::EventHandler(this, &MyForm::btn_ln_Click);
			// 
			// btn_log
			// 
			this->btn_log->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_log, L"btn_log");
			this->btn_log->Name = L"btn_log";
			this->btn_log->UseVisualStyleBackColor = false;
			this->btn_log->Click += gcnew System::EventHandler(this, &MyForm::btn_log_Click);
			// 
			// btn_10x
			// 
			this->btn_10x->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_10x, L"btn_10x");
			this->btn_10x->Name = L"btn_10x";
			this->btn_10x->UseVisualStyleBackColor = false;
			this->btn_10x->Click += gcnew System::EventHandler(this, &MyForm::btn_10x_Click);
			// 
			// btn_xy
			// 
			this->btn_xy->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_xy, L"btn_xy");
			this->btn_xy->Name = L"btn_xy";
			this->btn_xy->UseVisualStyleBackColor = false;
			this->btn_xy->Click += gcnew System::EventHandler(this, &MyForm::btn_xy_Click);
			// 
			// btn_sqrt
			// 
			this->btn_sqrt->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_sqrt, L"btn_sqrt");
			this->btn_sqrt->Name = L"btn_sqrt";
			this->btn_sqrt->UseVisualStyleBackColor = false;
			this->btn_sqrt->Click += gcnew System::EventHandler(this, &MyForm::btn_sqrt_Click);
			// 
			// btn_2nd
			// 
			this->btn_2nd->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_2nd, L"btn_2nd");
			this->btn_2nd->Name = L"btn_2nd";
			this->btn_2nd->UseVisualStyleBackColor = false;
			this->btn_2nd->Click += gcnew System::EventHandler(this, &MyForm::btn_2nd_Click);
			// 
			// btn_xsquare
			// 
			this->btn_xsquare->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_xsquare, L"btn_xsquare");
			this->btn_xsquare->Name = L"btn_xsquare";
			this->btn_xsquare->UseVisualStyleBackColor = false;
			this->btn_xsquare->Click += gcnew System::EventHandler(this, &MyForm::btn_xsquare_Click);
			// 
			// btn_xrev
			// 
			this->btn_xrev->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_xrev, L"btn_xrev");
			this->btn_xrev->Name = L"btn_xrev";
			this->btn_xrev->UseVisualStyleBackColor = false;
			this->btn_xrev->Click += gcnew System::EventHandler(this, &MyForm::btn_xrev_Click);
			// 
			// btn_del
			// 
			this->btn_del->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_del, L"btn_del");
			this->btn_del->Name = L"btn_del";
			this->btn_del->UseVisualStyleBackColor = false;
			this->btn_del->Click += gcnew System::EventHandler(this, &MyForm::btn_del_Click);
			// 
			// btn_mod
			// 
			this->btn_mod->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_mod, L"btn_mod");
			this->btn_mod->Name = L"btn_mod";
			this->btn_mod->UseVisualStyleBackColor = false;
			this->btn_mod->Click += gcnew System::EventHandler(this, &MyForm::btn_mod_Click);
			// 
			// btn_exp
			// 
			this->btn_exp->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_exp, L"btn_exp");
			this->btn_exp->Name = L"btn_exp";
			this->btn_exp->UseVisualStyleBackColor = false;
			this->btn_exp->Click += gcnew System::EventHandler(this, &MyForm::btn_exp_Click);
			// 
			// btn_xabs
			// 
			this->btn_xabs->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_xabs, L"btn_xabs");
			this->btn_xabs->Name = L"btn_xabs";
			this->btn_xabs->UseVisualStyleBackColor = false;
			this->btn_xabs->Click += gcnew System::EventHandler(this, &MyForm::btn_xabs_Click);
			// 
			// btn_Clear
			// 
			this->btn_Clear->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_Clear, L"btn_Clear");
			this->btn_Clear->Name = L"btn_Clear";
			this->btn_Clear->UseVisualStyleBackColor = false;
			this->btn_Clear->Click += gcnew System::EventHandler(this, &MyForm::btn_Clear_Click);
			// 
			// btn_e
			// 
			this->btn_e->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_e, L"btn_e");
			this->btn_e->Name = L"btn_e";
			this->btn_e->UseVisualStyleBackColor = false;
			this->btn_e->Click += gcnew System::EventHandler(this, &MyForm::btn_e_Click);
			// 
			// btn_pi
			// 
			this->btn_pi->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_pi, L"btn_pi");
			this->btn_pi->Name = L"btn_pi";
			this->btn_pi->UseVisualStyleBackColor = false;
			this->btn_pi->Click += gcnew System::EventHandler(this, &MyForm::btn_pi_Click);
			// 
			// OldOutputLabel
			// 
			resources->ApplyResources(this->OldOutputLabel, L"OldOutputLabel");
			this->OldOutputLabel->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->OldOutputLabel->Name = L"OldOutputLabel";
			// 
			// btn_sin
			// 
			this->btn_sin->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_sin, L"btn_sin");
			this->btn_sin->Name = L"btn_sin";
			this->btn_sin->UseVisualStyleBackColor = false;
			this->btn_sin->Click += gcnew System::EventHandler(this, &MyForm::btn_sin_Click);
			// 
			// btn_cos
			// 
			this->btn_cos->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_cos, L"btn_cos");
			this->btn_cos->Name = L"btn_cos";
			this->btn_cos->UseVisualStyleBackColor = false;
			this->btn_cos->Click += gcnew System::EventHandler(this, &MyForm::btn_cos_Click);
			// 
			// btn_tg
			// 
			this->btn_tg->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_tg, L"btn_tg");
			this->btn_tg->Name = L"btn_tg";
			this->btn_tg->UseVisualStyleBackColor = false;
			this->btn_tg->Click += gcnew System::EventHandler(this, &MyForm::btn_tg_Click);
			// 
			// btn_ctg
			// 
			this->btn_ctg->BackColor = System::Drawing::SystemColors::GrayText;
			resources->ApplyResources(this->btn_ctg, L"btn_ctg");
			this->btn_ctg->Name = L"btn_ctg";
			this->btn_ctg->UseVisualStyleBackColor = false;
			this->btn_ctg->Click += gcnew System::EventHandler(this, &MyForm::btn_ctg_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Controls->Add(this->btn_ctg);
			this->Controls->Add(this->btn_tg);
			this->Controls->Add(this->btn_cos);
			this->Controls->Add(this->btn_sin);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->TopMost = true;
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
		bool second_mode = false;
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
		System::Void btn_2nd_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_sin_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_cos_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_tg_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btn_ctg_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
