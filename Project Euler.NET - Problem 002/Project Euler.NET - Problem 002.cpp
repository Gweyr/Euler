#include <iostream>

const int LIMIT = 4000000;

int main(int argc, char *argv[])
{
    int LEFT = 1, CENTER = 2, RIGHT = 3, SUM = 0;

    while (LEFT <= LIMIT)
    {
        if (LEFT % 2 == 0)
            SUM += LEFT;

        RIGHT += CENTER;
        CENTER += LEFT;
        LEFT = RIGHT - CENTER;
    }

    std::cout << SUM << std::endl;

    return 0;
}