#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int pos){    
    return((n & (1<<pos)) !=0);
}

int setBit(int n, int pos){ // set bit-> '1'
    return(n | (1<<pos));   // unset bit -> '0'
}

int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return(n & mask);
}

int updateBit(int n, int pos, int value){
    int mask = ~(1<<pos);
    n = (n & mask);
    return(n | (value<<pos));
}

int isPowerOf2(int n){
    return n && !(n & n-1);
}

int countOfnumberOfOnce(int n){
    int count = 0;
    while (n)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}

int subsetOfSet(int arr[], int n){
    for (int i = 0; i < (1<<n); i++)  //1<<n = 2^n
    {
        for (int j = 0; j < n; j++)
        {
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}

int main()
{  
    int arr[4] = {1,2,3,4};
    // cout<<getBit(5,2)<<endl;
    // cout<<setBit(5,1)<<endl; //converting deci to binary
    // cout<<clearBit(5,2)<<endl;
    // cout<<updateBit(5,1,1)<<endl;  //7
    // cout<<isPowerOf2(16)<<endl;
    // cout<<countOfnumberOfOnce(19)<<endl; //no, of one in no.
    cout<<subsetOfSet(arr,4);
 
    return 0;
} 
