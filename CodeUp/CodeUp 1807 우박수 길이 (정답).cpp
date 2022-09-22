

#include <iostream>

using namespace std;

int bigHailIndex = 0;
int bigHailLength = 0;

//long long int f(int n, int hail) 함수 주석
//int hail : 우박수를 저장합니다.
//int length : 우박수의 반복횟수(길이)를 저장합니다.
long long int f(int hail, int length) {

	length++;
	//n이 1이 될 때까지 반복한다
	if (hail == 1)
		return length;
	//짝수일 경우
	else if (hail % 2 == 0)
		return f(hail / 2, length);
	else
		return f(hail * 3 + 1, length);
}

int main() {
	int min, max;
	cin >> min >> max;

	int n;
	for (int i = min; i <= max; i++) {
		n = f(i, 0);
		//기존의 우박수 길이보다 크다면
		if (n > bigHailLength) {
			bigHailIndex = i;
			bigHailLength = n;
		}
	}
	printf("%d %d", bigHailIndex, bigHailLength);
}