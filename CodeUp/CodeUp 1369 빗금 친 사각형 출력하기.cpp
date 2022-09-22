
#include <iostream>

using namespace std;

int main() {
	int n, k, count = 0;

	cout << "n * n  사각형에서 k간격 마다 빗금을 친 사각형을 출력." << "\n";
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1 || i == n || j == 1 || j == n)
				cout << "*";

			else if ((j + count) % k == 0)
				cout << "*";
			else
				cout << " ";

		}
		cout << "\n";
		count++;
	}

	return 0;
}