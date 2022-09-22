
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector <int> number;
	int input;

	cout << "숫자를 입력해주세요. 최대/최솟 값 알려드림." << "\n";
	
	for (int i = 0; i < 5; i++) {
		cin >> input;
		number.push_back(input);
	}

	sort(number.begin(), number.end());

	cout << number[number.size() - 1] << "\n" << number[0] << "\n";

	return 0;
}