#include<iostream>
#include<string>
using namespace std;

class Complex{
    int real;
    int img;
public:
    // Constructor
    Complex(int r,int i){
        this->real= r;
        this->img = i;
    }
    void showNum(){
        cout<<"Real : "<<real <<" + "<<"Imagine : "<<img<<"i"<<endl;
    }

    Complex operator +(Complex &c2){
        int resReal = this->real+ c2.real;
        int resIMg = this->img + c2.img;

        Complex c3(resReal,resIMg);
        return c3;
    }

    Complex operator -(Complex &c2){
        int resReal = this->real- c2.real;
        int resIMg = this->img - c2.img;

        Complex c3(resReal,resIMg);
        return c3;
    }

};

int main(){
    Complex c1(1,2);
    Complex c2(3,4);

    Complex c3 = c1+c2;
    c3.showNum();
    Complex c4 = c1 - c2;
    c4.showNum();
}