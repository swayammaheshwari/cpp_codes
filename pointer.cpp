#include <bits/stdc++.h>
using namespace std;

int pointer_arithmetic(){
    int a = 10;
    int *aptr = &a;
    cout<<aptr<<endl;
    aptr++;
    cout<<aptr<<endl;
}

int array_as_pointer(){
    int arr[] = {10,20,30};
    cout<<*arr<<endl;

    int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout<<*ptr<<endl;
        cout<<*(arr+i)<<endl;
        ptr++;
    }
}

int pointr_to_pointer(){
    int a = 10;
    int *p;
    p = &a;

    cout<<*p<<endl;

    int **q=&p;

    cout<<*q<<endl;
    cout<<**q<<endl;
}

int pointer(){

}

int main()
{
    pointer_arithmetic();
    array_as_pointer();
    pointr_to_pointer();
    
    return 0;
}