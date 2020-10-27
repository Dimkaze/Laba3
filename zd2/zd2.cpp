#include <iostream>
#include <cmath>
void laba3_zd2(double x, double y, double x1, double y1)
{
	int c = std::sqrt(std::pow(x, 2) + std::pow(y, 2));
	int c1 = std::sqrt(std::pow(x1, 2) + std::pow(y1, 2));
	if (c > c1) {
		std::cout << " Dot A farther than B" << std::endl;
	}
	if (c1 > c) {
		std::cout << " Dot B farther than A" << std::endl;
	}
	if (c1 == c) {
		std::cout << "A = B" << std::endl;
	}
}
int main()
{
	    double x; 
	    std::cout << "\nEnter x : ";
	    std::cin >> x;
		double y;
		std::cout << "Enter y : ";
		std::cin >> y;
		double x1;
		std::cout << "Enter x1 : ";
		std::cin >> x1;
		double y1;
		std::cout << "Enter y1 : ";
		std::cin >> y1;
		laba3_zd2(x, y, x1, y1);
}