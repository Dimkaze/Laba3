#include "Util.h"
double xz(double x, double y, BP f1, BP f2, BP f3, F f)
{
	if (f1(x, y))
	{
		return std::cbrt(std::abs(f(x) - y)) + std::tan(pow(x, 2));;
	}
	if (f2(x, y))
	{
		return std::pow(y, 3) - std::pow(f(x), 3) + std::cos(f(x));
	}
	if (f3(x, y))
	{
		return std::pow((f(x) + y), 2) + std::pow(x, 3);
	}
}
double ex()
{
	std::cout << "1 - x^2 , 2 - sh(x) , 3 - e^x ;" << std::endl;
	int p;
	std::cin >> p;
	double x;
	std::cout << " Enter x" << std::endl;
	std::cin >> x;
	double y;
	std::cout << " Enter y" << std::endl;
	std::cin >> y;
	switch (p)
	{
	case 1:
	{
		return xz(x, y, f1, f2, f3, sh_x);
	}
	case 2:
	{
		return xz(x, y, f1, f2, f3, pow_x);
	}
	case 3:
	{
		return xz(x, y, f1, f2, f3, exp_x);
	}
	default:
		return 0;
	}
}

