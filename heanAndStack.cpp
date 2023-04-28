#include <bits/stdc++.h>
using namespace std;
//stack: fixed memory, local variable, automatic allocation and dea.
//heap: dynamic memory , global variable, manually allocation and dea.

//memory leak: when allocate mem in heap but dont delete it.

int main()
{
    int a = 10; // stored in stack
    int *p = new int(); //allocate memory in heap
    *p = 10;
    delete(p);  //deallocate memory
                //dangling pointer p will remain in stack
    p = new int[4];  // allocate memory in heap for array

    delete[]p; //deallocate memory for array 
    p=NULL;
 
    return 0;
}
