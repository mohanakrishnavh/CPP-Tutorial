/*
	Data types in C++
*/

#include <iostream>
#include <limits>
#include <string>

using namespace std;

int g_iRandNumber = 0;
const double PI = 3.145159;

int main() {
	bool bMarried = true;
	char chMyGrade = 'A';
	unsigned short int u16Age = 43;
	short int siWeight = 180;
	int nDays = 7;
	long lBigNum = 1100000;
	float fPi = 3.14159;
	double dbBigFloat = 1.11111111111111111111;
	long double ldPi = 3.14159;
	auto guessVariable = true;

	cout << "\nMin and Max values for Data Types";
	//Bool limits
	cout << "\n";
	cout << "Min Bool :" << numeric_limits<bool>::min() << "\n";
	cout << "Max Bool :" << numeric_limits<bool>::max() << "\n";

	//Unsigned Short Int limits
	cout << "Min Unsigned Short Int :" << numeric_limits<unsigned short int>::min() << "\n";
	cout << "Max Unsigned Short Int :" << numeric_limits<unsigned short int>::max() << "\n";

	//Short Int limits
	cout << "Min Short Int :" << numeric_limits<short int>::min() << "\n";
	cout << "Max Short Int :" << numeric_limits<short int>::max() << "\n";

	//Int limits
	cout << "Min Int :" << numeric_limits<int>::min() << "\n";
	cout << "Max Int :" << numeric_limits<int>::max() << "\n";

	//Long limits
	cout << "Min Long :" << numeric_limits<long>::min() << "\n";
	cout << "Max Long :" << numeric_limits<long>::max() << "\n";

	//Char limits
	cout << "Min Char :" << numeric_limits<char>::min() << "\n";
	cout << "Max Char :" << numeric_limits<char>::max() << "\n";

	//Float limits
	cout << "Min Float :" << numeric_limits<float>::min() << "\n";
	cout << "Max Float :" << numeric_limits<float>::max() << "\n";

	//Double limits
	cout << "Min Double :" << numeric_limits<double>::min() << "\n";
	cout << "Max Double :" << numeric_limits<double>::max() << "\n";

	//Long Double limits
	cout << "Min Long Double :" << numeric_limits<long double>::min() << "\n";
	cout << "Max Long Double :" << numeric_limits<long double>::max() << "\n";

	//Size of the Data Types
	cout << "\n";
	cout << "\nSize of the Data Types";
	cout << "\nBool :" << sizeof(bool);
	cout << "\nChar :" << sizeof(char);
	cout << "\nUnsigned Short Int :" << sizeof(unsigned short int);
	cout << "\nShort Int :" << sizeof(short int);
	cout << "\nInt: " << sizeof(int);
	cout << "\nLong: " << sizeof(long);
	cout << "\nFloat: " << sizeof(float);
	cout << "\nDouble: " << sizeof(double);
	cout << "\nLong Double: " << sizeof(long double);

	//Precision Test
	float float1 = 1.1111111111;
	float float2 = 1.1111111111;
	float floatSum = float1 + float2;
	//C-type formatted printing is allowed
	printf("\nfloatSum Precision: %.10f\n", floatSum);
	cout << "Float loses precision after 6 decimal places. \n";

	double double1 = 1.111111111111111;
	double double2 = 1.111111111111111;
	double doubleSum = double1 + double2;
	printf("\ndoubleSum Precision: %.15f\n", doubleSum);
	cout << "Double loses precision after 10 decimal places. \n";

	printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.12345, "Emkae");

	//Datatype Conversion
	cout << "\n";
	string sQuestion("Enter number 1: ");
	string sNum1, sNum2;
	cout << sQuestion;
	getline(cin, sNum1);
	cout << "Enter number 2: ";
	getline(cin, sNum2);

	int num1 = stoi(sNum1);
	int num2 = stoi(sNum2);
	printf("%d + %d = %d\n", num1, num2, (num1 + num2));
	printf("%d - %d = %d\n", num1, num2, (num1 - num2));
	printf("%d * %d = %d\n", num1, num2, (num1 * num2));
	printf("%d / %d = %d\n", num1, num2, (num1 / num2));
	printf("%d %% %d = %d\n", num1, num2, (num1 % num2));

	return 0;
}