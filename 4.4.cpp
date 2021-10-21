// Laboratorna 4.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Манькевич Дар'я
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 10

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;



	while (x <= xk)
	{
		if (x <= -8 - R)
			y = R;
		else
			if ((-8 - R < x) && (x <= -8 + R))
				y = R - sqrt(R * R - ((x + 8) * (x + 8)));
			else
				if (((-8 + R) < x) && (x <= (-4)))
					y = R;
				else
					if (-4 < x && x <= 2)
						y = (((-1 - R) * (x + 4)) / 6) + R;
					else
						y = x - 3;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}