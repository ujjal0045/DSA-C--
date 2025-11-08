#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char op;

    cout<<"Enter the 1st Number: ";
    cin>>a;
    cout<<"Enter the 2nd Number: ";
    cin>>b;

    cout<<"Enter Operator: ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<"Addtion: " <<a+b <<endl;
        break;
    case '-':
        cout<<"Subtration: " <<a-b <<endl;
        break;
    case '*':
        cout<<"Multiplication: " <<a*b <<endl;
        break;
    case '/':
        cout<<"Division: "<< a/b <<endl;
        break;
    default:
        cout<<"Invalid operation";
        break;
    }
}