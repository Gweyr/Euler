#include <iostream>

const int CONST = 100;

int main(int argc, char *argv[])
{
    int SUM_OF_SQUARE = 0, SUM = 0;

    for (int i = 0; i <= CONST; i++)
        SUM += i;

    for (int i = 0; i <= CONST; i++)
        SUM_OF_SQUARE += i * i;

    std::cout << SUM * SUM - SUM_OF_SQUARE << std::endl;
}
