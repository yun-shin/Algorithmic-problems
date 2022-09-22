#include <iostream>

using namespace std;

int f(int n, int k) {
	int c = 0;
	if (n == k) {					// n이 1의 자리일 경우 바로 리턴
		c++;
		return c;
	}

	while (n != 0) {				// 나머지 0이면 중지
		if (n % 10 == k) c++;

		n /= 10;
	}

	return c; // k 개수 리턴
}

int main() {
	ios_base::sync_with_stdio(false);				// C와 C++의 버퍼 분리, 결론적으로 속도 빨라짐. but C 스타일 불가
	cin.tie(NULL);									// cin, cout 묶음 풀기.
	cout.tie(NULL);

	int a, b, k;
	int sum = 0;

	cout << "시작 값(a), 마지막 값(b), 한자리 정수(k)가 입력" << "\n";
	cin >> a >> b >> k;

	for (int i = a; i <= b; i++) {
		sum += f(i, k);
	}
	cout << sum << "\n";

	// 여기부턴 디버깅용
	int count = 0;
	cout << "\n" << "\n";
	for (int i = a; i <= b; i++) {
		cout << i << " ";

		if (count == 8) {
			cout << "\n";
			count = 0;
		}
		count++;

	}
	return 0;
}
