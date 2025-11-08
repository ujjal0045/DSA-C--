#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long num,sum=0,temp;
    int rev,c=0;
    // Get value form user
    cout<<"Enter the number: ";
    cin>>num;
    temp=num;
    
    // Count the number of digit(c)
    while(num!=0){
        c++;
        num/=10;
    }
    num = temp;// Restore the original number...
    
    //Find the sum of powered digits
    while(num!=0){
        rev = num % 10;
        sum+= pow(rev,c);
        num/=10;
    }

    // Compare and output
    if(sum==temp)
        cout<<"Armstrong Number";
    else
        cout<<"Not an Armstrong number";
}