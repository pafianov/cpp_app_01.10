#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float length, consumption, petrol_1, petrol_2, petrol_3, value;
	float cost_petrol_1, cost_petrol_2, cost_petrol_3;
	cout << "Enter the distance: ";
	cin >> length;
	cout << "Enter the fuel consumption per 100 km.: ";
	cin >> consumption;
	cout << "Enter the cost of the first type of petrol: ";
	cin >> petrol_1;
	cout << "Enter the cost of the second type of petrol: ";
	cin >> petrol_2;
	cout << " Enter the cost of the third type of petrol : ";
	cin >> petrol_3;
	cout << "" << endl << endl;
	value = (length / 100) * consumption;
	cost_petrol_1 = value * petrol_1;
	cost_petrol_2 = value * petrol_2;
	cost_petrol_3 = value * petrol_3;
	cout  << "The cost of the first type of fuel: " << cost_petrol_1 << endl
		  << "The cost of the second type of fuel: " << cost_petrol_2 << endl
		  << "The cost of the third type of fuel: "  << cost_petrol_3 << endl << endl;
	return 0;
}