
#include <iostream>
#include <math.h>

using namespace std;

int quocient(int dividend, int divisor)
{
	int p, n, i = 0, d = 0;

	if ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
	{
		for (p = dividend; p > 0; p -= divisor)
		{
			i++;
		}
		return i;
	}
	else
	{
		if (dividend < 0)
		{
			for (n = dividend; n < 0; n += divisor)
			{
				d--;
			}
			return d;
		}
		else
		{
			if (dividend == 0)
			{
			    int zero = 0;
			    return zero;
			}
			else
			{
			    for (n = dividend; n > 0; n += divisor)
			    {
				    d--;
				}
			    return d;
			}
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
