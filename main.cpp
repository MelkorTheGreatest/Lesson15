

#include <iostream>
using namespace std;

int main()
{

}

bool IsLeapYear(int year) 
{
	bool res = false;
	if ((year % 4 == 0 && year % 100 != 0)||(year % 4 == 0 && year % 400 == 0))
	{
		res = true;
	}
	return res;
}

int SecondsInMinute(int time)
{
	return time * 60;
}

void LaterInYear(int mounth1, int day1 , int mounth2 , int day2) 
{
	if (mounth1 < mounth2)
	{
		cout << mounth2 << "." << day2;
	}
	else if (mounth1 > mounth2)
	{
		cout << mounth1 << "." << day1;
	}
	else if (mounth1 == mounth2)
	{
		if (day1 < day 2)
		{
			cout << mounth2 << "." << day2;
		}
		else
		{
			cout << mounth1 << "." << day1;
		}
	}
}

