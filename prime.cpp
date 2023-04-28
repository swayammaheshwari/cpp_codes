#include <bits/stdc++.h>
using namespace std;

int primeOrNot(int n)
{
    int flag = 0;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Non prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Prime";
    }
}

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int uptoPrime(int n)
{
    return 0;
}

int rangePrime(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        int j;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}

int main()
{
    // primeOrNot(41);

    // int a,b;
    // cin>>a>>b;
    // for (int i = a; i <=b; i++){
    //     if(isPrime(i)){
    //         cout<<i<<endl;
    //     }
    // }

    // rangePrime(3,25);

    return 0;
}