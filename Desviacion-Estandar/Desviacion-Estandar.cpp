#include <cmath>
#include <iostream>
using namespace std;

float standard_desv(float cal[]);
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
	cout << "Standard Deviation = " << standard_desv(cal);
}

float standard_desv(float cal[])
{
	float sum = 0.0, standardDesv = 0.0;
	for (int i = 0; i < 10; i++)
		sum += cal[i];

	const float average = sum / 10;

	for (int i = 0; i < 10; i++)
		standardDesv += pow(cal[i] - average, 2);

	return sqrt(standardDesv);
}
