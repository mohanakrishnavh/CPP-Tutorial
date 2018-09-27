#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

int main() {

	//While Loop & Continue
	int i = 1;
	while (i <= 20) {
		if (i % 2 == 0) {
			i += 1;
			continue;
		}
		if (i == 15) break;
		cout << i << "\n";
		i += 1;
	}

	//Do-While Loop
	srand(time(NULL)); // random seed
	int secretNum = rand() % 11;
	int guess = 0;
	do{
		cout << "Guess the number: ";
		cin >> guess;
		if (guess > secretNum) cout << "Too Big\n";
		if (guess < secretNum) cout << "Too Small\n";
	} while (secretNum != guess);

	cout << "You guessed it.\n";

	//Exception Handling
	double num1 = 0, num2 = 0;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;

	try {
		if (num2 == 0) {
			throw "Division by zero is not possible";
		}
		else {
			printf("%.1f / %.1f = %.1f", num1, num2, (num1 / num2));
		}
	}

	catch (const char* exp) {
		cout << "Error: " << exp << "\n";
	}

	//Exception Handling - Throwing Exceptions
	try {
		cout << "Throwing Exceptions\n";
		throw runtime_error("Error Occured");
		cout << "Can you print me?\n";
	}
	catch(exception &exp){
		cout << "Handled Exception :" << exp.what() << endl;
	}
	//catch-all
	catch (...) {
		cout << "Default Exception\n";
	}

	return 0;
}