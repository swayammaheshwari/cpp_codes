#include <bits/stdc++.h>
using namespace std;

class MyClass
{
public:
    int a, b = 123456789;
};

class MyClass2
{
public:
    int k = 77;
};

int main()
{
    MyClass obj;
    cout << obj.b << endl;

    MyClass2 obj2;
    cout << obj2.k;
    return 0;
}