#include <algorithm>

#include "libPalindrome.h"

static std::string removeSpaces(std::string inputString);
static std::string lower(std::string inputString);

bool isPalindrome(std::string inputString)
{
    bool result = true;
    inputString = removeSpaces(inputString);
    inputString = lower(inputString);

    uint32_t max_char = inputString.length() - 1;
    uint32_t mid = inputString.length() / 2;

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

static std::string removeSpaces(std::string inputString)
{
    std::string::iterator end_pos = std::remove(inputString.begin(), inputString.end(), ' ');
    inputString.erase(end_pos, inputString.end());

    return inputString;
}

static std::string lower(std::string inputString)
{
    char result[inputString.length() + 1] = { 0 };
    uint32_t pos = 0;
    for(char& c: inputString)
    {
        result[pos] = std::tolower(c);
        ++pos;
    }
    result[pos] = '\0';
    return std::string(result);
}
