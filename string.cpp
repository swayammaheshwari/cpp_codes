#include <bits/stdc++.h>
using namespace std;

int inputString(){
    string s;
    string str2(5,'5');
    string str3 = "string";
    getline(cin, s); // or cin>>s;

    cout<<'a'-'A'<<endl;   //ascii differnce
    cout<<s<<endl;
    cout<<s[2]<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    cout<<str2.append(str3)<<endl;
    cout<<str2.find("str")<<endl;
    cout<<str2.erase(4,4)<<endl;
    cout<<str2.insert(4,"nstr")<<endl;
    cout<<str2.substr(5,6)<<endl;
    cout<<str2.length()<<endl;
    cout<<str2.compare(str3)<<endl;
    str3.clear();
    if(str3.empty())
        cout<<"string is empty: "<<str3<<endl;
    
    int x = stoi(str2);
    cout<<x+2<<endl;
    cout<<to_string(x) + "2" <<endl;
    sort(str2.begin() , str2.end());
    cout<<str2<<endl;  // lexico graphically
}

int to_all_lowercase_and_uppercase(string s){
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
    }
    cout<<"to uppercase: "<<s<<endl;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
    cout<<"to lowercase: "<<s<<endl;
    //predefine functions
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
}

int max_number(string s){
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;
}

int frequency_of_character(string s){
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i]-'a']++;
    }
    char ans = 'a';
    int maxF = 0;
    for (int i = 0; i < 26; i++)
    {
        if(freq[i] >= maxF){
            maxF = freq[i];
            ans = i+'a';
        }
    } 
    cout<<maxF<<" "<<ans<<endl;
}

int main()
{
    string str = "Strings";
    string str_num = "56734";
    // inputString();
    // to_all_lowercase_and_uppercase(str);
    // max_number(str_num);
    frequency_of_character(str);
 
    return 0;
}