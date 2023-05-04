#include <iostream>
using namespace std;
int main()
{
	int ml1, ml2, ml3, bestM;
	float salary1, salary2, salary3;

	cout << "Input the level of 1st manager:\n";
	cin >> ml1;
	cout << "Input the level of 2nd manager:\n";
	cin >> ml2;
	cout << "Input the level of 3d manager:\n";
	cin >> ml3;
	if (ml1 < 500)
	{
		salary1 = 200 + ml1 * 0.003;
	}
	else if ((ml1 >= 500) && (ml1 < 1000))
	{
		salary1 = 200 + ml1 * 0.005;
	}
	else
	{
		salary1 = 200 + ml1 * 0.008;
	}
	if (ml2 < 500)
	{
		salary2 = 200 + ml2 * 0.003;
	}
	else if ((ml1 >= 500) && (ml2 < 1000))
	{
		salary2 = 200 + ml2 * 0.005;
	}
	else
	{
		salary2 = 200 + ml2 * 0.008;
	}
	if (ml3 < 500)
	{
		salary3 = 200 + ml3 * 0.003;
	}
	else if ((ml1 >= 500) && (ml3 < 1000))
	{
		salary3 = 200 + ml3 * 0.005;
	}
	else
	{
		salary3 = 200 + ml3 * 0.008;
	}
	if (ml1 > ml2)
	{
		bestM = 1;
	}
	else
	{
		bestM = 2;
	}