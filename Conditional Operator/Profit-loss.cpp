#include<iostream>
using namespace std;

int main()
{
    int cp,sp,amt;
    cout<<"Enter Cost prize: ";
    cin>>cp;
    cout<<"Enter Selling prize: ";
    cin>>sp;

    if(sp>cp){
        amt = sp-cp;
        cout<<"Profit: " <<amt;
    } else if(cp>sp){
        amt = sp-cp;
        cout<<"Loss: " <<amt;
    } else{
        cout<<"No profit no loss";
    }
}