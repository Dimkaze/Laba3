#include <iostream>
#include <cmath>
double min(double x, double y)
{
	if (x < y)
	{
		return x;
	}
	return y;
}
double max(double x, double y)
{
	if (x > y)
	{
		return x;
	}
	return y;
}
int laba3_4(double x, double y, double z)
{
	return std::abs(min(x, y) - max(y, z)) / 2;
}
int main()
{
	std::cout << laba3_4(2, 3, 4);
}