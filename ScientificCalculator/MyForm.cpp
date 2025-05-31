#include "MyForm.h"
#include "Functions.h"
#include <msclr/marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace msclr::interop;

[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::SetCompatibleTextRenderingDefault(true);
    Application::EnableVisualStyles();
    ScientificCalculator::MyForm form;
    Application::Run(% form);
    return 0;
}

namespace ScientificCalculator {

    System::Void MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
        btn_equal->Focus();
    }

    System::Void MyForm::button0_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ check = this->NewOutputLabel->Text;
        String^ dot = ".";
        if (Convert::ToDouble(this->NewOutputLabel->Text) == 0 && !check->Contains(dot)){
            return;
        }
        this->num = 0;
        btn_num_clicked(this->num);
        btn_equal->Focus();
    }

    System::Void MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
        this->num = 1;
        btn_num_clicked(this->num);
        btn_equal->Focus();
    }

    System::Void MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {
        this->num = 2;
        btn_num_clicked(this->num);
        btn_equal->Focus();
    }

    System::Void MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {
        this->num = 3;
        btn_num_clicked(this->num);
        btn_equal->Focus();
    }

    System::Void MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e) {
        this->num = 4;
        btn_num_clicked(this->num);
        btn_equal->Focus();
    }

    System::Void MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e) {
        this->num = 5;
        btn_num_clicked(this->num);
        btn_equal->Focus();
    }

    System::Void MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e) {
        this->num = 6;
        btn_num_clicked(this->num);
        btn_equal->Focus();
    }

    System::Void MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e) {
        this->num = 7;
        btn_num_clicked(this->num);
        btn_equal->Focus();
    }

    System::Void MyForm::button8_Click(System::Object^ sender, System::EventArgs^ e) {
        this->num = 8;
        btn_num_clicked(this->num);
        btn_equal->Focus();
    }

    System::Void MyForm::button9_Click(System::Object^ sender, System::EventArgs^ e) {
        this->num = 9;
        btn_num_clicked(this->num);
        btn_equal->Focus();
    }

    System::Void MyForm::btn_num_clicked(int num) {
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

    System::Void MyForm::btn_point_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->NewOutputLabel->Text->IndexOf('.') == -1 && this->NewOutputLabel->Text != "NaN") {
            this->NewOutputLabel->Text = this->NewOutputLabel->Text + ".";
        }
    }

    System::Void MyForm::btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->NewOutputLabel->Text->EndsWith("+")) return;
        else if (this->NewOutputLabel->Text->EndsWith("-") ||
            this->NewOutputLabel->Text->EndsWith("*") ||
            this->NewOutputLabel->Text->EndsWith("/")) {
            this->NewOutputLabel->Text = this->NewOutputLabel->Text->Substring(
                0, this->NewOutputLabel->Text->Length - 1) + "+";
            return;
        }
        if (!this->brackets) {
            if (!this->equal_button_clicked) {
                btn_equal_Click(sender, e);
                math_action('+');
            }
            else {
                math_action('+');
            }
        }
        else {
            this->NewOutputLabel->Text += "+";
        }
    }

    System::Void MyForm::btn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->NewOutputLabel->Text->EndsWith("-")) {
            return;
        }
        else if (this->NewOutputLabel->Text->EndsWith("+") ||
            this->NewOutputLabel->Text->EndsWith("*") ||
            this->NewOutputLabel->Text->EndsWith("/")) {
            this->NewOutputLabel->Text = this->NewOutputLabel->Text->Substring(
                0, this->NewOutputLabel->Text->Length - 1) + "-";
            return;
        }
        if (!this->brackets) {
            if (!this->equal_button_clicked) {
                btn_equal_Click(sender, e);
                math_action('-');
            }
            else {
                math_action('-');
            }
        }
        else {
            this->NewOutputLabel->Text += "-";
        }
    }
    System::Void MyForm::btn_mul_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->NewOutputLabel->Text->EndsWith("*")) return;
        else if (this->NewOutputLabel->Text->EndsWith("+") ||
            this->NewOutputLabel->Text->EndsWith("-") ||
            this->NewOutputLabel->Text->EndsWith("/")) {
            this->NewOutputLabel->Text = this->NewOutputLabel->Text->Substring(
                0, this->NewOutputLabel->Text->Length - 1) + "*";
            return;
        }
        if (!this->brackets) {
            if (!this->equal_button_clicked) {
                btn_equal_Click(sender, e);
                math_action('*');
            }
            else {
                math_action('*');
            }
        }
        else {
            this->NewOutputLabel->Text += "*";
        }
    }

    System::Void MyForm::btn_divide_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->NewOutputLabel->Text->EndsWith("/")) return;
        else if (this->NewOutputLabel->Text->EndsWith("+") ||
            this->NewOutputLabel->Text->EndsWith("*") ||
            this->NewOutputLabel->Text->EndsWith("-")) {
            this->NewOutputLabel->Text = this->NewOutputLabel->Text->Substring(
                0, this->NewOutputLabel->Text->Length - 1) + "/";
            return;
        }
        if (!this->brackets) {
            if (!this->equal_button_clicked) {
                btn_equal_Click(sender, e);
                math_action('/');
            }
            else {
                math_action('/');
            }
        }
        else {
            this->NewOutputLabel->Text += "/";
        }
    }

    System::Void MyForm::math_action(char action) {
        this->first_num = Convert::ToDouble(this->NewOutputLabel->Text);
        this->user_action = action;
        this->OldOutputLabel->Text = this->NewOutputLabel->Text + gcnew String(&action, 0, 1);
        this->NewOutputLabel->Text = "0";
        this->operationPerformed = false;
        this->equal_button_clicked = false;
    }

    System::Void MyForm::btn_brack1_Click(System::Object^ sender, System::EventArgs^ e) {
        this->brackets = true;
        this->num_of_brackets++;
        String^ lastChar = this->NewOutputLabel->Text->Length > 0 ?
            this->NewOutputLabel->Text->Substring(this->NewOutputLabel->Text->Length - 1) : "";
        if (this->NewOutputLabel->Text == "0") {
            this->NewOutputLabel->Text = "(";
        }
        else if (Char::IsDigit(lastChar[0]) || lastChar == ")" || lastChar == "e" || lastChar == "i") {
            this->NewOutputLabel->Text += "*(";
        }
        else {
            this->NewOutputLabel->Text += "(";
        }
    }

    System::Void MyForm::btn_brack2_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->num_of_brackets == 0) {
            return;
        }
        this->num_of_brackets--;
        if (this->NewOutputLabel->Text->Length > 0 && Char::IsDigit(this->NewOutputLabel->Text[this->NewOutputLabel->Text->Length - 1])) {
            this->NewOutputLabel->Text += ")";
        }
        else {
            this->NewOutputLabel->Text += this->NewOutputLabel->Text->Length > 0 && this->NewOutputLabel->Text[this->NewOutputLabel->Text->Length - 1] == ')' ? ")" : "0)";
        }
    }

    System::Void MyForm::btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->brackets) {
            if (this->num_of_brackets != 0) {
                MessageBox::Show("Mismatched parentheses");
                return;
            }
            int length = this->NewOutputLabel->Text->Length+this->OldOutputLabel->Text->Length;
            char* text = new char[length + 1];
            char* result = new char[length + 1];
            int i = 0;
            for each (char c in this->OldOutputLabel->Text) {
                text[i++] = c;
            }
            for each(char c in this->NewOutputLabel->Text) {
                text[i++] = c;
            }
            text[length] = '\0';
            this->OldOutputLabel->Text += this->NewOutputLabel->Text;
            try {
                CalculateTheBrackets(text, length, result);
                String^ resultString = gcnew String(result);
                if (resultString == "Error") {
                    this->NewOutputLabel->Text = "Invalid expression";
                }
                else {
                    this->NewOutputLabel->Text = resultString;
                }
            }
            catch (...) {
                this->NewOutputLabel->Text = "Invalid expression";
            }
            this->brackets = false;
            this->num_of_brackets = 0;
            this->first_num = 0;
            this->second_num = 0;
            this->result = 0;
            this->user_action = ' ';
            this->user_action_new = ' ';
            this->operationPerformed = false;
            this->equal_button_clicked = false;
            delete[] text;
            delete[] result;
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
                if (!this->second_mode) {
                    this->result = pow(first_num, second_num);
                }
                else {
                    this->result = pow(first_num, 1.0 / second_num);
                }
                break;
            case 'l':
                this->result = Log(first_num, second_num);
                break;
            default:
                return;
            }
            char equal = '=';
            this->OldOutputLabel->Text += second_num.ToString() + gcnew String(&equal, 0, 1);
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

    System::Void MyForm::btn_del_Click(System::Object^ sender, System::EventArgs^ e) {
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

    System::Void MyForm::btn_Clear_Click(System::Object^ sender, System::EventArgs^ e) {
        this->NewOutputLabel->Text = "0";
        this->OldOutputLabel->Text = "";
        this->operationPerformed = false;
        this->first_num = 0;
        this->second_num = 0;
        this->result = 0;
        this->user_action = ' ';
        this->user_action_new = ' ';
        this->brackets = false;
        this->num_of_brackets = 0;
        this->scientific_mode = false;
        this->second_mode = false;
    }

    System::Void MyForm::btn_exp_Click(System::Object^ sender, System::EventArgs^ e) {
        double value = Convert::ToDouble(this->NewOutputLabel->Text);
        this->NewOutputLabel->Text = value.ToString("E");
        btn_equal->Focus();
        this->scientific_mode = true;
    }

    System::Void MyForm::btn_factorial_Click(System::Object^ sender, System::EventArgs^ e) {
        this->scientific_mode = true;
        this->first_num = Convert::ToDouble(this->NewOutputLabel->Text);
        if (this->first_num < 0 || floor(this->first_num) != this->first_num) {
            this->NewOutputLabel->Text = "Invalid action";
        }
        else {
            this->result = factorial(this->first_num);
            this->OldOutputLabel->Text = "fact(" + this->NewOutputLabel->Text + ")";
            this->NewOutputLabel->Text = this->result.ToString();
        }
        btn_equal->Focus();
    }

    System::Void MyForm::btn_mod_Click(System::Object^ sender, System::EventArgs^ e) {
        math_action('%');
        btn_equal->Focus();
        this->scientific_mode = true;
    }

    System::Void MyForm::btn_inverse_Click(System::Object^ sender, System::EventArgs^ e) {
        this->result = -Convert::ToDouble(this->NewOutputLabel->Text);
        this->NewOutputLabel->Text = this->result.ToString();
        btn_equal->Focus();
        this->scientific_mode = true;
    }

    System::Void MyForm::btn_xrev_Click(System::Object^ sender, System::EventArgs^ e) {
        double value = Convert::ToDouble(this->NewOutputLabel->Text);
        if (value == 0) {
            this->NewOutputLabel->Text = "Invalid action";
        }
        else {
            this->result = 1.0 / value;
            this->NewOutputLabel->Text = this->result.ToString();
        }
        btn_equal->Focus();
        this->scientific_mode = true;
    }

    System::Void MyForm::btn_xabs_Click(System::Object^ sender, System::EventArgs^ e) {
        this->result = fabs(Convert::ToDouble(this->NewOutputLabel->Text));
        this->NewOutputLabel->Text = this->result.ToString();
        btn_equal->Focus();
        this->scientific_mode = true;
    }

    System::Void MyForm::btn_ln_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!this->second_mode) {
            this->NewOutputLabel->Text = "ln(" + this->NewOutputLabel->Text + ")";
        }
        else {
            this->NewOutputLabel->Text = "exp(" + this->NewOutputLabel->Text + ")";
        }
        btn_equal->Focus();
        this->scientific_mode = true;
    }

    System::Void MyForm::btn_log_Click(System::Object^ sender, System::EventArgs^ e) {
        this->scientific_mode = true;
        if (!this->second_mode) {
            this->NewOutputLabel->Text = "log(" + this->NewOutputLabel->Text + ")";
        }
        else {
            math_action('l');
        }
        btn_equal->Focus();
    }

    System::Void MyForm::btn_10x_Click(System::Object^ sender, System::EventArgs^ e) {
        double value = Convert::ToDouble(this->NewOutputLabel->Text);
        if (!this->second_mode) {
            this->result = pow(10, value);
        }
        else {
            this->result = pow(2, value);
        }
        this->NewOutputLabel->Text = this->result.ToString();
        btn_equal->Focus();
        this->scientific_mode = true;
    }

    System::Void MyForm::btn_xy_Click(System::Object^ sender, System::EventArgs^ e) {
        math_action('^');
        btn_equal->Focus();
    }

    System::Void MyForm::btn_sqrt_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!this->second_mode) {
            this->NewOutputLabel->Text = "sqrt(" + this->NewOutputLabel->Text + ")";
        }
        else {
            this->NewOutputLabel->Text = "cbrt(" + this->NewOutputLabel->Text + ")";
        }
        btn_equal->Focus();
        this->scientific_mode = true;
    }

    System::Void MyForm::btn_xsquare_Click(System::Object^ sender, System::EventArgs^ e) {
        double value = Convert::ToDouble(this->NewOutputLabel->Text);
        if (!this->second_mode) {
            this->result = pow(value, 2);
        }
        else {
            this->result = pow(value, 3);
        }
        this->NewOutputLabel->Text = this->result.ToString();
        btn_equal->Focus();
        this->scientific_mode = true;
    }

    System::Void MyForm::btn_sin_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ lastChar = this->NewOutputLabel->Text->Length > 0 ?
            this->NewOutputLabel->Text->Substring(this->NewOutputLabel->Text->Length - 1) : "";
        if (!this->second_mode) {
            if (this->NewOutputLabel->Text == "0") {
                this->NewOutputLabel->Text = "sin(";
            }
            else if (Char::IsDigit(lastChar[0]) || lastChar == ")" || lastChar == "e" || lastChar == "i") {
                this->NewOutputLabel->Text += "*sin(";
            }
            else {
                this->NewOutputLabel->Text += "sin(";
            }
        }
        else {
            if (this->NewOutputLabel->Text == "0") {
                this->NewOutputLabel->Text = "asin(";
            }
            else if (Char::IsDigit(lastChar[0]) || lastChar == ")" || lastChar == "e" || lastChar == "i") {
                this->NewOutputLabel->Text += "*asin(";
            }
            else {
                this->NewOutputLabel->Text += "asin(";
            }
        }
        this->num_of_brackets++;
        this->brackets = true;
        this->scientific_mode = true;
        btn_equal->Focus();
    }

    System::Void MyForm::btn_cos_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ lastChar = this->NewOutputLabel->Text->Length > 0 ?
            this->NewOutputLabel->Text->Substring(this->NewOutputLabel->Text->Length - 1) : "";
        if (!this->second_mode) {
            if (this->NewOutputLabel->Text == "0") {
                this->NewOutputLabel->Text = "cos(";
            }
            else if (Char::IsDigit(lastChar[0]) || lastChar == ")" || lastChar == "e" || lastChar == "i") {
                this->NewOutputLabel->Text += "*cos(";
            }
            else {
                this->NewOutputLabel->Text += "cos(";
            }
        }
        else {
            if (this->NewOutputLabel->Text == "0") {
                this->NewOutputLabel->Text = "acos(";
            }
            else if (Char::IsDigit(lastChar[0]) || lastChar == ")" || lastChar == "e" || lastChar == "i") {
                this->NewOutputLabel->Text += "*acos(";
            }
            else {
                this->NewOutputLabel->Text += "acos(";
            }
        }
        this->num_of_brackets++;
        this->brackets = true;
        this->scientific_mode = true;
        btn_equal->Focus();
    }

    System::Void MyForm::btn_tg_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ lastChar = this->NewOutputLabel->Text->Length > 0 ?
            this->NewOutputLabel->Text->Substring(this->NewOutputLabel->Text->Length - 1) : "";
        if (!this->second_mode) {
            if (this->NewOutputLabel->Text == "0") {
                this->NewOutputLabel->Text = "tan(";
            }
            else if (Char::IsDigit(lastChar[0]) || lastChar == ")" || lastChar == "e" || lastChar == "i") {
                this->NewOutputLabel->Text += "*tan(";
            }
            else {
                this->NewOutputLabel->Text += "tan(";
            }
        }
        else {
            if (this->NewOutputLabel->Text == "0") {
                this->NewOutputLabel->Text = "atan(";
            }
            else if (Char::IsDigit(lastChar[0]) || lastChar == ")" || lastChar == "e" || lastChar == "i") {
                this->NewOutputLabel->Text += "*atan(";
            }
            else {
                this->NewOutputLabel->Text += "atan(";
            }
        }
        this->num_of_brackets++;
        this->brackets = true;
        this->scientific_mode = true;
        btn_equal->Focus();
    }

    System::Void MyForm::btn_ctg_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ lastChar = this->NewOutputLabel->Text->Length > 0 ?
            this->NewOutputLabel->Text->Substring(this->NewOutputLabel->Text->Length - 1) : "";
        if (!this->second_mode) {
            if (this->NewOutputLabel->Text == "0") {
                this->NewOutputLabel->Text = "cot(";
            }
            else if (Char::IsDigit(lastChar[0]) || lastChar == ")" || lastChar == "e" || lastChar == "i") {
                this->NewOutputLabel->Text += "*cot(";
            }
            else {
                this->NewOutputLabel->Text += "cot(";
            }
        }
        else {
            if (this->NewOutputLabel->Text == "0") {
                this->NewOutputLabel->Text = "acot(";
            }
            else if (Char::IsDigit(lastChar[0]) || lastChar == ")" || lastChar == "e" || lastChar == "i") {
                this->NewOutputLabel->Text += "*acot(";
            }
            else {
                this->NewOutputLabel->Text += "acot(";
            }
        }
        this->num_of_brackets++;
        this->brackets = true;
        this->scientific_mode = true;
        btn_equal->Focus();
    }

    System::Void MyForm::btn_pi_Click(System::Object^ sender, System::EventArgs^ e) {
        double pi = 3.141592653589793;
        this->NewOutputLabel->Text = pi.ToString();
        btn_equal->Focus();
    }

    System::Void MyForm::btn_e_Click(System::Object^ sender, System::EventArgs^ e) {
        double E = 2.718281828459045;
        this->NewOutputLabel->Text = E.ToString();
        btn_equal->Focus();
    }

    System::Void MyForm::btn_2nd_Click(System::Object^ sender, System::EventArgs^ e) {
        if (this->second_mode) {
            this->btn_2nd->BackColor = System::Drawing::Color::Gray;
            this->second_mode = false;
            this->btn_ln->Text = "ln";
            this->btn_log->Text = "log";
            this->btn_10x->Text = "10^x";
            this->btn_xy->Text = "x^y";
            this->btn_sqrt->Text = "sqrt";
            this->btn_xsquare->Text = "x²";
            this->btn_sin->Text = "sin";
            this->btn_cos->Text = "cos";
            this->btn_tg->Text = "tan";
            this->btn_ctg->Text = "cot";
        }
        else {
            this->btn_2nd->BackColor = System::Drawing::Color::LightSkyBlue;
            this->second_mode = true;
            this->btn_ln->Text = "e^x";
            this->btn_log->Text = "logy(x)";
            this->btn_10x->Text = "2^x";
            this->btn_xy->Text = "x^(1/y)";
            this->btn_sqrt->Text = "cbrt";
            this->btn_xsquare->Text = "x³";
            this->btn_sin->Text = "asin";
            this->btn_cos->Text = "acos";
            this->btn_tg->Text = "atan";
            this->btn_ctg->Text = "acot";
        }
    }

    System::Void MyForm::MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
        if (e->KeyCode == Keys::Enter) {
            btn_equal_Click(sender, e);
        }
        else if (e->KeyCode == Keys::Back) {
            btn_del_Click(sender, e);
        }
    }

    System::Void MyForm::MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
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
}