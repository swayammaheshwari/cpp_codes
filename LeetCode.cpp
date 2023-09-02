#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        if (x == 0)
        {
            return 0; // Special case for input being 0
        }

        bool isNegative = x < 0;
        if (isNegative)
        {
            x = abs(x); // Convert negative input to positive using abs function
        }

        int reversed = 0;
        while (x > 0)
        {
            int k = x % 10;

            // Check for overflow before performing the multiplication
            if (reversed > (INT_MAX - k) / 10)
            {
                return 0; // Return 0 for overflow
            }

            reversed = reversed * 10 + k;
            x = x / 10;
        }

        return isNegative ? -reversed : reversed;
    }
};

int main()
{
    Solution obj;
    cout << obj.reverse(-1534236469);

    return 0;
}
