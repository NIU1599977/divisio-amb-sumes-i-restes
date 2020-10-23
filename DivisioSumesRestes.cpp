
#include <iostream>
#include <math.h>

using namespace std;

int quocient(int dividend, int divisor)
{
	int p = dividend, n = dividend, i, d;

	if ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor > 0))
	{
		for (i = 0; i < divisor; i++)
		{
			p -= divisor;
		}
		return p;
	}
	else
	{
		if (dividend < 0)
		{
			for (d = 0; d < divisor; d++)
			{
				n += divisor;
			}
			return n;
		}
		else
		{
			for (d = 0; d > divisor; d--)
			{
				n += divisor;
			}
			return n;
		}

	}
}

int main()
{
	int mdividend, mdivisor, resultat;

	// Input

	cout << "Introdueix dividend i divisor: "; cin >> mdividend >> mdivisor; cout << endl;

	if (mdivisor == 0)
		cout << "Error: Divisio per zero" << endl;
	else
	{
		resultat = quocient(mdividend, mdivisor);
		cout << mdividend << " : " << mdivisor << " = " << resultat << endl;
	}
	return (0);
}
