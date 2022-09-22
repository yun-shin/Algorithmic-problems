
#include <iostream>

using namespace std;

int main() {
	int *card, N, num;

	cout << "땅에 떨어진 카드 묶음을 읽어서 빠진 하나의 카드 번호를 찾아 출력" << "\n";
	cin >> N;

	card = new int [N] {0, };

	for (int i = 0; i < N - 1; i++) {
		cin >> num;
		card[num - 1] = num;
	}

	for (int i = 0; i < N ; i++) {
		if (card[i] == 0)
			cout << i + 1 << "\n";
	}

	return 0;
}