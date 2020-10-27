#include <iostream>
#include <cmath>
using BP = bool(*)(double);
using UO = double(*)(double, double);
bool fn1(double z)
{
	return z < 1;
}
bool fn2(double z)
{
	return z >= 1;
}
double division(double z, double b)
{
	return z / b;
}
double computation(double z, double b)
{
	return std::sqrt(std::pow(z * b, 3));
}

void laba3_3_y(double z, double b, BP fn1, BP fn2, UO division, UO computation)
{
	if (fn1(z)) {
		std::cout << -3.14159265 + std::pow(std::cos(std::pow(division(z, b), 3)), 2) + std::pow(std::sin(std::pow(division(z, b), 2)), 3) << std::endl;
	}
	if (fn2(z)) {
		std::cout << -3.14159265 + std::pow(std::cos(std::pow(computation(z, b), 3)), 2) + std::pow(std::sin(std::pow(computation(z, b), 2)), 3) << std::endl;
	}
}
int main()
{
	laba3_3_y(2, 4, fn1 , fn2, division, computation);
}
