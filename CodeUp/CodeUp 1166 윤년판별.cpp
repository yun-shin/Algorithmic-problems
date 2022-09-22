
#include <iostream>

using namespace std;

int main() {
	int year;

	cout << "윤년을 판별해드립니다. 년도를 입력해주세요." << "\n";
	cin >> year;

	if (year % 4 == 0 && year % 100 > 0)
		cout << "yes" << "\n";
	else if (year % 400 == 0)
		cout << "yes" << "\n";
	else
		cout << "no" << "\n";

	return 0;
}