#include<iostream>
using namespace std;

int main()
{
    long long num;
    int i,j;

    cout<<"Enter the number: ";
    cin>>num;

    for(j=2;j<=num;j++){
        bool flag=true;
        for(i=2;i<j;i++){
            if(j%i==0){
                flag=false;
            }
        }
        if(flag==true)
            cout<<"Prime Number"<<"  " <<j <<endl ;
        
    }
//     for(i=2;i<num;i++){
//         if(num%i==0){
//             flag=false;
//         }
//     }
//     if(flag==true)
//         cout<<"Prime Number";
//     else
//         cout<<"Not an Prime Number";
}