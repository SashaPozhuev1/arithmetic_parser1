// arithmeticparser1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"



using namespace std;

int main()
{
	int a, b, r;
	char op1, op2;
	cin >> a;
	cin >> op1;
	if ((op1 == '>') || (op1 == '<')) {
		cin >> op2;
		cin >> b;
	}
	else {
		cin >> b;
	}
	if (op1 == '+') {
		r = a + b;
	}
	else if (op1 == '-') {
		r = a - b;
	}
	else if (op1 == '*') {
		r = a*b;
	}
	else if (op1 == '/') {
		if (b == 0) { cout << "wrong operation"; }
		else r = a / b;
	}
	else if ((op1 == '<') && (op2 == '<')) {
		r = a << b;
	}
	else if ((op1 == '>') && (op2 == '>')) {
		r = a >> b;
	}
	else if (op1 == '&') {
		r = a&b;
	}
	else if (op1 == '|') {
		r = a | b;
	}
	else if (op1 == '^') {
		r = a^b;
	}
	else if (op1 == '%') {
		r = a%b;
	}
	else {
		cout << "wrong operation" << endl;
		system("pause");
		return -1;
	}
	cout << "result: " << r << endl;
	//cin.get();
	system("pause");
	return 0;
}
