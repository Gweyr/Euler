#include <iostream>

long int NUMBER = 600851475143;

int main(int argc, char *argv[])
{
    int MAX = 1, ITERATOR = 1;

    while (NUMBER > 1)
    {
        if (NUMBER % ITERATOR == 0)
        {
            if (ITERATOR > MAX)
                MAX = ITERATOR;

            NUMBER /= ITERATOR;

            ITERATOR = 1;
        }

        ITERATOR++;
    }

    std::cout << MAX << std::endl;

    return 0;
}