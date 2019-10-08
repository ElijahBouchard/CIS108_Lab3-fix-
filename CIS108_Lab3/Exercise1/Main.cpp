#include <iostream>
#include <string>
#include "conio.h"
#include "Calculator.h"

using namespace std;
using namespace Calculator;

void addition(string number1, string number2)
{
	if (number1 == "")
	{
		double n2 = stod(number2);

		addValue(n2);
	}
	else
	{
		double n1 = stod(number1);
		double n2 = stod(number2);

		double ans = n1 + n2;

		setValue(ans);
	}
}
void subtraction(string number1, string number2)
{
	if (number1 == "")
	{
		double n2 = stod(number2);

		subtractValue(n2);
	}
	else
	{
		double n1 = stod(number1);
		double n2 = stod(number2);

		double ans = n1 - n2;
		
		setValue(ans);
	}
}
void multiply(string number1, string number2)
{
	if (number1 == "")
	{
		double n2 = stod(number2);

		multiplyValue(n2);
	}
	else
	{
		double n1 = stod(number1);
		double n2 = stod(number2);

		double ans = n1 * n2;

		setValue(ans);
	}
}
void divide(string number1, string number2)
{
	if (number1 == "")
	{
		double n2 = stod(number2);

		divideValue(n2);
	}
	else
	{
		double n1 = stod(number1);
		double n2 = stod(number2);

		double ans = n1 / n2;
		setValue(ans);
	}
}
void toPower(string number1, string number2)
{
	if (number1 == "")
	{
		double n2 = stod(number2);

		power(n2);
	}
	else
	{
		double n1 = stod(number1);
		double n2 = stod(number2);

		double ans = pow(n1,n2);
		setValue(ans);
	}
}

int main()
{
	string num1;
	string num2;

	bool next = false;
	bool cond = true;

	string f = "";

	cout << "a.  X: Exit the program\n"
		<< "b.  C: Clear the calculator\n"
		<< "c.  +: Addition\n"
		<< "d.  -: Subtraction\n"
		<< "e.  *: Multiplication\n"
		<< "f.  /: Division\n"
		<< "g.  S: Memory Store\n"
		<< "h.  R: Memory Recall\n"
		<< "i.  M: Memory Clear\n"
		<< "j.  I: Invert sign\n"
		<< "k.  ^: Power function\n"
		<< "l.  ENTER: Execute the requested function, and then display the calculator\'s current value\n" << endl << ">";

	while(cond)
	{
		char c = _getch();

		if (toupper(c) == 'C')
		{
			clearValue();
			system("CLS");

			num1 = "";
			num2 = "";
			next = false;

			cout << "a.  X: Exit the program\n"
				<< "b.  C: Clear the calculator\n"
				<< "c.  +: Addition\n"
				<< "d.  -: Subtraction\n"
				<< "e.  *: Multiplication\n"
				<< "f.  /: Division\n"
				<< "g.  S: Memory Store\n"
				<< "h.  R: Memory Recall\n"
				<< "i.  M: Memory Clear\n"
				<< "j.  I: Invert sign\n"
				<< "k.  ^: Power function\n"
				<< "l.  ENTER: Execute the requested function, and then display the calculator\'s current value\n" << endl << ">";
		}
		else if (c == '+')
		{
			cout << "+";
			next = true;

			f = "add";
		}
		else if (c == '-')
		{
			cout << "-";
			next = true;

			f = "sub";
		}
		else if (c == '*')
		{
			cout << "*";
			next = true;

			f = "mult";
		}
		else if (c == '/')
		{
			cout << "/";
			next = true;

			f = "div";
		}
		else if (toupper(c) == 'S')
		{
			memoryStore();
			cout << endl << "Memory Stored" << endl << '>';
		}
		else if (toupper(c) == 'R')
		{
			cout << endl << memoryRecall() << endl << '>';
		}
		else if (toupper(c) == 'M')
		{
			memoryClear();
			cout << "Memory Cleared" << endl << '>';
		}
		else if (toupper(c) == 'I')
		{
			cout << endl << invert() << endl;
			cout << '>';
		}
		else if (c == '^')
		{
			cout << "^";
			next = true;

			f = "pow";
		}
		else if (c == '\r')
		{
			next = false;
			if (f == "add")
			{
				addition(num1, num2);
			}
			else if (f == "sub")
			{
				subtraction(num1, num2);
			}
			else if (f == "mult")
			{
				multiply(num1, num2);
			}
			else if (f == "div")
			{
				divide(num1, num2);
			}
			else if (f == "pow")
			{
				toPower(num1, num2);
			}
			else if (f == "" && num1 != "")
			{
				setValue(stod(num1));
			}

			num1 = "";
			num2 = "";
			f = "";

			cout << endl << getValue() << endl << '>';
		}
		else if (isdigit(c) || c == '.')
		{
			cout << c;
			if (next)
			{
				num2 += c;
			}
			else
			{
				num1 += c;
			}
		}
		else if (toupper(c) == 'X')
		{
			cond = false;
		}

	}
}