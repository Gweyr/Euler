#include <iostream>

const int CONST = 10001;

int main(int argc, char *argv[])
{
    int NUMBER = 0;

    for (int i = 1; true; i++)
    {
        int k = 0;

        if (i > 2 && i % 2 == 0)
        {
            continue;
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    k++;
                }
            }
        }

        if (k == 2)
        {
            NUMBER++;

            if (NUMBER == CONST)
            {
                std::cout << NUMBER << "==> " << i << std::endl;

                break;
            }
        }
    }
}
