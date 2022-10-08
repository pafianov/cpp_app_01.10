#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const int work = 28800;
	int sec;
	cout << "Enter sec: " << endl;
	cin >> sec;
	cout << "Left to work: " << (work - sec) / 3600 << " hours" << endl;

	return 0;
}