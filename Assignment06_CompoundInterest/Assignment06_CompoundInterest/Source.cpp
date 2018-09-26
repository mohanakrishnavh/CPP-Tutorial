#include <iostream>
#include <vector>

using namespace std;

//Function Declarations
vector<int> Range(int begin, int end, int step);

int main() {
	double investment = 0.0, rate = 0.0;
	cout << "Enter the amount: ";
	cin >> investment;

	cout << "Enter the rate of interest: ";
	cin >> rate;

	rate *= 0.01;

	for (auto y : Range(1, 10, 1)) {
		investment += (investment*rate);
	}
	cout << "Value after 10 years: " << investment << "\n";
	
	return 0;
}


//FUNCTIONS

vector<int> Range(int begin, int end, int step) {
	vector<int> range;
	int i = begin;
	while (i <= end) {
		range.push_back(i);
		i += step;
	}
	return range;
}

//END FUNCTIONS