#include <bits/stdc++.h>
using namespace std;

int electricBill(string s, int n)
{
    int sum;

    if (n <= 100)
    {
        sum = n * 60;
    }
    else if (n > 100 && n <= 200)
    {
        sum = n * 80;
    }
    else
    {
        sum = n * 90;
    }
    int totalSum = sum / 100 + 50;

    if (totalSum > 300)
    {
        totalSum = totalSum + (totalSum * 15) / 100;
    }
    cout << s << " your total amount is: " << totalSum;

    return 0;
}

int power(float base, int exponent)
{
    int result = 1;

    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }
    cout << result;
}

int arrayWithLargestOut(int n)
{
    int a[n], b[n];
    int bigA = 0, bigB = 0, sumA = 0, sumB = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > bigA)
        {
            bigA = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] > bigB)
        {
            bigB = b[i];
        }
    }
    cout << "largest no: " << bigA << " " << bigB << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == bigA)
        {
            a[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == bigB)
        {
            b[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        sumA += a[i];
        sumB += b[i];
    }
    cout << "Sum of arrays after deleting largest numbers: " << sumA << " " << sumB;
    return 0;
}

int main()
{
    // electricBill("swayam",130);
    // power(2,3);
    arrayWithLargestOut(5);

    return 0;
}