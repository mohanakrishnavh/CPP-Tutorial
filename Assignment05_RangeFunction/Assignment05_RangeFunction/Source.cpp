/*
	Implementation of Python's range() function
*/

#include <iostream>
#include <vector>

using namespace std;

//Function Declarations
vector<int> Range(int begin, int end, int step);

int main() {
	vector<int> range = Range(0, 100, 10);

	for (int each : range) {
		cout << each << "\n";
	}

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