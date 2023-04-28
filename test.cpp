#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int FindLeastCommonMultiple(int x, int y, int z)
{
    return lcm(lcm(x, y), z);
}

int main()
{
    int x, y, z;
    cout << "Enter three positive integers: ";
    cin >> x >> y >> z;
    int result = FindLeastCommonMultiple(x, y, z);
    cout << "Least common multiple: " << result << endl;
    return 0;
}
