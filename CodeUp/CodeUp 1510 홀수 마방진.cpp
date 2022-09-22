
#include <iostream>

using namespace std;

int main() {
	int n, **magic_square, row, heat;

	cout << "n*n 홀수 마방진을 만들어 보자. " << "\n";
	cin >> n;

	magic_square = new int* [n];
	for (int i = 0; i < n; i++)
		magic_square[i] = new int[n] {0, };		// 0 으로 초기화

	row = ((n + 1) / 2) - 1;
	heat = 0;

	magic_square[heat][row] = 1;				// 1. 시작은 첫 행, 한 가운데 열에 1을 둔다
	for (int i = 2; i <= n * n; i++) {
		if ((i - 1) % n == 0)					// 5. 넣은 수가 n의 배수이면 행만 증가한다. 열은 변화없음.
			heat++;
		else {									// 2. 행을 감소, 열을 증가하면서 순차적으로 수를 넣어간다.
			heat--;
			row++;
		}

		if (heat < 0)							// 3. 행은 감소하므로 첫 행보다 작아지는 경우에는 마지막 행으로 넘어간다.
			heat = n - 1;

		if (row > n - 1)						// 4. 열은 증가하므로 마지막 열보다 커지는 경우에는 첫 열로 넘어간다.
			row = 0;

		if (magic_square[heat][row] == 0)		// 해당 값이 들어있지 않으면 넣기.
			magic_square[heat][row] = i;
		else									// 값이 존재하면 다시
			i--;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << magic_square[i][j] << " ";
		cout << "\n";
	}
	return 0;
}