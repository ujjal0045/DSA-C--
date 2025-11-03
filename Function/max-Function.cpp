#include<iostream>
// #include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int largestElement(int a,int b,int c){
    return max( {a,b,c});
}

int main()
{
    int a,b,c;
    cout<<"Enter Number: ";
    cin>>a >>b >>c;
    int result = largestElement(a,b,c);
    cout<<result <<endl;
}