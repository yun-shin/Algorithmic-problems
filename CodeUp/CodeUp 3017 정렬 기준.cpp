
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student {
	int number, math, infomation;
};

struct Compare {                                                                                                       // 비디오 제목 내림차순 정렬
	bool operator()(const student& a, const student& b) const {
		if (a.math == b.math && a.infomation == b.infomation)
			return a.number < b.number;

		if (a.math == b.math)
			return a.infomation > b.infomation;

		else
			return a.math > b.math; 
	}
};

int main() {
	int n;
	vector <student> student;

	cout << "수학점수가 높은 순으로 정렬하되, 수학점수가 같으면 정보점수가 높은 순, 정보점수도 같으면 번호가 빠른 순서로 정렬" << "\n";
	cin >> n;

	student.resize(n + 1);

	for (int i = 0; i < n; i++) {
		student[i].number = i + 1;
		cin >> student[i].math >> student[i].infomation;
	}

	sort(student.begin(), student.end(), Compare());

	cout << endl << endl;
	for (int i = 0; i < n; i++) 
		cout << student[i].number << " " << student[i].math << " " << student[i].infomation << " " << "\n";
	

	return 0;
}
