#include <iostream>
#include <vector>
#include "constants.h"

using namespace myConstants;

std::vector <int> getNumber()
{
    std::cout << "Enter of the number:" << std::endl;
    std::vector <int> vectorNumber{myConstants::countCyclre};
    for (int i = 0; i < countCyclre; i++)
    {
        int x;
        std::cin >> x;
        if (x > 0)
        {
            vectorNumber[i] = x;
        }
        else
        {
            std::cout << "Хуйня, давай по новой!" << std::endl;
            i = i - 1;
        }
    }
    return vectorNumber;
}

int minNumber(const std::vector <int>& v)
{
    int x = v[0];
    //v[9] = 1; // conts - read-only
    for (int i = 1; i < myConstants::countCyclre; i++)
    {
        if(x > v[i])
        {
            x = v[i];
        }
    }
    return x;
}

int maxNumber(const std::vector <int>& v)
{
    int x = v[0];
    for (int i = 1; i < countCyclre; i++)
    {
        if(x < v[i])
        {
            x = v[i];
        }
    }
    return x;
}

int main()
{
    std::cout << "Hello, this programs of the return min number!" << std::endl;

    std::vector <int> vectorNumber = getNumber();

    int minX = minNumber(vectorNumber);
    std::cout << "min number: " << minX << std::endl;

    int maxX = maxNumber(vectorNumber);
    std::cout << "max number: " << maxX << std::endl;

    std::cout << "vector size: " << vectorNumber.size() << ' ';
    for (auto x : vectorNumber)
    {
        std::cout << "vector: " << x << ' ';
    }

    return 0;
}
