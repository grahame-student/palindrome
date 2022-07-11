#include "libPalindrome.h"

bool isPalindrome(std::string inputString)
{
    bool     result   = true;
    uint32_t max_char = inputString.length() - 1;
    uint32_t mid      = inputString.length() / 2;

    for (uint32_t i = 0; i < mid; ++i)
    {
        if (inputString[i] != inputString[(max_char - i)])
        {
            result = false;
            break;
        }
    }

    return result;
}
