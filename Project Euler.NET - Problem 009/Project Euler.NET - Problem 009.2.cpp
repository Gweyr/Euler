#include <iostream>
#include <cmath>

int main(int argc, char *argv[])
{
    for (int A = 1; A < 500; A++)
    {
        float RESULT = ((1000.0 * A) - 500000) / (A - 1000);

        if (RESULT > 0 && (trunc(RESULT) == RESULT))
        {
            std::cout << static_cast<int>(A * (int)RESULT * (1000 - A - RESULT)) << std::endl;

            return EXIT_SUCCESS;
        }
    }

    return EXIT_FAILURE;
}