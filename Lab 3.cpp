#include <iostream>

using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;

	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "Please enter the first value: ";
	cin >> A;
	// The rest of this function is an exercise to the reader
}

void getChoices2(float& A, float& B) {
	cout << "Please enter the second value: ";
	cin >> B;
}
void firstChoice(float A, float B) {
	float x; 
	x = A + B;

	cout << "\n" << A << " + " << B << " = " << x << endl;
}
void secondChoice(float A, float B) {
	float x;
	x = A - B;

	cout << "\n" << A << " - " << B << " = " << x << endl;
}

void thirdChoice(float A, float B) {
	float x;
	x = A * B;

	cout << "\n"  << A << " * " << B << " = " << x << endl;
}

void forthchoice(float A, float B) {
	float x;
	x = A / B;

	cout << "\n" << A << " / " << B << " = " << x << endl;
}
int main() {
	int choice;
	float A;
	float B;


	printMenu(choice);
	getChoices(A, B);
	getChoices2(A, B);

	if (choice == 1) {
		firstChoice(A, B);
	}
	if (choice == 2) {
		secondChoice(A, B);
	}
	if (choice == 3) {
		thirdChoice(A, B);
	}
	if (choice == 4) {
		forthchoice(A, B);
	}
	return 0;
}
