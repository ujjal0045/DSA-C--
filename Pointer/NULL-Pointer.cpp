#include<iostream>
using namespace std;

int main()
{
    // Create Null Pointer
    int *ptr = NULL;
    cout<<ptr <<endl;
    cout<<"Adress of ptr : "<<&ptr <<endl;
    cout<<*ptr <<endl; // This is fault error after this line no line run
    cout<<"Hello Guys";
    return 0;
}