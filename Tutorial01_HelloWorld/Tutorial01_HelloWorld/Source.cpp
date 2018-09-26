/*
	HelloWorld Program

	#include - Preprocessor directives - Loads the files which contain premade objects and functions
	argc - Number of arguments passed
	argv - Array pointer to strings
*/

#include <iostream>

using namespace std;

void main(int argc, char** argv) {
	cout << "Hello World" << endl;

	if (argc != 1) {
		cout << "You entered " << argc << " arguments\n";
	}

	for (int i = 0; i < argc; i++) {
		cout << argv[i] << endl;
	}
}

