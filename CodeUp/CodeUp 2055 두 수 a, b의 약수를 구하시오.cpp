
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int a, b;
	vector <int> divisors;

	cout << "약수를 구할 두 수 a, b를 입력하세요." << endl;
	cin >> a >> b;

	for (int i = 1; i <= sqrt(b); i++) {		// 자연수 천만 단위라서 졸라 오래걸림. 루트 값으로 계산해도 약수 나옴.
		if (a % i == 0 || b % i == 0) {
			divisors.push_back(i);

			if (a % i == 0)						// 무지성으로 넣으니 이상한 값 들어가서 한 번더 필터링
				divisors.push_back(a / i);

			if (b % i == 0)						// 무지성으로 넣으니 이상한 값 들어가서 한 번더 필터링
				divisors.push_back(b / i);
		}
	}

	sort(divisors.begin(), divisors.end());
	divisors.erase(unique(divisors.begin(), divisors.end()), divisors.end());		// 중복 제거

	for (int i = 0; i < divisors.size(); i++)
		cout << divisors[i] << " ";
}
