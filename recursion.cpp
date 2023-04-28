#include <bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n == 0)
        return 0;
    
    int prevSum = sum(n-1);
    return n + prevSum;
} 

int power(int n, int p){
    if(p == 0)
        return 1;

    int prevPower = power(n,p-1);
    return n*prevPower;
}
int factorial(int n){
    if(n== 0)   
        return 1;
        
    int prevFactorial = factorial(n-1);
    return n*prevFactorial;
}

int fibonacci(int n){
    if(n == 0 || n == 1)
        return n;

    return fibonacci(n-1)+ fibonacci(n-2);
}
bool sortedArray(int arr[], int n){
    if(n == 1)
        return true;

   bool restArray = sortedArray(arr+1, n-1);
   return (arr[0] < arr[1] && restArray);

}

void dec(int n){
    if(n==0)
        return;

    cout<<n<<endl;
    dec(n-1);
}

// int inc(int n,int i){
//     if(i == n+1 )
//         return n;

//     cout<<i<<endl;

//     inc(n,i+1);
// }
void inc(int n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}

int firstOccurance(int arr[], int n, int i, int key){
    if(i == n)
        return -1;

    if(arr[i] == key)
        return i;

    return firstOccurance(arr, n, i+1, key);
}

int lastOccurance(int arr[], int n, int i, int key){
    if(i == n)
        return -1;

    int restArray = lastOccurance(arr, n, i+1, key);
    if(restArray!=-1)
        return restArray;

    if(arr[i] == key)
        return i;

    return -1;
}

int main()
{
    int arr[] = {1,2,3,2,5};
    // cout<<sum(4)<<endl;
    // cout<<power(4,3)<<endl;
    // cout<<factorial(4)<<endl;
    // cout<<fibonacci(5)<<endl;
    // cout<<sortedArray(arr,5)<<endl;
    // dec(5);
    // inc(5,1);
    // inc(5);
    cout<<firstOccurance(arr,5,0,2)<<endl;
    cout<<lastOccurance(arr,5,0,2)<<endl;

    return 0;
}