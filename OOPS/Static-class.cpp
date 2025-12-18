#include<iostream>
using namespace std;

class Example{
public:
    static int c;

};

int Example::c = 0;

int main(){
    Example c1;
    Example c2;
    Example c3;

    cout<<c1.c++<<endl;
    cout<<c2.c++<<endl;
    cout<<c3.c++<<endl;
}