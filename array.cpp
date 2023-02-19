#include <bits/stdc++.h>
using namespace std;

int maxAndMin(int n, int arr[]){
    
    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for (int i = 0; i <n; i++)
    {
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
        
    }
    cout<<maxNo<<endl;
    cout<<minNo<<endl;
    return 0;
    
}

int linearSearch(int n,int arr[]){
    int key,flag=0;
    cin>>key;

    for (int i = 0; i <=n; i++)
    {
        if (key==arr[i])
        {
           cout<<"at index: "<<i;
           flag=1;
        }
    }
    if(flag==0){
        cout<<"not found";
    }
}

int binarySearch(int n,int arr[]){
    int key;
    cin>>key;
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid = (s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int arrayChallenges_max_till_i(int n, int arr[]){
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx,arr[i]);
        cout<<mx<<endl;
    }  
}

//number of subarray = nc2 + n

int sumOfAllSubarray(int n, int arr[]){
    int current = 0;
    for (int i = 0; i < n; i++)
    {
        current = 0;
        for (int j = i; j < n; j++)
        {
            current += arr[j];
            cout<<current<<endl;
        }    
    }  
}

int max_subarray_length(int n, int a[]){
    int ans = 2;
    int pd = a[1]-a[0];
    int j=2;
    int cur = 2;

    while(j<n){
        if(pd == a[j]-a[j-1]){
            cur++;
        }else{
            pd = a[j] - a[j-1];
            cur = 2;
        }
        ans = max(ans,cur);
        j++;
    }
    cout<<ans<<endl; 
}

int b(int n, int arr[] ){
    int key;
    cin>>key;
}

int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    // maxAndMin(n,arr);
    // linearSearch(n,arr);
    // cout<<binarySearch(n,arr);
    // arrayChallenges_max_till_i(n,arr);
    // sumOfAllSubarray(n,arr);
    // max_subarray_length(n,arr);
    return 0;
}