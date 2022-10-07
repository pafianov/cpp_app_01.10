//--------------------------------------------------------------------#
// Task 1. The user enters the distance from the keyboard             |
//		   to the airportand the time it takes to get there.Calculate |
//		   the speed at which he needs to travel.                     |
//--------------------------------------------------------------------#

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x,y;
	cout << "Distanse (km) -> ";
	cin >> x;
	cout << "Time (hour) -> ";
	cin >> y;
	double res = x * y;
	cout << "Speed = " << res << " km/h" << endl;
	return 0;
}