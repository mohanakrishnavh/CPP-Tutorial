/*
	Program to simulate a calculator
	Enter the calculation (ex. 5 + 6) : 10 - 6
	10.0 - 6.0 = 4.0
	Please enter only +,-,*,/
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
	string sExpr, expr;
	char space = ' ';
	vector<string> vecExpr;
	cout << "Enter the calculation (ex. 5 + 6) : ";
	getline(cin, sExpr);
	stringstream ss(sExpr);

	while (getline(ss, expr, space)) {
		vecExpr.push_back(expr);
	}

	float num1 = stof(vecExpr[0]);
	float num2 = stof(vecExpr[2]);

	if (vecExpr[1] == "+") {
		printf("%.1f + %.1f = %.1f", num1, num2, (num1 + num2));
	}
	else if (vecExpr[1] == "-") {
		printf("%.1f + %.1f = %.1f", num1, num2, (num1 - num2));
	}
	else if (vecExpr[1] == "*") {
		printf("%.1f + %.1f = %.1f", num1, num2, (num1 * num2));
	}
	else if (vecExpr[1] == "/") {
		printf("%.1f + %.1f = %.1f", num1, num2, (num1 / num2));
	}
	else {
		cout << "Please enter only +,-,*,/\n";
	}
	return 0;
}