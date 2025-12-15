#include<iostream>
#include<string>
using namespace std;

class User{
private:
    long long id;
    string password;
public:
    string username;

    User(long long id){
        this->id = id;
    }

    // use setter
    void setPassword(string passwordVal){
        password = passwordVal;
    }
    // use getter to return the value
    string getPass(){
        return password;
    }
};

int main(){
    User s1(1);
    s1.username="Ujjwal 0045X";
    s1.setPassword("Ujjwal1223");

    cout<<"Username : "<<s1.username<<endl;
    cout<<"Password : "<<s1.getPass()<<endl;
}