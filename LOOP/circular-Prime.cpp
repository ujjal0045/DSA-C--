#include<iostream>
#include<cmath>
using namespace std;

// Function to check prime
bool checkPrime(long long num){
    if(num < 2) return false;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    long long num,temp;

    cout<<"Enter the number: ";
    cin>>num;
    
    temp=num;

    if(!checkPrime(num)){
        cout<<"Not an Circular Prime : "<<num <<endl;
        return 0;
    }
    int digit=0;
    long long powten=1;

    while(temp != 0){
        digit++;
        powten *=10;
        temp/=10;
    }
    powten/=10;
    temp = num;

    bool circular = true;
    for(int i=0;i<digit-1;i++){
        // int rem = temp % 10;
        // temp = (rem * powten) + (temp / 10);
        // cout<<"Rotation : " << temp <<endl;
        // if(!checkPrime(temp)){
        //     circular = false;
        //     break;
        // }
        int rem = temp % powten;
        temp = (rem * 10) + (temp / powten);
        cout<<"Rotation : " << temp <<endl;
        if(!checkPrime(temp)){
            circular = false;
            break;
        }
    }
    if(circular)
        cout <<"Circular prime";
    else 
        cout<<"Not an Circular prime";

}