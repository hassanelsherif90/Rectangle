#include <iostream>
#include <string>
using namespace std;

void ReadNumber(float& A, float& B) {

	cout << "\n Please enter a A " << endl;
	cin >> A;
	
	cout << "\n Please enter a B " << endl;
	cin >> B;

}

float CalculateRectangle(float A, float B) {
	return A * B;
}

void PrintResult(float Area) {
	cout << "\n Rectangle Area Is " << Area << endl;
}

int main() {
	float A, B;
	ReadNumber(A, B);
	PrintResult(CalculateRectangle(A, B));
	return 0;
}