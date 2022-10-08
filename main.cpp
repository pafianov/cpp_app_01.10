#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int begin_hours, begin_min, begin_sec;
	int end_hours, end_min, end_sec;
	cout << "Time to start using the scooter h,min,sec" << endl;
	cin >> begin_hours >> begin_min >> begin_sec;
	cout << "Time to finish using the scooter h,min,sec" << endl;
	cin >> end_hours >> end_min >> end_sec;
	double begin_tmp = begin_hours * 60 + begin_min + begin_sec / 60;
	double end_tmp = end_hours * 60 + end_min + end_se;
	double tmp = end_tmp - begin_tmp;
	cout << "The cost of the trip " << tmp * 2 << " UAH" << endl;
	return 0;
}