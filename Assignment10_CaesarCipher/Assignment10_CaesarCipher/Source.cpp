#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

//Function Declaration
string caesarCipher(string theString, int shift, bool encrypt);

int main() {
	string theString = "This is a random string";
	string encryptedString = caesarCipher(theString, 5, true);
	string decryptedString = caesarCipher(encryptedString, 5, false);
	cout << "Orginal Message: " << theString << endl;
	cout << "Encrypted Message: " << encryptedString << endl;
	cout << "Decrypted Message: " << decryptedString << endl;
	//string dec = caesarCipher(theString, 5, false);
	//cout << dec;
}


//FUNCTIONS

string caesarCipher(string theString, int shift, bool encrypt) {
	string word, outputString = "";
	char temp, space= ' ';
	int asciiCode;
	if (encrypt == true) {
		for (int i = 0; i < theString.length(); i++) {
			temp = (char)theString[i];
			asciiCode = (int)temp;
			asciiCode += shift;
			temp = (char)asciiCode;
			outputString.append(to_string(temp)+" ");
		}
	}
	else {
		outputString = "";
		stringstream ss(theString);
		while (getline(ss, word, space)) {
			asciiCode = stoi(word);
			asciiCode -= shift;
			temp = (char)asciiCode;
			outputString += temp;
		}
	}
	return outputString;
}

//END FUNCTIONS