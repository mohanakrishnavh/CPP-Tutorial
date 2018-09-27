#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	// c-type string
	char cString[] = { 'A', ' ','S','t','r','n','g','\0' };
	cout << "Array Size: " << sizeof(cString) << "\n";

	//Strings
	vector<string> strVec(10);
	string str("This is a string");
	strVec[0] = str;
	cout << "Accessing Index 0 of str: "<< str[0] << endl;
	cout << "Accessing Index 0 of str using ""at"": " << str.at(0) << endl;
	cout << str.front() << " " << str.back() << "\n";
	cout << "Length: " << str.length() << "\n";
	string str2(str); //copying the string
	strVec[1] = str2;

	string str3(str, 4); //copy everything after 4th char
	strVec[2] = str3;

	string str4(5, 'x'); //repeats x 5 times
	strVec[3] = str4;

	strVec[4] = str.append(" and you are not.");
	str += " and you are not.";
	strVec[5] = str;
	
	str.append(str, 34, 37); //appends the string in the given index
	strVec[6] = str;

	str.erase(13, str.length() - 1); //earses the string between given index
	strVec[7] = str;

	if (str.find("str") != std::string::npos) {
		cout << "1st index: " << str.find("str") << "\n"; // find() returns index where pattern is found or npos
	}

	str = "This is a string";
	cout << "Substr " << str.substr(11, 6) << "\n";

	reverse(str.begin(), str.end()); // reverse the string
	cout << "Reverse: " << str << "\n";

	transform(str2.begin(),str2.end(),str2.begin(),::toupper);
	cout << "Upper: " << str2 << "\n";
	transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
	cout << "Lower: " << str2 << "\n";

	// a - z : 97 - 122
	// A - Z : 65 - 90
	char aChar = 'A';
	int aInt = aChar;
	cout << "Code for A: " << aInt << "\n";
	cout << "Code for A: " << (int)'A' << "\n";

	//Integer to String
	string sNum = to_string(10+12);
	cout << "Converted into String: " << sNum << endl;

	for (auto each : strVec) {
		cout << each << "\n";
	}

	//Math
	cout << "abs(-10) : " << abs(-10) <<"\n";
	cout << "max(10,100) : " << max(10, 100) << "\n";
	cout << "min(10,100) : " << min(10, 100) << "\n";
	cout << "fmax(1.0,-1.0) : " << fmax(1.0, -1.0) << "\n";
	cout << "fmin(1.0,-1.0) : " << fmin(1.0, -1.0) << "\n";
	// e ^ x
	std::cout << "exp(1) = " << exp(1) << "\n";

	// 2 ^ x
	std::cout << "exp2(1) = " << exp2(1) << "\n";

	// e * e * e ~= 20 so log(20.079) ~= 3
	std::cout << "log(20.079) = " << log(20.079) << "\n";
	// 10 * 10 * 10 = 1000, so log10(1000) = 3
	std::cout << "log10(1000) = " << log10(1000) << "\n";
	// 2 * 2 * 2 = 8
	std::cout << "log2(8) = " << log2(8) << "\n";

	// 2 ^ 3
	std::cout << "pow(2,3) = " << pow(2, 3) << "\n";

	// Returns what times itself equals the provided value
	std::cout << "sqrt(100) = " << sqrt(100) << "\n";
	// What cubed equals the provided
	std::cout << "cbrt(1000) = " << cbrt(1000) << "\n";

	// Hypotenuse : SQRT(A^2 + B^2)
	std::cout << "hypot(2,3) = " << hypot(2, 3) << "\n";

	std::cout << "ceil(10.45) = " << ceil(10.45) << "\n";
	std::cout << "floor(10.45) = " << floor(10.45) << "\n";
	std::cout << "round(10.45) = " << round(10.45) << "\n";
	return 0;

}