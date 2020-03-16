#include <iostream>

const int LIMIT = 1000;

int main(int argc, char *argv[])
{
	int SUM = 0;

	for (int i = 0; i < LIMIT; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			SUM += i;
		}
	}

	std::cout << SUM << std::endl;

	return 0;
}