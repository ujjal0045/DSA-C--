#include<iostream>
using namespace std;

int main()
{
    int amt=0,unit;
    double total_amt,sur_charge;
    cout<<"Enter the unit: ";
    cin>>unit;

    if(unit<=50){
        amt = unit * 0.5;
    }
    else if(unit<=150){
        amt = 25 + ((unit-50) * 0.75);
    }
    else if(unit<=250){
        amt = 100 + ((unit-100) * 1.20);
    }
    else{
        amt = 220 + ((unit-250) * 1.50);
    }
    sur_charge = amt * 0.2;
    total_amt = amt + sur_charge;
    cout<<"Electricity Bill= " <<total_amt;

    return 0;
}