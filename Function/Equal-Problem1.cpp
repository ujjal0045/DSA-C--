#include<iostream>
using namespace std;

int equaltion(int a,int b){
    return a*a+ b*b + 2*a*b;
}

int main()
{
    int a,b;
    cout<<"Enter Number: ";
    cin>>a >>b;
    int result = equaltion(a,b);
    cout<<result <<endl;
}
