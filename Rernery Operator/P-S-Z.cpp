#include<iostream>

using namespace std;

int main()
{
    int num=1;
    cout<<"Enter the number:";
    cin>>num;



    if(num > 0){
        cout<<"Postive";
    }
    else if(num == 0){
        cout<<"Zero";
    }
    else {
        cout<<"Negative";
    }
}
