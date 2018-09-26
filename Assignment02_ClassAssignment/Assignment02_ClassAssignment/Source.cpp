/*
	If age 5 "Go to Kindergarden"
	age 6 through 17 -> 1 through 12
	age > 17 -> "Go to college"
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string command("Enter your age: ");
	cout << command << endl;
	string sAge = "0";
	getline(cin, sAge);
	int age = stoi(sAge);

	if (age == 5) {
		cout << "Go to kindergarden";
	}
	else if ((age >= 6) && (age <= 17)) {
		printf("Go to %dth grade", (age - 5));
	}
	else if (age > 17) {
		cout << "Go to college";
	}
	else {
		cout << "Stay home!";
	}
	return 0;
}