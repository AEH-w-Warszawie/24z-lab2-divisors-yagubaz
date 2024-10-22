#include <vector>
#include <cmath>  // Needed for sqrt function
#include "Divisors.h"

std::vector<unsigned long long> divisors(unsigned long long number)
{
    std::vector<unsigned long long> result;
    for (unsigned long long i = 1; i <= std::sqrt(number); ++i)
    {
        // If 'i' is a divisor
        if (number % i == 0)
        {
            result.push_back(i); // Add 'i' as a divisor

            // Add the pair divisor (number / i) if it's different from 'i'
            if (i != number / i)
            {
                result.push_back(number / i);
            }
        }
    }
    return result;
}