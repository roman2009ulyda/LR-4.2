#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(7) << "y" << "    |" << endl;
	cout << "----------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A =abs(9*pow(x,3)+2);
		if (x < 4)
			B = 3*pow(x,5)-pow(x,3)+2*x-1;
		else
			if (x >= 7)
				B = log10(2*pow(x,-1)+exp(3*x+1));
			else
				B =atan((x-2)/3);
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;
	return 0;
}
