#include<iostream>

using namespace std;

int main()
{
    int n,a=0,b=1,c;
    cout<<"Enter the no: ";
    cin>>n;
    if(n == 1) cout<<1;
    if(n==0) cout<<0;
    for(int i=2;i<=n;i++){
        c = a+b;
        a = b;
        b = c;
        cout<<c <<" ";
    }
}
