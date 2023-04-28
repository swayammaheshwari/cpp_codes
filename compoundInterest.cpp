#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double principle, rate, time;
    cin >> principle >> rate >> time;

    // Calculate amount using compound interest formula
    double amount = principle * pow((1 + rate / 100), time);

    // Print result with one decimal point precision
    cout << fixed << setprecision(1) << amount << endl;

    return 0;
}