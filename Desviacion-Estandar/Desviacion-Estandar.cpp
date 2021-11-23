#include <cmath>
#include <iostream>
using namespace std;

float StandardDesv(float cal[]);
float HigherCal(float cal[]);

int main()
{
	float cal[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter the " << i + 1 << " number:";
		cin >> cal[i];
	}
	cout << "Higher Calification = " << HigherCal(cal);
	cout << "Standard Deviation = " << StandardDesv(cal);
}









