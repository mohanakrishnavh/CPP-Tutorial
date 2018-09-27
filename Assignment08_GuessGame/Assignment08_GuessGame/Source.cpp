#include <iostream>
#include <ctime>

using namespace std;

int main() {
	//Initialize a random seed
	srand(time(NULL));
	//Generates a random number between 0 to 10
	int secretNum = rand() % 11;

	int guess = 0;
	bool flag = true;

	while (flag) {
		cout << "Guess the number: ";
		cin >> guess;
		if (guess > secretNum) {
			cout << "Too Big\n";
		}
		else if (guess < secretNum) {
			cout << "Too Small\n";
		}
		else {
			flag = false;
		}
	}
	cout << "You guessed the number!";

	return 0;
}