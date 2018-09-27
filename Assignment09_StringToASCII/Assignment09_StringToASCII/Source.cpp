#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
	int temp;
	string inputString, word, temp_char, orginalString = "", secretString = "";
	char space = ' ';
	cout << "Enter the string: ";
	getline(cin, inputString);

	// Converting to UPPER case
	//transform(inputString.begin(), inputString.end(), inputString.begin(), ::toupper);

	//String to Integer Conversion
	for (int i = 0; i < inputString.length(); i++) {
		secretString.append(to_string((int)inputString[i])+" ");
	}

	cout << "Secret String: " << secretString << endl;

	//Integer to String Conversion
	stringstream ss(secretString);
	while (getline(ss, word, space)) {
		temp = stoi(word); // Converting String to ASCII value(Integer)
		temp_char = (char)temp;
		orginalString.append(temp_char);
	}

	cout << "Originial String: " << orginalString;

	return 0;
}