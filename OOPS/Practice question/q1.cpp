#include<iostream>
#include<string>
using namespace std;

class Complex{
    int real;
    int img;

public:
    // Constructor to get value or data
    Complex(int r,int i){
        this->real = r;
        this->img = i;
    }

    void showNum(){
        cout<<"Real = "<<real <<" , "<<"Imaginary : "<<img<<endl;
    }

    Complex operator -(Complex &c2){
        int realSub = this->real - c2.real;
        int imgSub = this->img - c2.img;

        Complex c3(realSub,imgSub);

        return c3;
    }
};

int main(){
    Complex c1(2,4);
    Complex c2(4,5);

    Complex c3 = c1 - c2;
    c3.showNum();
}