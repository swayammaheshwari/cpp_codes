#include <bits/stdc++.h>
using namespace std;

int primeSieve(int n){
    int prime[100]={0};

    for (int i = 2; i <=n; i++)
    {
        if(prime[i] == 0){
            for (int j = i*i; j <=n; j+=i)
            {
                prime[j]=1;
            }  
        }
    }
    for (int i = 2; i <=n; i++)
    {   
        if(prime[i] == 0)
            cout<<i<<" ";
    }
    cout<<endl;
}

int primeFactors(int n){
    int spf[100]={0};
    for (int i = 2; i <= n; i++)
    {
        spf[i]=i;
    }
    for (int i = 2; i <=n; i++)
    {
        if(spf[i] == i){
            for (int j = 0; j <=n; j+=i)
            {
                if(spf[j]==j)
                    spf[j]=i;
            }     
        }
    }
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
    
}

int main()
{
    // primeSieve(50);   
    // primeFactors(42);
    return 0;
}