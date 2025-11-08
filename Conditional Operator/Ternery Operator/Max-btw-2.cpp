#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter the Number: ";
    cin>>a>>b;
    int largest= a>b ? a : b;
    cout<<largest;
    return 0;
}