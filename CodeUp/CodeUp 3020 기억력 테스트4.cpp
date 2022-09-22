#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>> vec;			// 값, 원래 위치

int binarySearch(int start, int end, int search) {
	if (start > end) return -1;

	int mid = (start + end) / 2;		// 중앙부터 탐색

	if (vec[mid].first == search) return vec[mid].second;		// 맞으면 리턴

	if (vec[mid].first > search)								// 답변이 작으면 end == mid - 1
		return binarySearch(start, mid - 1, search);

	else if (vec[mid].first < search)							// 답변이 크면 start == mid + 1
		return binarySearch(mid + 1, end, search);
}

int main() {
	ios_base::sync_with_stdio(false);				// C와 C++의 버퍼 분리, 결론적으로 속도 빨라짐. but C 스타일 불가
	cin.tie(NULL);									// cin, cout 묶음 풀기.
	cout.tie(NULL);

	int N, M, correct, answer;
	cout << "주현이 엄마의 문제 개수." << "\n";
	cin >> N;

	cout << "\n" << N << "개 만큼 랜덤 숫자를 입력해주세요." << "\n";
	for (int i = 0; i < N; i++) {
		cin >> correct;
		vec.push_back(make_pair(correct, i + 1));				// 정답과 원래 위치를 넣어줌. pair를 사용한 벡터는 make_pair를 사용,
	}

	sort(vec.begin(), vec.end());						// 빠른 검색을 위해 오름차순으로 정렬

	cout << "\n" << "주현의 대답 개수" << "\n";
	cin >> M;

	cout << "\n" << M << "개 만큼 대답을 입력해주세요." << "\n";
	while (M--) {
		cin >> answer;
		cout << binarySearch(0, N - 1, answer) << " ";
	}

	return 0;
}