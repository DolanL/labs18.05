#include <iostream>


int main() {
	int x, y, z;
	std::cout << "Введите x, y, z: ";
	std::cin >> x >> y >> z;
	if ((x < y & x > z) || (x > y & x < z))
		std::cout << x << std::endl;
	if ((y < x & y > z) || (y > x & y < z))
		std::cout << y << std::endl;
	if ((z < y & z > x) || (z > y & z < x))
		std::cout << z << std::endl;
	return 0;
}
