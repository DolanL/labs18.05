#include <iostream>


void pow(int x, int y) {
	int result = 1;
	if (x == 2) {
		std::cout << (x << y-1);
		return;
	}
	for (int i = 0; i < y; i++)
		result = result * x;
	std::cout << result << std::endl;
}

int main() {
	std::cout << "Введите число: ";
	int x;
	std::cin >> x;
	std::cout << "Введите степень: ";
	int y;
	std::cin >> y;
	pow(x, y);
}
