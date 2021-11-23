#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

float standard_desv(float cal[]);
float HigherCal(float cal[]);
vector<vector<float>> lowerCal(float cal[], float min);


int main()
{
	float cal[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter the " << i + 1 << " number: ";
		cin >> cal[i];
		system("cls");
	}
	const float higher_cal = HigherCal(cal);
	const float standard_dev = standard_desv(cal);
	const float two_deviation = higher_cal - (standard_dev * 2);
	const vector<vector<float>> Lower = lowerCal(cal,two_deviation);
	
	cout << "Califications: [ ";
	for (float cal1 : cal)
		cout << cal1 << " ";
	cout << " ]\n";

	cout << "Higher Calification = " << higher_cal << endl;
	cout << "Standard Deviation = " << standard_dev << endl;
	cout << "Two Standard Deviation = " << two_deviation <<"\n\n";
	cout << "Those numbers that have Two standard Deviation are: ";

	for (auto lower : Lower[0])
		cout << lower << " ";

	cout << "\n\nPRESS ENTER TO SHOW THE NEW CURVE....\n";
	system("Pause");
	
	for ( auto final : Lower[1])
		cout << final << " ";
}

float standard_desv(float cal[])
{
	float sum = 0.0, standard_desv = 0.0;
	for (int i = 0; i < 10; i++)
		sum += cal[i];

	const float average = sum / 10;

	for (int i = 0; i < 10; i++)
		standard_desv += pow(cal[i] - average, 2);

	return sqrt(standard_desv / 10);
}

float HigherCal(float cal[])
{
	float maxCal = cal[0];

	for (int i = 0; i < 10; i++)
		maxCal < cal[i] ? maxCal = cal[i] : maxCal;

	return maxCal;
}

vector<vector<float>> lowerCal(float cal[], float min)
{
	vector<vector<float>> numbers;
	vector<float> low;
	vector<float> final_cal;
	
	for(int i = 0; i < 10; i ++)
	{
		if (cal[i] < trunc(min))
		{
			low.push_back(cal[i]);
			final_cal.push_back(cal[i] + 25);
		}
		else
			final_cal.push_back(cal[i]);
			
	}
	numbers.push_back(low);
	numbers.push_back(final_cal);

	return numbers;
}
