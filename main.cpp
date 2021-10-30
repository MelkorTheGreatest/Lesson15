

#include <iostream>

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
