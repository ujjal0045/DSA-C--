#include <iostream>
using namespace std;
int romanToInt(string s) {
        int n = s.length()-1;
        int sum =0;
        int prev = 0;
        while(n>=0)
        {
            int value = 0;
            if('I' == s[n]){
                value += 1;
            }
            else if('V' == s[n]){
                value += 5;
            } else if('X' == s[n]){
                value += 10;
            } else if('L' == s[n]){
                value += 50;
            } else if('C' == s[n]){
                value += 100;
            } else if('D' == s[n]){
                value += 500;
            } else if('M' == s[n]){
                value += 1000;
            }
            if(value < prev){
                 sum -= value;
            }
            else {
                sum += value;
            }
            prev = value;
            n--;
        }
        return sum;
    }

int main() {
    string s;
    cout<<"ENter the roman string value: ";
    cin>> s;
    int n = romanToInt(s);
    cout<<n;
    return 0;
}