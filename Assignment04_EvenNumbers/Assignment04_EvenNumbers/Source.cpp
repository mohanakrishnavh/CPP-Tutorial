#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	vector<int> numbers(10);
	iota(begin(numbers), end(numbers), 1);

	for (int each : numbers) {
		if (each % 2 == 0) {
			cout << each << endl;
		}
	}
	return 0;
}