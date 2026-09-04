#include <iostream>
#include<cmath>
using namespace std;

// 135 = (1) + (3*3) + (5*5*5) = 135;

int countNumber(int n){
  if(n == 0) return 1;
  int c =0;
  while(n>0){
    n /= 10;
    c++;
  }
  cout<<"Count: "<<c<<endl;
  return c;
}

void isDisarium(int n,int count){
  int temp=n,sum=0;
  while(n > 0){
    int digit = n % 10;
    int powNum = 1;

    for (int i = 0; i < count; i++) {
      powNum *= digit;
    }
    count--;
    sum += powNum;
    n /= 10;
  }
  cout<<"number: "<<sum<<endl;
  if(temp == sum) cout<<"Disarium Number" <<temp<<endl;
  else cout<<"Not an Disarium Number"<<endl;
}

int main() {
    int n = 135;
    int c = countNumber(n);
    isDisarium(n,c);
    return 0;
}