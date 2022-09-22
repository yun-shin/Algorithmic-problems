
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student {
	int number, math, infomation;
};

int main() {
	int n, math, infomation;
	vector <student> student;

	cout << "수학점수가 높은 순으로 정렬하되, 수학점수가 같으면 정보점수가 높은 순, 정보점수도 같으면 번호가 빠른 순서로 정렬" << "\n";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> math >> infomation;
		student.push_back(i + 1, math, infomation);
	}

	sort(student.math.begin(), student.math.end());


	for (int i = 0; i < n; i++) {
		cout << student.number << " " << student.math << " " << student.infomation << " " << "\n";
	}
}
