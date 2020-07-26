#include <iostream>
#include <cmath>

const int LIMIT = 1000;

int main(int argc, char *argv[])
{
    for (int A = 1; A <= LIMIT; A++)
    {
        for (int B = 1; B <= (LIMIT - A); B++)
        {
            for (int C = 1; C <= (LIMIT - A - B); C++)
            {
                if ((pow(A, 2) + pow(B, 2)) == pow(C, 2) && (A + B + C) == LIMIT && (A != B && B != C))
                {
                    std::cout << A * B * C << std::endl;

                    return EXIT_SUCCESS;
                }
            }
        }
    }

    return EXIT_FAILURE;
}