/*
	Conditional Operators(==, !=, <=, >=, <, >)
	Logical Operators(&&, ||, !)
	Arrays
	Strings
	Loops
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {

	//Conditional and Logical Operators
	string sAge = "0";
	cout << "Enter your age: ";
	getline(cin, sAge);
	int age = stoi(sAge);

	if ((age >= 1) && (age <= 18)) {
		cout << "Important Birthday\n";
	}
	else if ((age == 21) || (age == 50)) {
		cout << "Important Birthday\n";
	}
	else if (age >= 65) {
		cout << "Important Birthday\n";
	}
	else {
		cout << "Not an important birthday\n";
	}

	//Arrays
	int arrNums[10] = { 1 };
	int arrNums2[] = { 1, 2, 3 };
	int arrNums3[5] = { 8, 9 };
	cout << "1st value(arrNums): " << arrNums[0] << endl;
	
	arrNums3[0] = 7;
	cout << "1st value(arrNums3): " << arrNums3[0] << endl;
	cout << "Array size(arrNums2): " << (sizeof(arrNums2) / sizeof(*arrNums2)) << endl;
	
	int arrNums4[2][2][2] = { {{1, 2,}, {3, 4}},{{5, 6}, {7, 8}} };
	cout << "Value at [1][1][1]: " << arrNums4[1][1][1] <<endl;

	//Vectors
	vector<int> vecRandNums(2);
	vecRandNums[0] = 10;
	vecRandNums[1] = 20;
	vecRandNums.push_back(30);
	cout << "Last value in vector: " << vecRandNums[vecRandNums.size() - 1] << endl;

	// Sentence to Vector of words
	string sSentence = "This is a random string";
	vector<string> vecWords;
	stringstream ss(sSentence);
	string word;
	char space = ' ';
	while (getline(ss, word, space)) {
		vecWords.push_back(word);
	}
	for (int i = 0; i < vecWords.size(); i++) {
		cout << vecWords[i] << endl;
	}
	return 0;
}