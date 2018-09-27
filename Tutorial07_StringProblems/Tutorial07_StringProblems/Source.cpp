#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

// Function Declarations
vector<string> stringToVector(string inputString, char seperator);
string vectorToString(vector<string>& inputVector, char seperator);
string trimWhiteSpace(string theString);
vector<int> findSubstringMatches(string inputString, string pattern);
string replaceAllSubstrings(string inputString, string patternToReplace, string replaceWith);

int main() {
	//String to Vector
	vector<string> vec = stringToVector("This is a random string", ' ');
	cout << "String to Vector: " << endl;
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}

	//Vector to String
	vector<string> vCusts(3);
	vCusts[0] = "Bob";
	vCusts[1] = "Sue";
	vCusts[2] = "Tom";

	string sCusts = vectorToString(vCusts, ' ');
	cout << "Vector to String: " << endl;
	cout << sCusts << endl;

	//Trim Whitespaces
	string text = "	    EMkae     ";
	cout << "Before Trimming: " << text << endl;
	text = trimWhiteSpace(text);
	cout << "After Trimming: " << text << endl;

	//Find Substring Matches
	string phrase = "To be or not to be";
	string pattern = "be";
	vector<int> matches = findSubstringMatches(phrase, pattern);
	for (auto idx : matches) {
		cout << "Match at Index: " << idx << endl;
	}

	//Replace all substrings
	text = "to know or not to know";
	cout << "Before replace: " << text << endl;
	text = replaceAllSubstrings(text, "know", "REPLACED");
	cout << "After replace: " << text << endl;

	//String Helper Functions
	char letterZ = 'z';
	char num3 = '3';
	char aSpace = ' ';
	cout << "Is z a letter or number? : " << isalnum(letterZ) << endl;
	cout << "Is z a letter? : " << isalpha(letterZ) << endl;
	cout << "Is z uppercase? : " << isupper(letterZ) << endl;
	cout << "Is z lowercase? : " << islower(letterZ) << endl;
	cout << "Is 3 a number? : " << isdigit(num3) << endl;
	cout << "Is space a space?: " << isspace(aSpace) << endl;

	return 0;
}

//FUNCTIONS

vector<string> stringToVector(string inputString, char seperator) {
	vector<string> vecWords;
	stringstream ss(inputString);
	string word;
	while (getline(ss, word, seperator)) {
		vecWords.push_back(word);
	}
	return vecWords;
}

string vectorToString(vector<string>& inputVector, char seperator) {
	string vecString = "";
	for (auto word : inputVector) {
		vecString.append(word + seperator);
	}
	return vecString;
}

string trimWhiteSpace(string theString) {
	string whiteSpaces("\t\f\n\r ");
	theString.erase(theString.find_last_not_of(whiteSpaces)+1);
	theString.erase(0, theString.find_first_not_of(whiteSpaces));
	return theString;
}

vector<int> findSubstringMatches(string inputString, string pattern) {
	vector<int> substringIndex;
	int idx = inputString.find(pattern, 0);
	while (idx != string::npos) {
		substringIndex.push_back(idx);
		idx = inputString.find(pattern, idx+1);
	}
	return substringIndex;
}

string replaceAllSubstrings(string theString, string patternToReplace, string replaceWith) {
	vector<int> matches = findSubstringMatches(theString, patternToReplace);

	if (matches.size() != 0) {
		for (int i = (matches.size()-1); i >= 0; i--) {
			theString = theString.replace(matches[i], patternToReplace.size(), replaceWith);
		}
	}
	return theString;
}

//END FUNCTIONS