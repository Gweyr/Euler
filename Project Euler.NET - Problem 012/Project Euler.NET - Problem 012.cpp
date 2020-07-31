#include <iostream>
#include <cmath>

const int DIMENSION = 3;

int POSITION(int n, int j, int k, int m)
{
    int INIT = n;

    for (int i = m - 1; i >= 0; i--)
    {
        const int DIVISOR = INIT / pow(m, i);

        INIT = INIT - DIVISOR * pow(m, i);

        if (j == i)
        {
            return DIVISOR;
        }
    }

    return 0;
}

int main(int argc, char *argv[])
{
    int A[DIMENSION] = {0}, COMBINATION = pow(DIMENSION, DIMENSION), COUNTER = 0;

    int **SWAP = new int *[COMBINATION];

    for (int i = 0; i < COMBINATION; i++)
    {
        SWAP[i] = new int[COMBINATION];
    }

    for (int i = 2; COUNTER < DIMENSION; i++)
    {
        int ASSERT = 0;

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                ASSERT++;
            }
        }

        if (ASSERT <= 2)
        {
            A[COUNTER] = i;

            COUNTER++;
        }

        ASSERT = 0;
    }

    for (int i = 0; i < pow(DIMENSION, DIMENSION); i++)
    {
        for (int j = 0; j < DIMENSION; j++)
        {
            const int INDEX = POSITION(i, j, COMBINATION, DIMENSION);

            SWAP[i][j] = A[INDEX];
        }
    }

    for (int i = 0; i < pow(DIMENSION, DIMENSION); i++)
    {
        for (int j = 0; j < DIMENSION; j++)
        {
            std::cout << SWAP[i][j] << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}