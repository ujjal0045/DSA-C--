#include<iostream>

using namespace std;

int main()
{
    int num=1;
    cout<<"Enter the number:";
    cin>>num;

    if(num % 4 == 0 && num % 100 == 0 || num % 400 != 0){
    cout<<"Leap Year";
    }
    else{
        cout<<"Not leap year";
    }
}
