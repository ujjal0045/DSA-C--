#include<iostream>
#include<string>
using namespace std;

class BankAccount{
private:
    long long accountNumber;
    int balance=0;

public:
    void SetAccNum(long long n){
        accountNumber= n;
    }
    void GetAccNum(){
        cout<<"Account Number : "<<accountNumber<<endl;
    }

    void Deposite(int n){
        cout<<"Deposite money = "<<n<<endl;
        balance += n;
        cout<<"total Money : "<<balance<<endl;
    }
    void withdraw(int n){
        if(n < balance){
            cout<<"Withdraw successfull :" <<n<<endl;
            balance -= n;
        } else {
            cout<<"Insufficient Balance...\n";
        }
    }
    void checkBal(){
        cout<<"Current Balance : "<<balance<<endl;
    }
};

int main(){
    BankAccount Acc1;
    // Account number conformed
    Acc1.SetAccNum(1001);
    Acc1.GetAccNum();

    // Deposite money
    Acc1.Deposite(100000);
    Acc1.Deposite(2234);
    Acc1.checkBal();


    // Withdraw Cash
    Acc1.withdraw(1000);
    Acc1.checkBal();
}