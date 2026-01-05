#include<iostream>
using namespace std;

bool isUnique(int num){
    int n1=num;

    while(n1 > 0){

        int d1 = n1 % 10;
        int n2 = num;
        int c = 0;

        while(n2 > 0){

            int d2 = n2 % 10;
            if(d1 == d2){
                c++;
            }
            n2 /= 10;
        }
        if(c>1) return false;
        n1 /= 10;
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    if(isUnique(num)){
        cout<<"Unique number : "<<num <<endl;
    } else{
        cout<<"Not an Unique Number : "<<num<<endl;
    }
}