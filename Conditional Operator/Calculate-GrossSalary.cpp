#include<iostream>
using namespace std;

int main()
{
    int bs;
    float da, hra, gross;

    cout<<"Enter basic salary: ";
    cin>>bs;

    if(bs<=10000){
        da= bs * 0.8;
        hra = bs * 0.20;
    }
    else if(bs <= 20000){
        da = bs * 0.9;
        hra = bs * 0.25;
    } else {
        da = bs * 0.95;
        hra = bs * 0.3;
    }
    gross = bs + da + hra;
    cout<<"Gross Salary : "<<gross <<endl;
}