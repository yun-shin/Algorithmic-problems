
#include <iostream>

using namespace std;

int main() {
	int input_num, radix = 1;

	cout << "숫자를 입력해주세요. 자릿수를 알려드림." << "\n";
	cin >> input_num;

	while (input_num > 9) {
		input_num /= 10;
		radix++;
	}

	cout << radix << "\n";

	return 0;
}