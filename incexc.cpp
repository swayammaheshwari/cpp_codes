#include <bits/stdc++.h>
using namespace std;
//inclusice exclusive
int divisible(int n,int a, int b){
    int c1=n/a;
    int c2 = n/b;
    int c3=n/(a*b);

    return c1+c2-c3;
}

GCD_HCF(int a, int b){
    //Euclid Algorithm to find GCD (greatest common divisor) or HCF
    while(b!=0){
        int rem = a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main()
{
    // cout<<divisible(40,5,7)<<endl;
    cout<<GCD_HCF(42,24)<<endl;
    return 0;
}