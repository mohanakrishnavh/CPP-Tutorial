/*
	Pointers & Functions
	iota - fills the values in the vector(#include <numeric>)
*/
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// Function Declarations
double addNumbers(double num1, double num2);
void assignAge(int age);
int assignAge2(int age);
void assignAge3(int* pAge);
void dobuleArray(int* arr, int size);

int main() {
	vector<int> myVec(10);
	iota(begin(myVec), end(myVec), 0);

	// traditional-loop
	for (int i = 0; i < myVec.size(); i++) {
		cout << myVec[i] << endl;
	}

	// y type is automatically identified
	for (auto y : myVec) {
		cout << y << "\n";
	}
	cout << "\n";

	// Check if 8 is even
	int val = 8;
	if ((val % 2) == 0) {
		cout << val << " is even.\n";
	}
	else {
		cout << val << " is odd.\n";
	}

	//Functions
	double num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	printf("%.1f  %.1f = %.1f\n", num1, num2, addNumbers(num1, num2));

	int age = 43;
	assignAge(age);
	printf("Age: %d \n", age);
	
	age = assignAge2(age);
	printf("Returned Age: %d \n", age);

	//Pointers
	int* pAge = NULL;
	age = 43;
	pAge = &age; // & - reference operator(Returns the address for the variable)
	cout << "Address : " << pAge << "\n";
	cout << "Value at Address : " << *pAge << "\n"; // * - dereference operator(Returns the value at the given address)

	int intArray[] = { 1, 2, 3, 4 };
	int* pIntArray = intArray; // Don't need to put the "&" symbol for arrays
	cout << "1st : " << *pIntArray << " Address: " << pIntArray << endl;
	pIntArray++;
	cout << "2nd : " << *pIntArray << " Address: " << pIntArray << endl;
	pIntArray++;
	cout << "3rd : " << *pIntArray << " Address: " << pIntArray << endl;
	pIntArray--;
	cout << "2nd : " << *pIntArray << " Address: " << pIntArray << endl;

	assignAge3(&age);
	printf("Pointer Age: %d \n", age);

	int arr[] = { 1, 2, 3, 4 };
	dobuleArray(arr, 4);
	for (int each : arr) {
		cout << each << endl;
	}

	return 0;
}

//FUNCTIONS

//Function Definition
double addNumbers(double num1, double num2)
{
	return num1 + num2;
}


void assignAge(int age) {
	age = 24; // local varialble, doesn't affect the "age" variable in main()
}

// Pass by value
int assignAge2(int age) {
	age = 24;
	return age;
}

void assignAge3(int* pAge) {
	*pAge = 22;
}

void dobuleArray(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = arr[i] * 2;
	}
}

//END FUNCTIONS