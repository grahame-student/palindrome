#include "libPalindrome.h"
#include "gtest/gtest.h"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

namespace
{
class TestLibPalindrome : public ::testing::Test
{
    void SetUp() override
    {
    }
};
} // namespace

TEST_F(TestLibPalindrome, isPalindrome_Returnstrue_WhenInputStringIsEmpty)
{
    ASSERT_EQ(isPalindrome(""), true);
}

TEST_F(TestLibPalindrome, isPalindrome_Returnsfalse_WhenInputStringNotPalindromeAndEvenChars)
{
    ASSERT_EQ(isPalindrome("AB"), false);
}

TEST_F(TestLibPalindrome, isPalindrome_Returnsfalse_WhenInputStringNotPalindromeAndOddChars)
{
    ASSERT_EQ(isPalindrome("ABC"), false);
}

TEST_F(TestLibPalindrome, isPalindrome_Returnstrue_WhenInputStringIsPalindromeAndSingleChar)
{
    ASSERT_EQ(isPalindrome("A"), true);
}

TEST_F(TestLibPalindrome, isPalindrome_Returnstrue_WhenInputStringIsPalindromeAndOddChars)
{
    ASSERT_EQ(isPalindrome("OBO"), true);
}

TEST_F(TestLibPalindrome, isPalindrome_Returnstrue_WhenInputStringIsPalindromeAndEvenChars)
{
    ASSERT_EQ(isPalindrome("OBBO"), true);
}

TEST_F(TestLibPalindrome, isPalindrome_Returnstrue_WhenInputStringIsPalindromeAndContainsSpaces)
{
    ASSERT_EQ(isPalindrome("was it a cat i saw"), true);
}

TEST_F(TestLibPalindrome, isPalindrome_Returnstrue_WhenInputStringIsPalindromeAndCharsAreMixedCase)
{
    ASSERT_EQ(isPalindrome("OBBo"), true);
}
