#include "MyForm.h"
#include "Functions.h"
#include <math.h>
#include <stack>
#include <string>
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    ScientificCalculator::MyForm form;
    Application::Run(% form);
}

inline System::Void ScientificCalculator::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    btn_equal->Focus();
}

inline void ScientificCalculator::MyForm::button0_Click(System::Object^ sender, System::EventArgs^ e) {
    /* if (this->equal_button_clicked) {
         this->equal_button_clicked = false;
         this->first_num = 0;
         this->second_num = 0;
         this->result = 0;
         this->OldOutputLabel->Text=" ";
         this->NewOutputLabel->Text = " ";
     }*/
    this->num = 0;
    btn_num_clicked(this->num);
    btn_equal->Focus();

}

inline void ScientificCalculator::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
    this->num = 1;
    btn_num_clicked(this->num);
    btn_equal->Focus();

}

inline void ScientificCalculator::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {
    this->num = 2;
    btn_num_clicked(this->num);
    btn_equal->Focus();

}

inline void ScientificCalculator::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {
    this->num = 3;
    btn_num_clicked(this->num);
    btn_equal->Focus();

}

inline void ScientificCalculator::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e) {
    this->num = 4;
    btn_num_clicked(this->num);
    btn_equal->Focus();

}

inline void ScientificCalculator::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e) {
    this->num = 5;
    btn_num_clicked(this->num);
    btn_equal->Focus();

}

inline void ScientificCalculator::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e) {
    this->num = 6;
    btn_num_clicked(this->num);
    btn_equal->Focus();

}

inline void ScientificCalculator::MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e) {
    this->num = 7;
    btn_num_clicked(this->num);
    btn_equal->Focus();

}

inline void ScientificCalculator::MyForm::button8_Click(System::Object^ sender, System::EventArgs^ e) {
    this->num = 8;
    btn_num_clicked(this->num);
    btn_equal->Focus();

}

inline void ScientificCalculator::MyForm::button9_Click(System::Object^ sender, System::EventArgs^ e) {
    this->num = 9;
    btn_num_clicked(this->num);
    btn_equal->Focus();

}

inline void ScientificCalculator::MyForm::btn_num_clicked(int num) {
    if (this->NewOutputLabel->Text->Length == 22) {
        return;
    }
    if (this->NewOutputLabel->Text == "0" && num == 0) {
        return;
    }
    else {
        if (this->NewOutputLabel->Text == "0" || this->NewOutputLabel->Text == "NaN") {
            this->NewOutputLabel->Text = num.ToString();
        }
        else {
            this->NewOutputLabel->Text = this->NewOutputLabel->Text + num.ToString();
        }
    }
    this->operationPerformed = false;
}

inline void ScientificCalculator::MyForm::btn_point_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->NewOutputLabel->Text->IndexOf('.') == -1 && this->NewOutputLabel->Text != "NaN") {
        this->NewOutputLabel->Text = this->NewOutputLabel->Text + ".";
    }
}

inline void ScientificCalculator::MyForm::btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
    if (!this->brackets) {
        if (!this->equal_button_clicked) {
            btn_equal_Click(sender, e);
            math_action('+');
        }
        else {
            math_action('+');
        }
    }
    else{
        this->NewOutputLabel->Text += "+";
    }
}

inline void ScientificCalculator::MyForm::btn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
    if (!this->equal_button_clicked) {
        btn_equal_Click(sender, e);
        math_action('-');
    }
    else {
        math_action('-');
    }
    if (this->brackets) {
        this->NewOutputLabel->Text += "-";
    }
}

inline void ScientificCalculator::MyForm::btn_mul_Click(System::Object^ sender, System::EventArgs^ e) {
    if (!this->equal_button_clicked) {
        btn_equal_Click(sender, e);
        math_action('*');
    }
    else {
        math_action('*');
    }
    if (this->brackets) {
        this->NewOutputLabel->Text += "*";
    }
}

inline void ScientificCalculator::MyForm::btn_divide_Click(System::Object^ sender, System::EventArgs^ e) {
    if (!this->equal_button_clicked) {
        btn_equal_Click(sender, e);
        math_action('/');
    }
    else {
        math_action('/');
    }
    if (this->brackets) {
        this->NewOutputLabel->Text += "/";
    }
}

inline void ScientificCalculator::MyForm::math_action(char action) {
    this->first_num = Convert::ToDouble(this->NewOutputLabel->Text);
    this->user_action = action;
    this->OldOutputLabel->Text = this->NewOutputLabel->Text;
    this->NewOutputLabel->Text = "0";
    this->operationPerformed = false;
    this->equal_button_clicked = false;
}

inline System::Void ScientificCalculator::MyForm::btn_brack1_Click(System::Object^ sender, System::EventArgs^ e) {
    this->brackets = true;
    this->num_of_brackets++;
    this->NewOutputLabel->Text == "0" ? this->NewOutputLabel->Text = "(" : this->NewOutputLabel->Text[this->NewOutputLabel->Text->Length - 1] == ')' || Char::IsDigit(this->NewOutputLabel->Text[this->NewOutputLabel->Text->Length - 1]) ? this->NewOutputLabel->Text += "*(" : this->NewOutputLabel->Text += "(";
}

inline System::Void ScientificCalculator::MyForm::btn_brack2_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->num_of_brackets == 0) {
        return;
    }
    else {
        this->num_of_brackets--;

        if (this->NewOutputLabel->Text->Length > 0 && Char::IsDigit(this->NewOutputLabel->Text[this->NewOutputLabel->Text->Length - 1])) {
            this->NewOutputLabel->Text += ")";
        }
        else {
            this->NewOutputLabel->Text[this->NewOutputLabel->Text->Length - 1] == ')' ? this->NewOutputLabel->Text += ")" : this->NewOutputLabel->Text += "0)";
        }
    }
}

inline void ScientificCalculator::MyForm::btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
    if (this->brackets) {

        std::string expression = msclr::interop::marshal_as<std::string>(this->NewOutputLabel->Text);

        if (expression.find('(') != std::string::npos && expression.find(')') != std::string::npos) {
            double result = calculateInsideBrackets(expression);
            this->NewOutputLabel->Text = result.ToString();
        }


        bool allAlnum = true;
        this->OldOutputLabel->Text = this->NewOutputLabel->Text;
        for each (wchar_t c in this->NewOutputLabel->Text) {
            if (!isalnum(c)) {
                allAlnum = false;
                break;
            }
        }
        if (allAlnum) {
            this->brackets = false;
        }
        return;
    }
    if (this->user_action != ' ') {
        this->second_num = Convert::ToDouble(this->NewOutputLabel->Text);
        switch (this->user_action) {
        case '+':
            this->result = first_num + second_num;
            break;
        case '-':
            this->result = first_num - second_num;
            break;
        case '*':
            this->result = first_num * second_num;
            break;
        case '/':
            if (second_num == 0) {
                MessageBox::Show("Cannot divide by zero");
                return;
            }
            this->result = first_num / second_num;
            break;
        case '%':
            this->result = fmod(first_num, second_num);
            break;
        case '^':
            this->result = pow(first_num, second_num);
            break;
        default:
            return;
        }
        this->OldOutputLabel->Text = second_num.ToString();
        this->NewOutputLabel->Text = this->result.ToString();
        this->operationPerformed = true;
        this->user_action_new = this->user_action;
        this->user_action = ' ';
        this->scientific_mode = false;
        this->equal_button_clicked = true;
    }
    else if (this->user_action == ' ' && this->scientific_mode == false) {
        switch (this->user_action_new) {
        case '+':
            this->result += second_num;
            break;
        case '-':
            this->result -= second_num;
            break;
        case '*':
            this->result *= second_num;
            break;
        case '/':
            if (second_num == 0) {
                MessageBox::Show("Cannot divide by zero");
                return;
            }
            this->result /= second_num;
            break;
        default:
            return;
        }
        this->OldOutputLabel->Text = this->second_num.ToString();
        this->NewOutputLabel->Text = this->result.ToString();
        this->operationPerformed = true;
        this->equal_button_clicked = true;
    }
    if (!this->equal_button_clicked) {
        switch (this->user_action) {
        case '+':
            this->result += first_num;
            break;
        case '-':
            this->result -= second_num;
            break;
        case '*':
            this->result *= second_num;
            break;
        case '/':
            if (second_num == 0) {
                MessageBox::Show("Cannot divide by zero");
                return;
            }
            this->result /= second_num;
            break;
        default:
            return;
        }
        this->OldOutputLabel->Text = this->first_num.ToString();
        this->NewOutputLabel->Text = this->result.ToString();
        this->operationPerformed = true;
        this->equal_button_clicked = false;
    }
    else if (this->user_action == ' ' && this->scientific_mode) {
        this->equal_button_clicked = true;
        return;
    }
}


inline void ScientificCalculator::MyForm::btn_del_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ currentText = this->NewOutputLabel->Text;
    if (currentText->Length > 0) {
        currentText = currentText->Substring(0, currentText->Length - 1);
    }
    if (currentText->Length == 0) {
        currentText = "0";
    }
    this->NewOutputLabel->Text = currentText;
    this->btn_equal->Focus();
    this->operationPerformed = false;
}

inline void ScientificCalculator::MyForm::btn_Clear_Click(System::Object^ sender, System::EventArgs^ e) {
    this->NewOutputLabel->Text = "0";
    this->OldOutputLabel->Text = "";
    this->operationPerformed = false;
    this->first_num = 0;
    this->second_num = 0;
}

inline System::Void ScientificCalculator::MyForm::btn_exp_Click(System::Object^ sender, System::EventArgs^ e) {
    this->result = Convert::ToDouble(this->NewOutputLabel->Text);

    this->NewOutputLabel->Text = this->result.ToString();
    btn_equal->Focus();
    this->scientific_mode = true;
}

inline System::Void ScientificCalculator::MyForm::btn_factorial_Click(System::Object^ sender, System::EventArgs^ e) {
    this->scientific_mode = true;
    this->first_num = Convert::ToDouble(this->NewOutputLabel->Text);
    this->second_num = 0;
    if (this->first_num < 0) {
        this->NewOutputLabel->Text = "Invalid action";
    }
    else {
        this->result = factorial(this->first_num);
    }
    this->OldOutputLabel->Text = "fact(" + this->NewOutputLabel->Text + ")";
    this->NewOutputLabel->Text = this->result.ToString();
    return;
}

inline System::Void ScientificCalculator::MyForm::btn_mod_Click(System::Object^ sender, System::EventArgs^ e) {
    math_action('%');
    btn_equal->Focus();
    this->scientific_mode = true;
}

inline System::Void ScientificCalculator::MyForm::btn_inverse_Click(System::Object^ sender, System::EventArgs^ e) {
    this->result = 0 - Convert::ToDouble(this->NewOutputLabel->Text);
    this->NewOutputLabel->Text = this->result.ToString();
    btn_equal->Focus();
    this->scientific_mode = true;
}

inline System::Void ScientificCalculator::MyForm::btn_xrev_Click(System::Object^ sender, System::EventArgs^ e) {
    this->result = 1 / Convert::ToDouble(this->NewOutputLabel->Text);
    this->NewOutputLabel->Text = this->result.ToString();
    btn_equal->Focus();
    this->scientific_mode = true;
}

inline System::Void ScientificCalculator::MyForm::btn_xabs_Click(System::Object^ sender, System::EventArgs^ e) {
    this->result = fabs(Convert::ToDouble(this->NewOutputLabel->Text));
    this->NewOutputLabel->Text = this->result.ToString();
    btn_equal->Focus();
    this->scientific_mode = true;
}

inline System::Void ScientificCalculator::MyForm::btn_ln_Click(System::Object^ sender, System::EventArgs^ e) {
    this->result = log(Convert::ToDouble(this->NewOutputLabel->Text));
    this->NewOutputLabel->Text = this->result.ToString();
    btn_equal->Focus();
    this->scientific_mode = true;
}

inline System::Void ScientificCalculator::MyForm::btn_log_Click(System::Object^ sender, System::EventArgs^ e) {
    this->result = log10(Convert::ToDouble(this->NewOutputLabel->Text));
    this->NewOutputLabel->Text = this->result.ToString();
    btn_equal->Focus();
    this->scientific_mode = true;
}

inline System::Void ScientificCalculator::MyForm::btn_10x_Click(System::Object^ sender, System::EventArgs^ e) {
    this->result = pow(10, Convert::ToDouble(this->NewOutputLabel->Text));
    this->NewOutputLabel->Text = this->result.ToString();
    btn_equal->Focus();
    this->scientific_mode = true;
}

inline System::Void ScientificCalculator::MyForm::btn_xy_Click(System::Object^ sender, System::EventArgs^ e) {
    math_action('^');
    btn_equal->Focus();
}

inline System::Void ScientificCalculator::MyForm::btn_sqrt_Click(System::Object^ sender, System::EventArgs^ e) {
    this->result = sqrt(Convert::ToDouble(this->NewOutputLabel->Text));
    this->NewOutputLabel->Text = this->result.ToString();
    btn_equal->Focus();
    this->scientific_mode = true;
}

inline System::Void ScientificCalculator::MyForm::btn_xsquare_Click(System::Object^ sender, System::EventArgs^ e) {
    this->result = pow(Convert::ToDouble(this->NewOutputLabel->Text), 2);
    this->NewOutputLabel->Text = this->result.ToString();
    btn_equal->Focus();
    this->scientific_mode = true;
}

inline System::Void ScientificCalculator::MyForm::btn_pi_Click(System::Object^ sender, System::EventArgs^ e) {
    double pi = 3.141592653589793;
    this->NewOutputLabel->Text = pi.ToString();
}

inline System::Void ScientificCalculator::MyForm::btn_e_Click(System::Object^ sender, System::EventArgs^ e) {
    double E = 2.718281828459045;
    this->NewOutputLabel->Text = E.ToString();
}

inline void ScientificCalculator::MyForm::MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
    if (e->KeyCode == Keys::Enter) {
        btn_equal_Click(sender, e);
    }
    else if (e->KeyCode == Keys::Back) {
        btn_del_Click(sender, e);
    }
}

inline void ScientificCalculator::MyForm::MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
    switch (e->KeyChar) {
    case '0':
        button0_Click(sender, e);
        break;
    case '1':
        button1_Click(sender, e);
        break;
    case '2':
        button2_Click(sender, e);
        break;
    case '3':
        button3_Click(sender, e);
        break;
    case '4':
        button4_Click(sender, e);
        break;
    case '5':
        button5_Click(sender, e);
        break;
    case '6':
        button6_Click(sender, e);
        break;
    case '7':
        button7_Click(sender, e);
        break;
    case '8':
        button8_Click(sender, e);
        break;
    case '9':
        button9_Click(sender, e);
        break;
    case '+':
        btn_plus_Click(sender, e);
        break;
    case '-':
        btn_minus_Click(sender, e);
        break;
    case '*':
        btn_mul_Click(sender, e);
        break;
    case '/':
        btn_divide_Click(sender, e);
        break;
    case '%':
        btn_mod_Click(sender, e);
        break;
    case '^':
        btn_xy_Click(sender, e);
        break;
    case '.':
        btn_point_Click(sender, e);
        break;
    case '!':
        btn_factorial_Click(sender, e);
        break;
    case '(':
        btn_brack1_Click(sender, e);
        break;
    case ')':
        btn_brack2_Click(sender, e);
        break;
    default:
        break;
    }
}
