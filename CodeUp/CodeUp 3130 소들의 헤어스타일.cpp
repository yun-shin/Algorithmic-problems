
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);				// C와 C++의 버퍼 분리, 결론적으로 속도 빨라짐. but C 스타일 불가
	cin.tie(NULL);									// cin, cout 묶음 풀기.
	cout.tie(NULL);

	int* cow, n;
	unsigned int sum = 0;
	
	cout << "소 들의 수" << "\n";
	cin >> n;

	cow = new int[n];

	for (int i = 0; i < n; i++) 
		cin >> cow[i];

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (cow[i] <= cow[j])
				break;
			
			sum++;		
		}
	}

	cout << sum << endl;

	return 0;
}
