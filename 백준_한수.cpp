#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int AP(int number)
{
	int count = 99;
	if (number < 100)
		return number;
	else if (number >= 100 && number <= 110)
		return count;

	char cols[10];
	for (int i = 111; i < number; i++)
	{
		sprintf(cols, "%d", i);
		int num1 = cols[0] - cols[1];
		int num2 = cols[1] - cols[2];
		if (num1 == num2) count++;
	}
	return count;
}

int main()
{
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	cout << AP(111) << endl;
	cout << AP(1) << endl;
	cout << AP(215) << endl;
	cout << AP(1000) << endl;

	return 0;
}