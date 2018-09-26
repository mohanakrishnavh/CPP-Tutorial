/*
	Program to convert miles into kilometers
	km = miles * 1.60934
	Example : 5 miles equals 8.0467 kilometers
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string command("Enter the number of miles: ");
	cout << command << "\n";

	string sMiles;
	getline(cin, sMiles);
	
	double miles = stod(sMiles);
	double kms = miles * 1.60934;
	cout << "Result in kilometers: " << kms;

	return 0;
}