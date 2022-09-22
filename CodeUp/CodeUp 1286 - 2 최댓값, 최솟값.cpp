
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int input[5], *max, *min;

	cout << "숫자를 입력해주세요. 최대/최솟 값 알려드림." << "\n";

	for (int i = 0; i < 5; i++) 
		cin >> input[i];

	max = max_element(input, input + 5);
	min = min_element(input, input + 5);

	cout << *max << "\n" << *min << "\n";

	return 0;
}