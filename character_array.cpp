#include <bits/stdc++.h>
using namespace std;

int declare(char arr[100]){
    int i=0;
    while(arr[i] != '\0'){
        cout<<arr[i]<<" ";
        i++;
    }
}

int check_palindrome(int n, char arr[]){
    // char arr[n+1];
   
    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != arr[n-1-i]){
            check = 0;
            break;
        }  
    }
    if(check)
        cout<<"word is a plindrome"<<endl;
    else    
        cout<<"word is not a plindrome"<<endl; 
}

int largest_word_in_sentance(int n, char arr[]){
    int i=0;
    int currentLen = 0, maxLen = 0;
    int st = 0, maxSt = 0;

    while(1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(currentLen >maxLen){
                maxLen = currentLen;
                maxSt = st;
            }
            currentLen = 0;
            st = i+1;
        }else{
            currentLen++;
        }

        if(arr[i] == '\0')
            break;

        i++;
    }
    cout<<maxLen<<endl;
    for (int i = 0; i < maxLen; i++)
    {
        cout<<arr[i+maxSt];
    }
}


int main()
{
    //char arr[n+1]; for '/0'
    // char c[] = "apple";
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();

    // declare(c);
    // check_palindrome(n,arr);
    largest_word_in_sentance(n,arr);
 
    return 0;
}