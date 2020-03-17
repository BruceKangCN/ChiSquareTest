#include <iostream>
#include <Windows.h>

#include <boost/math/distributions/chi_squared.hpp>

int main()
{
	boost::math::chi_squared chi(1);
	double a1, a2, b1, b2;

	std::cout << "Enter data: a1, a2, b1, b2" << std::endl;
	std::cin >> a1 >> a2 >> b1 >> b2;

	double s = a1 + a2 + b1 + b2;
	double K = s * (a1 * b2 - a2 * b1) * (a1 * b2 - a2 * b1) / (a1 + a2) / (b1 + b2) / (a1 + b1) / (a2 + b2);
	double P = boost::math::cdf(chi, K);

	std::cout << std::endl
		<< "K2  ==\t" << K << std::endl
		<< "P() ==\t" << P << std::endl;

	system("pause");
	return 0;
}