#include <iostream>
#include <cmath>
using namespace std;

int countNumber(int n){
    if(n == 0){
        return 1;
    }
    int c=0;
    while(n != 0){
        n = n / 10;
        c++;
    }
    return c;
}

int multiplyNumber(int c){
    int digit = 1;
    while(c != 1){
        digit *= 10;
        c--;
    }
    return digit;
}

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i< n;i++){
        if(n % i == 0) return false;
    }
    return true;
}

bool checkCircular(int n){

    int c = countNumber(n);
    int powten = multiplyNumber(c);

    
    cout<<"Powten: "<<powten <<endl <<"count: "<<c <<endl;
    bool flag = true;
    for(int i =1;i<c;i++){
        int r = n % powten;
        n = (r*10) + (n / powten);
        cout<<"Rotation : "<<n <<endl;
        if(!isPrime(n)){
            cout<<"Not an circular prime..."<<endl;
            flag = false;
            break;
        }
    }
    return flag;
}


int main() {
   int n;
   cout<<"ENter the number: ";
   cin>>n;
   if(! isPrime(n)){
    cout<<"Not an circular prime";
    return 0;
   }
   if(checkCircular(n)) cout<<"Circular prime: "<<n;


   
    return 0;
}