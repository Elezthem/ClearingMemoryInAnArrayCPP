#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	
	int *num = new int[80];
	num[0] = 22;
	cout << num[0] << endl;
	delete[] num;
	cout << "Element: " << num[0] << endl;

	return 0;
}