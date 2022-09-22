
#include <iostream>

using namespace std;

int main()
{
	int Current_H, Current_M;

	cout << "30분 전으로 돌려드림" << endl;
	cin >> Current_H >> Current_M;

	Current_M = Current_M - 30;

	if (Current_M < 0) {
		Current_H--;
		Current_M = Current_M + 60;
		if (Current_H < 0) 
			Current_H = Current_H + 24;
	}

	cout << Current_H << " " << Current_M << endl;
}
