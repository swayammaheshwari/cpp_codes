#include <bits/stdc++.h> 
#include <math.h> 
using namespace std;

int reverseTheNumber(int n){
    int reverse = 0;
    while(n){
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n=n/10;
    }
    cout<<reverse;
}

int sumOfDigit(int n){
        int sum = 0;
        while(n!=0)
        {
            int r = n%10;
            sum+= r;
            n /= 10;
        }
        cout<<sum<<endl;
}

int armstrongNumber(int n){
    float sum=0;
    int original = n;
    while (n>0)
    {
        int lastdigit=n%10;
        sum += pow(lastdigit,3);
        n=n/10;
    }

    if(sum == original){
        cout<<"yes, an Armstrong no.";
    }else{
        cout<<"No";
    }
    return 0;   
}

int fibbonacci(int n){
    int t1=0,t2=1,next;
    for (int i = 0; i <=n; i++)
    {
        cout<<t1<<" ";
        next = t1+t2;
        t1 = t2;
        t2 = next;
    }  
}

int factorial(int n){
    // cout<<n<<" fgf"<<endl;
    int fac=1;
    for (int i = 2; i <=n; i++)
    {
        fac *=i;
    }
    // cout<<fac;
    return fac;
}
int nCr(int n,int r){
// FIND THE PROBLEM IF VISITED AGAIN BY UNCODE cout<<fac;
    // int a = factorial(4);
    // int b = factorial(r);
    // int s = factorial(n-r);
    // int ans = a/(b*s);
    int ans = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<ans;
    // return ans;
}

int pascalTriangle(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
        }
        cout<<endl;
    }
}

int sumOfn(int n){

}

int pythogorianTriplet(int a,int b,int c){

}

int binaryToDec(int n){
    
}
int octalToDec(int n){

}
int hexadecimalToDec(int n){

}

int decToBinary(int n){

}
int decToOctal(int n){

}
int decToHexadecimal(int n){

}


int main()
{
    reverseTheNumber(1244);
    sumOfDigit(345);
    // armstrongNumber(153);
    // fibbonacci(10);
    // cout<<factorial(4);
    // nCr(5,2);
    // pascalTriangle(5);
    return 0;
}